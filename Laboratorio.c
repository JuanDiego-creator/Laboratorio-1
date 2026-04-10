#include<stdio.h>

int main(){
    float num1 = 0;
    float num2 = 0;

    while (num1 <= 0 || num2 <= 0){
        printf("Ingrese la nota 1: \n");
        scanf("%f", &num1);
        printf("Ingrese la nota 2: \n");
        scanf("%f", &num2);


        if (num1 >= 0 && num2 >= 0){
            float prom = (num1 + num2) / 2;
            printf("Su promedio es %.2f\n", prom);

            if(prom >= 14){
                printf("FELICIDADES!!\n");
                printf("Aprueba\n");
            }else if (prom < 14 && prom >= 11){
                printf("Supletorio\n");
            }else{
                printf("Reprueba\n");
            }
        }
    }

    return 0;
}
