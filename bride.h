#ifndef BRIDE_H_
#define BRIDE_H_

#include <stdio.h>

#define MAX_SIZE    100000        // Define maximum length of the queue

// List Function Prototypes
void BrideInitQueue();             // Initialize the queue
void BrideClearQueue();            // Remove all items from the queue
int BrideEnqueue(int ch);         // Enter an item in the queue
int BrideDequeue();               // Remove an item from the queue
int BrideisEmpty();                // Return true if queue is empty
int BrideisFull();                 // Return true if queue is full
void BrideDisplay();		 //Display brides

// Define TRUE and FALSE if they have not already been defined
#ifndef FALSE
#define FALSE (0)
#endif
#ifndef TRUE
#define TRUE (!FALSE)
#endif
#endif // End of queue header
