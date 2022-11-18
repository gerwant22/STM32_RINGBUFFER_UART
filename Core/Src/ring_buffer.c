/*
 * ringbuffer.c
 *
 *  Created on: 18 lis 2022
 *      Author: gerwant22
 */
#include "main.h"
#include "ring_buffer.h"

RB_Status RB_Write(RingBuffer_t *Buf, uint8_t Value)
{
    uint8_t HeadTmp = (Buf->Head + 1 % RING_BUFFER_SIZE);

    if (HeadTmp == Buf->Tail)
    {
        return RB_ERROR;
    }

    Buf->Buffer[Buf->Head] = Value;
    Buf->Head = HeadTmp;

    return RB_OK;
}
