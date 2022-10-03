#include <stdio.h>

int main() {
    int a,b,c,d;
    printf("Calculator in C\nMenu: \n1)Addition\n2)Substraction\n3)Multiplication\n4)Division\n\nEnter choice follwed by the 2 numbers: ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    switch(a){
        case 1:
            printf("Addition is %d", b+c);
            break;
        case 2:
            printf("Substraction is %d",b-c);
            break;
        case 3:
            printf("Multiplication is %d",b*c);
            break;
        case 4:
            printf("Division is %d",b/c);
            break;
    }
    return 0;
}
