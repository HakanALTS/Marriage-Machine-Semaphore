#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<semaphore.h>
#include "bride.h"
#include "groom.h"
#include "registrar.h"



sem_t semafore;
pthread_t tid[2];

int orderOfBride=-1;//Order of bride
int orderOfGroom=-1;//Order of groom

void* firstRegistrarFunction(void *id)
{
	while(1)//infinite loop
	{
		int order;		
		int flag1=0;// control enough couple
		
		sem_wait(&semafore);
		int value;
		sem_getvalue(&semafore, &value); 
				
		if(!BrideisEmpty() && !GroomisEmpty() ) // Critical Operation is taking one couple
		{
			flag1=1;
			order=BrideDequeue();
			int temp=GroomDequeue();			
		}	
			
		sem_post(&semafore);

		if(flag1)// enough couple
		{
			registrar1_makes_MARRIAGE_CEREMONY(order);
		}
		else// not enough couple
		{
			registrarSleeping(1);
		}
	}
	
		addBride();// add new bride
		addGroom();// add new groom	


	
	return NULL;
}


void* secondRegistrarFunction(void *id)
{
	while(1)//infiniteloop
	{
		int flag2=0;// control enough couple
		int order;		
			

		sem_wait(&semafore);
		int value;
		sem_getvalue(&semafore, &value); 
				
		if(!BrideisEmpty() && !GroomisEmpty() ) // Critical Operation is taking one couple
		{
			flag2=1;
			order=BrideDequeue();
			int temp=GroomDequeue();			
		}	
			
		sem_post(&semafore);

		if(flag2)// enough couple
		{
			registrar2_makes_MARRIAGE_CEREMONY(order);
		}
		else //not enoug couple
		{
			registrarSleeping(2);
		}
		
		addBride();// add new bride
		addGroom();// add new groom	

	
	}
	
	
    return NULL;
}

void addGroom()
{
	
	int rnd = rand()%3;// random add new
	
	if(rnd>=1)
	{
		orderOfGroom++;
		GroomEnqueue(orderOfGroom);
		
	}
			
	GroomDisplay();

}

void addBride()
{
	
	int rnd = rand()%3;// random  add new
	
	if(rnd>=1)
	{
		orderOfBride++;
		BrideEnqueue(orderOfBride);
		
	}
			
	BrideDisplay();
}



int main(void)
{
	BrideInitQueue();
	GroomInitQueue();	
	
	int i;	
	for(i=0;i<14;i++)// first add bride
	{
		orderOfBride++;
		BrideEnqueue(orderOfBride);
		
	}
	
	for(i=0;i<15;i++)// first add groom
	{
		orderOfGroom++;
		GroomEnqueue(orderOfGroom);
		
	}
	

	sem_init(&semafore, 0, 1);

	pthread_create(&(tid[0]), NULL, &secondRegistrarFunction, (void *)i+1);//create thread 1
	pthread_create(&(tid[1]), NULL, &firstRegistrarFunction, (void *)i+1);//create thread 2

	pthread_join(tid[0], NULL);
	pthread_join(tid[1], NULL);
   
    	sem_destroy(&semafore);

    return 0;
}
