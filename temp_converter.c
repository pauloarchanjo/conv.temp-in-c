#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<ctype.h>
#include<conio.h>
#include<locale.h>

int main() {
    // Acentuação de caracteres para Português do Brasil
    setlocale(LC_ALL, "Portuguese_Brazil");

    char op;
    float tfa, tka, tfb, tkb, tcc, tkc, tcd, tkd, tfe, tce, tcf, tff;

    // Inicio
    do {
        // Menu do programa
        system("cls");
        printf("\t\t\t|  {<MENU DE TEMPERATURAS>}  |\n");
        printf("\t\t\t|  Feito por Paulo Archanjo  |\n ______________________________________________________________________________");
        printf("\n\n   A. Fahrenheit para Kelvin \t\t\t B. Kelvin para Fahrenheit\n");
        printf("\n   C. Celsius para Kelvin \t\t\t D. Kelvin para Celsius\n");
        printf("\n   E. Fahrenheit para Celsius \t\t\t F. Celsius em Fahrenheit\n");
        printf("\n \t\t\t\t   S. SAIR\n");
        printf("\n\n   Escolha a sua Opção: ");
        op = toupper(getche());
        switch (op) {

        case 'A':
            // Fahrenheit para Kelvin
            printf("\n\n   Digite o valor da Temperatura em Fahrenheit: ");
            scanf("%f", &tfa);
            tka = (tfa * 1.8) - 459.67;
            printf("\n   O Valor digitado convertido em Kelvin = %.2f\n", tka);
            printf("\n   Pressione qualquer tecla para continuar...");
            getch();
            break;

        case 'B':
            // Kelvin para Fahrenheit
            printf("\n\n   Digite o valor da Temperatura em Kelvin: ");
            scanf("%f", &tkb);
            tfb = (tkb + 459.67) / 1.8;
            printf("\n   O Valor digitado convertido em Fahrenheit = %.2f\n", tfb);
            printf("\n   Pressione qualquer tecla para continuar...");
            getch();
            break;

        case 'C':
            // Celsius para Kelvin
            printf("\n\n   Digite o Valor da Temperatura em Celsius: ");
            scanf("%f", &tcc);
            tkc = (tcc) + 273;
            printf("\n   O Valor digitado convertido em Kelvin = %.2f\n", tkc);
            printf("\n   Pressione qualquer tecla para continuar...");
            getch();
            break;

        case 'D':
            // Kelvin para Celsius
            printf("\n\n   Digite o Valor da Temperatura em Kelvin: ");
            scanf("%f", &tcd);
            tkd = (tcd) - 273.15;
            printf("\n   O Valor digitado convertido em Celsius = %.2f\n", tkd);
            printf("\n   Pressione qualquer tecla para continuar...");
            getch();
            break;

        case 'E':
            // Fahrenheit para Celsius
            printf("\n\n   Digite o Valor da Temperatura em Fahrenheit: ");
            scanf("%f", &tfe);
            tce = (tfe - 32) * 5 / 9;
            printf("\n   O Valor Digitado Convertido em Celsius = %.2f\n", tce);
            printf("\n   Pressione qualquer tecla para continuar...");
            getch();
            break;

        case 'F':
            // Celsius para Fahrenheit
            printf("\n\n   Digite o Valor da Temperatura em Celsius: ");
            scanf("%f", &tcf);
            tff = (tcf * 9 / 5) + 32;
            printf("\n   O Valor Digitado Convertido em Fahrenheit = %.2f\n", tff);
            printf("\n   Pressione qualquer tecla para continuar...");
            getch();
            break;

        default:
            printf("\n\nOPÇÃO INVÁLIDA\n");
        }

    } while (op != 'S');

    return 0;
}
