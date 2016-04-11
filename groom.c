#include "groom.h"
#include <stdlib.h>

//compile with gcc groom.c -o groom.out -c, because not main funtion


static int head, tail;	// Declare global indices to head and tail of queue
static int theQueue[MAX_SIZE];	// The queue


void GroomInitQueue()
{
	head = tail = -1;
}

void GroomClearQueue()
{
	head = tail = -1; // Reset indices to start over
}

int GroomEnqueue(int ch)
{
	// Check to see if the Queue is full
	if(GroomisFull()) return FALSE;

	// Increment tail index
	tail++;
	// Add the item to the Queue
	theQueue[tail % MAX_SIZE] = ch;
	return TRUE;
}

int GroomDequeue()
{
	int ch;

	// Check for empty Queue
	if(GroomisEmpty()) return '\0';  // Return null character if queue is empty
	else
	{
		head++;
		ch = theQueue[head % MAX_SIZE];		// Get character to return
		return ch;				// Return popped character
	}
}


int GroomisEmpty()
{
	return (head == tail);
}


int GroomisFull()
{
	// Queue is full if tail has wrapped around
	//	to location of the head.  See note in
	//	Enqueue() function.
	return ((tail - MAX_SIZE) == head);
}

void GroomDisplay()
{
	printf("\n");
	printf("Groom Queue: ");
	int i;
	for(i=head+1;i<=tail;i++)
	{
		printf("|%d.groom     |",theQueue[i]);
	}
	printf("\n");		

}

