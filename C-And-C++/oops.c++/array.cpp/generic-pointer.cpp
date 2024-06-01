#include<iostream>
using namespace std;
int main()
{
    int i;
    char *c="rakesh";
    void *the_data;

    i=8;
    the_data=&i;
    cout<<"the_data pointd to the integer value \n"<< *(int*)the_data<<endl;
    the_data=c;
cout<<"the_data now points to the character value \n"<<(char*) the_data<<endl;
return 0;


}