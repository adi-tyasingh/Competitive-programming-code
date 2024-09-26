/*
Name: Aditya Pratap Rajesh Kumar Singh
Roll Number: 15
*/

#include <stdio.h>

#define FLAG 0x7E 
#define ESCAPE 0x7D 

void bitStuffing(unsigned char* data, int* size) {
    int i, count = 0;

    for (i = 0; i < *size; i++) {
        if (data[i] == FLAG || data[i] == ESCAPE)
            count++;
    }

    *size += count; 
    for (i = *size - 1; i >= 0; i--) {
        if (data[i - count] == FLAG || data[i - count] == ESCAPE) {
            data[i] = data[i - count]; 
            if (data[i] == FLAG)
                data[i + 1] = FLAG ^ 0x20;
            else
                data[i + 1] = ESCAPE ^ 0x20; 
            count--;
        } else {
            data[i] = data[i - count];
        }
    }
}

void bitDestuffing(unsigned char* data, int* size) {
    int i, count = 0;

    for (i = 0; i < *size; i++) {
        if (data[i] == ESCAPE)
            count++;
    }

    for (i = 0; i < *size; i++) {
        if (data[i] == ESCAPE) {
            data[i] = data[i + 1] ^ 0x20; // Remove stuffing and obtain original byte
            *size -= 1; // Decrease size as stuffed byte is removed
            count--;
            for (int j = i + 1; j < *size; j++)
                data[j] = data[j + 1]; // Shift data to remove stuffed byte
        }
    }
}