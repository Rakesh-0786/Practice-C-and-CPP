
#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main()
{
    char str[100];
    int i,totChar;
totChar=0;
    cout<<"Please enter the string for count characters\n";
    gets(str);//gets and store string from useer
//count characters of a string wit out space
    for(i=0; str[i] != '\0'; i++){
        if(str[i]!=' ')// this condition is used to avoid counting space
        {
            totChar++;
        }
    }
    cout<<"The total characters of the given string= "<<totChar;
    getch();
    return 0;
}