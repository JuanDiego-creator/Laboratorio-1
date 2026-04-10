#include<stdio.h>

int main(){
    float num1 = 0;
    float num2 = 0;


    printf("----Ingrese sus Notas----\n");
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
                printf("FELICES VACACIONES\n");
            }else if (prom < 14 && prom >= 11){
                printf("BIENVENIDOS A SUPLETORIOS\n");
                printf("ESFUERZATE EN LOS SUPLETORIOS\n");
                printf("Supletorio\n");
            }else{
                printf("ESFUERZATE MAS PARA LA PROXIMA\n");
                printf("Reprueba\n");
            }
        }
    }

    return 0;
}
