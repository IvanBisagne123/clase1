#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    char letra;
    char palabra[10];

    printf("ingrese un numero: ");
    scanf("%d",&numero);

    printf("ingrese una palabra: ");
    setbuf(stdin,NULL);
    scanf("%s", &palabra);

    printf("la palabra es: %S", palabra);

   /* printf("ingrese una letra: ");
    //fflush(stdin);
    setbuf(stdin;NULL);
    scanf("&c",&letra);

    printf("el numero es; %d\nLa letra es: %c", numero,letra);

    system("pause");
    */return 0;
}
