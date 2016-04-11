#include "bride.h"
#include <stdlib.h>

//compile with gcc groom.c -o groom.out -c, because not main funtion

static int head, tail;	// Declare global indices to head and tail of queue
static int theQueue[MAX_SIZE];	// The queue

void BrideInitQueue()
{
	head = tail = -1;
}

void BrideClearQueue()
{
	head = tail = -1; // Reset indices to start over
}

int BrideEnqueue(int ch)
{
	// Check to see if the Queue is full
	if(BrideisFull()) return FALSE;

	// Increment tail index
	tail++;
	// Add the item to the Queue
	theQueue[tail % MAX_SIZE] = ch;
	return TRUE;
}

int BrideDequeue()
{
	int ch;

	// Check for empty Queue
	if(BrideisEmpty()) return '\0';  // Return null character if queue is empty
	else
	{
		head++;
		ch = theQueue[head % MAX_SIZE];		// Get character to return
		return ch;				// Return popped character
	}
}

int BrideisEmpty()
{
	return (head == tail);
}

int BrideisFull()
{
	// Queue is full if tail has wrapped around
	//	to location of the head.  See note in
	//	Enqueue() function.
	return ((tail - MAX_SIZE) == head);
}

void BrideDisplay()
{
	printf("\n");
	printf("Bride Queue: ");
	int i;
	for(i=head+1;i<=tail;i++)
	{
		printf("|%d.bride     |",theQueue[i]);		
	}
	printf("\n");

}

