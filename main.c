#include <stdio.h>
#include <stdlib.h>

void func1(void){
     int x;
     printf("func1 x is at %p\n", &x);
     }
     
int main(void){
    int x;
    printf("main x is at %p\n", &x);
    func1();
    
    system("PAUSE");	
    return 0;
}
