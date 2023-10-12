#include <stdio.h>
#include <stdlib.h>

void print_star(void)
{
  int i;
  for(i=0;i<10;i++)
  printf("*");
}

int main(void){
    
  int i;
    
  print_star();
  print_star();
  print_star();
  
  system("PAUSE");	
  return 0;
}
