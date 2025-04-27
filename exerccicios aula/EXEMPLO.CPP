#include<stdio.h>
#include<stdlib.h>

float y(float x){
    float a=2.f,b=3.f;
    return a*x+b;

}
int main(){    
    float resposta;
    resposta=y(2);
    printf("%.2f",resposta);
    return(0);
    getchar();
}