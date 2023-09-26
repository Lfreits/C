#include <stdio.h>
#include <math.h>

int main(){
    float num1,num2,num3,num4,media;
    printf("Informe o número com peso 1:\n>>>");
    scanf("%f",&num1);
    printf("Informe o número com peso 2:\n>>>");
    scanf("%f",&num2);
    printf("Informe o número com peso 3:\n>>>");
    scanf("%f",&num3);
    printf("Informe o número com peso 4:\n>>>");
    scanf("%f",&num4);
    num2 *= 2;
    num3 *= 3;
    num4 *= 4;
    media = (num1+num2+num3+num4)/10;
    printf("A média ponderada dos números é de %f\n",media);

    system("pause");
    return 0;
}