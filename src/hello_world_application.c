#include <stdio.h>
#include <unistd.h>

int main()
{
    // Print "Hello World" to the console
    printf("Hello Universe\n");
    
    // Pause execution for 10 seconds
    sleep(10);

    // Intentionally create a crash in this application
    
    int variable = 8;
    
    int *ptr = NULL;
    
    // Attempt to dereference a NULL pointer and assign the address of 'variable' to it, which will cause a segmentation fault
    *ptr = &variable;
    
    return 0;

}
