#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <ctype.h>
#include <locale.h>

int main()
{

    // char op = '0';

    int num1 = 0;
    int num2 = 0;
    int res = 0;
    int soma = 0;
    int sub = 0;
    int mult = 0;
    int div = 0;

    do
    {

        printf("[1] somar\n");
        printf("[2] subtrair\n");
        printf("[3] multiplicar\n");
        printf("[4] dividir\n");
        printf("[5] para sair.");

        printf("informe a operacao: \n");
        scanf("%i", &res);
        system("cls");

        if (res == 1)
        {

            printf("digite o primeiro numero: \n\t ");
            scanf("%i", &num1);
            printf("digite o segundo numero: \n\t ");
            scanf("%i", &num2);
            soma = num1 + num2;

            printf("O valor da soma e: %i \n", soma);
        }
        else
        {

            if (res == 2)
            {
                printf("digite o primeiro numero: \n\t ");
                scanf("%i", &num1);
                printf("digite o segundo numero: \n\t ");
                scanf("%i", &num2);
                sub = num1 - num2;
                printf("o valor da subtracao e: %i\n", sub);
            }

            else
            {
                if (res == 3)
                {

                    printf("digite o primeiro numero: \n\t ");
                    scanf("%i", &num1);
                    printf("digite o segundo numero: \n\t ");
                    scanf("%i", &num2);
                    mult = num1 * num2;
                    printf("o valor da multiplicacao e: %i \n", mult);
                }

                else
                {
                    if (res == 4)
                    {

                        printf("digite o primeiro numero: \n\t ");
                        scanf("%i", &num1);
                        printf("digite o segundo numero: \n\t ");
                        scanf("%i", &num2);
                        div = num1 / num2;
                        printf("o resultado da divisao e: %i\n\t", div);
                    }
                }
            }
        }

    } while (res != 5);
    printf("voce saiu da calcualdora.\n");

    return 0;
}
