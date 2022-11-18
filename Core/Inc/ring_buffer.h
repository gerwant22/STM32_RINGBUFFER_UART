/*
 * ringbuffer.h
 *
 *  Created on: 18 lis 2022
 *      Author: gerwant22
 */

#ifndef INC_RING_BUFFER_H_
#define INC_RING_BUFFER_H_

#define RING_BUFFER_SIZE 8
// Success status

typedef enum
{
    RB_OK = 0,
    RB_ERROR = 1

} RB_Status;

// Oject ring buffer

typedef struct
{

    uint16_t Head;
    uint16_t Tail;

    uint8_t Buffer[RING_BUFFER_SIZE];

} RingBuffer_t;

// Functions
// Write

// Read

// Flush

#endif /* INC_RING_BUFFER_H_ */
