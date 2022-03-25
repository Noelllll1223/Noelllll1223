#include <stdlib.h>

int data[500]={};

void dataset(){
    
    for (int i=0; i<500; i++)
    {
        data[i] = rand();
    }    
}