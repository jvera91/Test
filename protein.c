#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Get user's Weight
    int w = get_int("Enter Weight : ");
    
    // Weight * .36
    float p = { w * .36};
    
    //Print daily protein
    printf("This is how much protein you need daily: %f\n", p);
}
