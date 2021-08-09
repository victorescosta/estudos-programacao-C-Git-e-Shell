#include <stdio.h> // necessary library to exec printf function
#include <cs50.h> // necessary library to exec get_string function

int main(void) // entry function
{
    // requiring a name, asking for it and recording it in memory
    string name = get_string("What's your name? ");
    // greeting the user with her/him own name
    printf("hello, %s\n", name);
}
