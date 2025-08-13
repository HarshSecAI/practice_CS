#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height; // input from user
    do{
        height= get_int("Height: ");
    }
     while( height < 1);


}
