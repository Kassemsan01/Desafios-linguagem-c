/*1 - Escreva um programa para receber 5 nomes, com até 7 caracteres, via teclado
    e imprima-os no video no seguinte formato:(Declare os vetores como variavel
    global)

            10        20        30        40        50
    12345678901234567890123456789012345678901234567890
      nome1                                   nome5
                nome2               nome4
                          nome3*/

#include<stdio.h>
#include<locale.h>
#define ex5
#ifdef ex1
char nome1[7];
char nome2[7];
char nome3[7];
char nome4[7];
char nome5[7];
int g;
main()
{ setlocale(LC_ALL,"");

do{
  printf("Digite o 1° nome:");
  gets(nome1);

  printf("Digite o 2° nome:");
  gets(nome2);

  printf("Digite o 3° nome:");
  gets(nome3);

  printf("Digite o 4° nome:");
  gets(nome4);

  printf("Digite o 5° nome:");
  gets(nome5);

  printf("        10        20        30        40        50\n");
  printf("12345678901234567890123456789012345678901234567890\n");

  printf("%s                                    %s\n",nome1,nome5);
  printf("        %s                  %s\n",nome2,nome4);
  printf("                  %s\n",nome3);

 printf("\nDeseja contnuar?\n");
     printf("1-Sim\n");
     printf("2-Não\n");
     scanf("%d",&g);
      }while(g==1);
}
#endif // ex1

/*2 - Receba 2 string de ate 10 caracteres via teclado na funcao main() e noutra
    funcao compare-as mostrando como resultado se são IGUAIS ou DIFERENTES na funcao
    main(). (Declare os vetores como variavel global)*/
#ifdef ex2
char a[11];
char b[11];
char c=0;
int g;
main()
{ setlocale(LC_ALL,"");
do{
 printf("Digite 10 caracteres:");
 gets(a);
 printf("Digite 10 caracteres:");
 gets(b);
comp();

printf("\nDeseja contnuar?\n");
     printf("1-Sim\n");
     printf("2-Não\n");
     scanf("%d",&g);
      }while(g==1);
}
comp()
{
    while(a[c]==b[c] && a[c]!='\0'&& b[c]!='\0')
    {
        c++;
    }
    if(a[c]=='\0' && b[c]=='\0')
    {
        printf("Valores iguais");
    }
    else
    {
        printf("Valores diferentes");
    }
}
#endif // ex2
/*3 - Receba via teclado uma cadeia de caracteres (10) e converta todos os caracteres
    para letras maiusculas.*/
    #ifdef ex3
    #include<string.h>
    char mai[10];
    int g;
    main()
    {setlocale(LC_ALL,"");
    do{
     printf("Digite 10 caracteres minusculo\n");
     scanf("%s",&mai);
     printf("Os caracteres em maiusculo:%s",strupr(mai));

     printf("\nDeseja contnuar?\n");
     printf("1-Sim\n");
     printf("2-Não\n");
     scanf("%d",&g);
      }while(g==1);

    }
    #endif // ex3
    /*4 - Receba via teclado uma cadeia de caracteres (10) e converta todos os caracteres
    para letras minusculas.*/
    #ifdef ex4
    #include<string.h>
    char min[10];
    int g;
    main()
    {setlocale(LC_ALL,"");
    do{
     printf("Digite 10 caracteres:");
     scanf("%s",&min);
     printf("Letras minusculas:%s",strlwr(min));

     printf("\nDeseja contnuar?\n");
     printf("1-Sim\n");
     printf("2-Não\n");
     scanf("%d",&g);
      }while(g==1);

    }
    #endif // ex4
    /*5 - Faca um programa que leia uma palavra (maximo de 20 letras) em uma funcao
    e some 1 no valor ASCII de cada caractere da palavra em outra funcao. Na sua
    funcao main() imprima a string resultante. (Declare o vetor como variavel
    global)*/
    #ifdef ex5
    char palavra[20];
    char i;
    int g;
    main()
    { setlocale(LC_ALL,"");
    do{
  pala();
  printf("O valor de ascii é:\n");
  ascii();

    printf("\nDeseja contnuar?\n");
     printf("1-Sim\n");
     printf("2-Não\n");
     scanf("%d",&g);
    }while(g==1);
    }
    pala()
    {printf("Digite uma palavra\n");
     scanf("%s",&palavra);

    }
    ascii()
    {   for(i=0;i<20;i++)
    {
      printf("[%d]\n",palavra[i]);
    }
    }
    #endif // ex5

