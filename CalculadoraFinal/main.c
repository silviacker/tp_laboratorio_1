#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include <float.h>

//declaro las funciones
void sumar(float x, float y);
void restar(float x, float y);
void multiplicar(float x, float y);
void dividir(float x, float y);
void factorial(float x);


int main()
{
    char resp;
    do
    {
        system("cls");
        float x, y;
        int opc;
        printf("\n[1] SUMA");
        printf("\n[2] RESTA");
        printf("\n[3] MULTIPLICACION");
        printf("\n[4] DIVISION");
        printf("\n[5] FACTORIAL");
        printf("\n[6] TODAS LAS OPERACIONES");
        printf("\n[7] SALIR");
        printf("\n Elija una opcion:");
        scanf("%d", &opc);
        fflush(stdin);

        if (opc != 5) { // si no elijo la opcion de factorial
            printf("Ingrese primer numero:");
            scanf("%f", &x);
            printf("Ingrese segundo numero:");
            scanf("%f", &y);
        }else{
            printf("\nIngrese un numero para calcular el factorial:");
            scanf("%f", &x);

            while (x < 0)
            {
                 printf("\nEl numero ingresado debe ser mayor o igual a cero");
                 printf("\nIngrese un numero para calcular el factorial:");
                 scanf("%f", &x);
                 system("cls");
                  //return 0;
             }
        }

        switch (opc)
        {
            case 1:
                sumar(x, y);
                break;
            case 2:
                restar(x, y);
                break;
            case 3:
               multiplicar(x , y);
                break;
            case 4:
                dividir(x, y);
                break;
            case 5:
                  factorial(x);
                break;
            case 6:
                sumar(x, y);
                restar(x, y);
                multiplicar(x, y);
                dividir(x, y);
                factorial(x);
                break;
            case 7:
                return 0;
                break;
        }
        do
        {
            printf("\nDesea continuar S/N");
            scanf("%s", &resp);
            resp = toupper(resp);

        } while (resp != 'S' && resp != 'N');
    } while (resp == 'S');
}

// esta funcion realiza x+y
void sumar(float x, float y)
{
    float resultadosuma =  x + y;
    printf("\nLa suma es:%f", resultadosuma);
}

// esta funcion realiza x-y
void restar(float x, float y)
{
    float resultadoresta =  x - y;
    printf("\nLa resta es:%f", resultadoresta);
}

// esta funcion realiza x*y
void multiplicar(float x, float y)
{
  float resultadomultiplicar =  x * y;
  printf("\nLa multiplicacion es:%f", resultadomultiplicar);
}

// esta funcion realiza x/y
void dividir(float x, float y)
{
    while (y == 0)
    {
        printf("No se puede dividir por cero por lo que el segundo número debe ser mayor a 0");
        printf("Ingrese primer numero:");
        scanf("%f", &x);
        printf("Ingrese segundo numero:");
        scanf("%f", &y);
    }
    float resultadodividir = x / y;
    printf("\nLa division es:%f", resultadodividir);
}

// esta funcion realiza x!
void factorial(float x)
{
    float resultado=1;

    if (x == 0)
    {
        resultado = 1;
    }
    else
    {
        for (int i=1;i<=x;i++)
        {
            resultado= resultado * i;
        }
    }
    printf("\nEl factorial es:%f",resultado);
}
