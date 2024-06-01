#include<stdio.h>
int main()
{
   
  int i;
  char *c;
  void *the_data;

  i = 6;
  c = "Rakesh  ";

  the_data = &i;
  printf("the_data points to the integer value %d\n", *(int*)the_data);

  the_data = c;
  printf("the_data now points to the character %s\n",(char*)the_data) ;

  return 0;
}
     

