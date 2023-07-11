#include<stdio.h>
#include<tgmath.h>

void main(){
float a,b,c, area, p;

printf("Entre com o valor a: ");
scanf("%f", &a);
printf("Entre com o valor b:");
scanf("%f", &b);
printf("Entre com o valor c:");
scanf("%f", &c);

if(a > 0 && b > 0 && c > 0){
    if(a<b+c && b<a+c && c<a+b){
    if(a== b && b==c){
        printf("Triangulo equilatero!!\n");
    }else if(b||a && b || c && a||c){
        printf("Triangulo escaleno!!\n");
    }else{
        printf("Triangulo isoseles!!\n");
    }

p=(a+b+c)/2;
area = sqrt(p*(p-a)*(p-b)*(p-c));
 printf("\nArea e :%i ", area);
}else{
printf("Nao existe Triangulo!!");
}
}
system("pause");
}





