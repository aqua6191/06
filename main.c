#include <stdio.h>
#include <stdlib.h>

int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

int combination(int n, int r) {
    int numerator = factorial(n);
    int denominator = factorial(n-r)*factorial(r);
    
    return (numerator/denominator);
} 

int get_integer(){
    int value;
    printf("Enter an integer:");
    scanf("%d", &value);
    return value;
}

int main(void){
    int n, r;
    int result;
    
    printf("Input n:");
    scanf("%d", &n);
    //n = get_integer(); 
    
    printf("Input r: ");
    scanf("%d", &r);
    //r = get_integer();
    
   result = combination(n, r);
   
   printf("C(%d, %d) = %d\n", n, r, result); 
   system("PAUSE");	
   return 0;
}

