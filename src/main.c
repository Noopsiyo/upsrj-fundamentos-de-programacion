#include <stdio.h>


int is_even(int number) {
    if(number %2 == 0) {
        return 1;
    } else {
        return 0; }
}
    
    int main(){        int num;
        int result;
    
    {

    printf("inserta un numero: ");
    scanf("%d", &num);
    
    
    }

result = is_even(num);
    {
    
    }

    if(result == 1) {
        printf("El numero es par: %d\n", num);
    }
    
    else 
    {
        printf("El numero es impar: %d\n", num); 
    }
    if(num<=0)
    {
     printf("ingresa un numero valido\n, %d", num);

    }
    }

int dummy(){
    return 0;
}