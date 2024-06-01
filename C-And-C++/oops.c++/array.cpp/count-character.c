#include <stdio.h>  
   
int main()  
{  
    char string[] = " kjnkhcskrnfijlskjwbgcdjfjdakjkdscgjbdnfcb h";  
    int count = 0;  
      
    //Counts each character except space  
    for(int i = 0; i < strlen(string); i++) {  
        if(string[i] != ' ')  
            count++;  
    }  
      
    //Displays the total number of characters present in the given string  
    printf("Total number of characters in a string: %d", count);  
   
    return 0;  
}