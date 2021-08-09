/*Determine how long it takes for a population to reach a particular size.
It can't be less than 9 at its start size.
It can't be End size less than the start size.*/
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int start;
    int end;
    // TODO: Prompt for start size
    do
    {
        start = get_int("Start size: ");
    }    
    while (start < 9);
    // TODO: Prompt for end size
    do
    {
        end = get_int("End size: ");
    }
    while (end < start);
    // TODO: Calculate number of years until we reach threshold
    int year;
    
    year = 0;
    while(start < end)
    {
        /* simple calc here. combining start size to a new start adding the growth and dead 
        population of llamas per year. After this, updating the year and give finitude to
        the while loop */
        start = (start + (start / 3)) - (start / 4);
        year++;
    }
    // TODO: Print number of years
    printf("Years: %d\n", year);
}

/* some sketches before things got right

how many years to started until end
grow_llamas = started / 3
dead_llamas =  started / 4
year = 1;
while (started_size < end_size)
{
year++;
started_size = started + grow - dead
}
printf(years)
*/
