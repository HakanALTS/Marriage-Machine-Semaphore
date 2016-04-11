#ifndef GROOM_H_
#define GROOM_H_


#include <stdio.h>

#define MAX_SIZE    100000        // Define maximum length of the queue

// List Function Prototypes
void GroomInitQueue();             // Initialize the queue
void GroomClearQueue();            // Remove all items from the queue
int GroomEnqueue(int ch);         // Enter an item in the queue
int GroomDequeue();               // Remove an item from the queue
int GroomisEmpty();                // Return true if queue is empty
int GroomisFull();                 // Return true if queue is full
void GroomDisplay();		 //Display brides

// Define TRUE and FALSE if they have not already been defined
#ifndef FALSE
#define FALSE (0)
#endif
#ifndef TRUE
#define TRUE (!FALSE)
#endif
#endif // End of queue header
