#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    /* defining variables for change, cents and coins */
    float change;
    int cents;
    int coin;
    
    
    do
    {
        change = get_float("Change owed: ");
        cents = round(change * 100); /* after receiving the input change, round the number to
         use in the coin counter eg.: 0.41 turns 41 */
        
    }
    while (change < 0);
    
    
    
    coin = 0; // defining the coin counter index
    while (cents >= 25) // the largest coin comes first, while the smallest last.
    {
        cents = cents - 25; // subtracting the amount of necessary change to give a coin
        coin++; // adding 1 in the coin counter, to certify how much coins were used
    }
    while (cents >= 10)
    {
        cents = cents - 10;
        coin++;
    }
    while (cents >= 5)
    {
        cents = cents - 5;
        coin++;
    }
    while (cents >= 1)
    {
        cents = cents - 1;
        coin++;
    }
    
    printf("%d\n", coin); // printing the amount of coins used to the change.
    
}
