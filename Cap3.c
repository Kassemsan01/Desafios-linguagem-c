/*1 - Escreva um programa que receba na funcao main() 2 valores inteiro. Escreva
    uma funcao para cada operacoes aritmeticas e passe como parametro os 2
    valores recebidos na funcao main(). Retorne os resultados usando o comando
    return e imprima-os no video na funcao main().*/
    #include<stdio.h>
    #include<locale.h>
    #include<math.h>
    #define ex1
    #ifdef ex1
    main()
    { setlocale(LC_ALL,"");
     int m,b,g;
     do{
      printf("Digite dois valores inteiros:\n");
      scanf("%i%i",&m,&b);


      printf("Os valores em adição é:%i\n",adicao(m,b));

      printf("Os valores em subtração é:%i\n", subtracao(m,b));

      printf("Os valores em multiplicação é:%i\n", multiplicacao(m,b));

      printf("Os valores em divisao é:%i\n",divisao(m,b));

        return (m,b);

     printf("\nDeseja contnuar?\n");
     printf("1-Sim\n");
     printf("2-Não\n");
     scanf("%d",&g);
      }while(g==1);
    }

adicao(int m, int b)
{  setlocale(LC_ALL,"");
 int a;
    a=m+b;
    return (a);
}

subtracao(int m, int b)
{  setlocale(LC_ALL,"");
    int s;
    s=m-b;
    return(s);
}

multiplicacao(int m, int b)
{   setlocale(LC_ALL,"");
    int t;
    t=m*b;
    return(t);
}

divisao(int m, int b)
{ setlocale(LC_ALL,"");
   int d;
    d=m/b;
    return(d);
}


    #endif // ex1

   /* 2 - Aproveitando o programa anterior inclua a selecao das operacoes aritmeticas
    para transforma-lo em uma calculadora. (utilize o comando switch). As operacoes
    aritmeticas devem estar em funcoes. O resultado deve ser mostrado na
    funcao main()*/
    #ifdef ex2
    main()
    {setlocale(LC_ALL,"");
     int m,b,a,e,s,t,d,g;
     do{
      printf("Digite dois valores inteiros:\n");
      scanf("%i%i",&m,&b);
       printf("Digite a opção que deseja:\n");
       printf("1-adição\n");
       printf("2-subtração\n");
       printf("3-multiplicação\n");
       printf("4-divisão\n");
       scanf("%i",&e);

       switch(e)
       {
       case 1:
        {setlocale(LC_ALL,"");
          a=m+b;
          printf("Os valores em adição é:%i\n",a);
          break;
        }
       case 2:
        {setlocale(LC_ALL,"");
        s=m-b;
         printf("Os valores em subtração é:%i\n", s);
            break;
        }
       case 3:
        {setlocale(LC_ALL,"");
        t=m*b;
         printf("Os valores em multiplicação é:%i\n", t);
         break;
        }
       case 4:
        {setlocale(LC_ALL,"");
        d=m/b;
        printf("Os valores em divisao é:%i\n",d);
        break;
        }
       default:
        {setlocale(LC_ALL,"");
            printf("Opção invalida\n");
        }
       }
     printf("\nDeseja contnuar?\n");
     printf("1-Sim\n");
     printf("2-Não\n");
     scanf("%d",&g);
      }while(g==1);

    }
    #endif // ex2
   /*3 - Escreva um programa que receba uma letra via teclado. Escreva uma funcao que
    pesquise esta letra dentro do vetor abaixo. Imprima o resultado da pesquisa
    no video na funcao main(). Passe como informacao para a funcao a letra
    digitada.(utilize o comando return). O vetor deve ser uma variavel global.

    vetor -> b,d,f,h,j,k,m,o,q,s,u,w,y*/
    #ifdef ex3
    char l[]={'b','d','f','h','j','k','m','o','q','s','u','w','y'};
    int g;
    char a;

    main()
    { setlocale(LC_ALL,"");
        char z;
    do{
        printf("Digite um letra que faça parte dessa ordem b,d,f,h,j,k,m,o,q,s,u,w,y\n");
        printf("Digite a letra desejada:");
        scanf("%c",&z);

        if(z!=l[a])
        {
            printf("Digite apenas letra que tiver na ordem\n");
            printf("b,d,f,h,j,k,m,o,q,s,u,w,y\n");
        }
        while(z!=l[a]);

        printf("A palavra digitado foi %c",pesquisa(z));

        return(z);

     printf("\nDeseja contnuar?\n");
     printf("1-Sim\n");
     printf("2-Não\n");
     scanf("%d",&g);
      }while(g==1);
    }

    pesquisa(int z)
    {
        if(z=l[a])
        {
            return(z);
        }
    }
    #endif // ex3
    /*4 - Faça um programa receba dois números inteiros e execute as seguintes funções:
    - Verificar se o número digitado é positivo ou negativo. Sendo que o valor de
      retorno será 1 se positivo, 0 se negativo ou -1 se for igual a 0.
    - Se os 2 números são positivos, retorne a soma dos N números existentes entre
      eles.
    - Se os 2 números são negativos, retorne a multiplicação dos N números existente
      entre eles.*/
      #ifdef ex4
      main()
      {setlocale(LC_ALL,"");
        int a,b,g;
        do{
          printf("Digite dois numeros\n");
          scanf("%i%i",&a,&b);
          verificar(a,b);

     printf("\nDeseja contnuar?\n");
     printf("1-Sim\n");
     printf("2-Não\n");
     scanf("%d",&g);
      }while(g==1);
      }

      verificar(int a, int b)
      { int c,p,i;
        if(a,b>0)
        { a=a+1;
          b=b-1;
          c=0;
            printf("1\n\n");

            for(p=0;p<=b;p++)
            {
                p+=a;
                a++;
                printf("O valor e: %d\n",&p);
            }
        }
        else if(a,b<0)
        {
            printf("0\n");

        }
        else if(a,b==0)
        {
            printf("-1\n");
        }

      }
      #endif // ex4
     /*5 - Escreva um programa que receba um numero N. Escreva uma função que
    retorne a soma dos algarismos de N!. O resultado deve ser mostrado na funcao
    main().
    Ex: se N = 4, N! = 24. Logo, a soma de seus algarismos ´e 2 + 4 = 6.*/
    #ifdef ex5
    main()
    {   setlocale(LC_ALL,"");
        int n,g;
        do{
        printf("Digite um numero:");
        scanf("%d",&n);
        printf("A soma dos algarismos é: %d",calculo(n));

     printf("\nDeseja contnuar?\n");
     printf("1-Sim\n");
     printf("2-Não\n");
     scanf("%d",&g);
      }while(g==1);

    }

    calculo(int n)
    {   int d,s,m;
        d=n/2;
        s=d+n;
        m=s*n;
        return(s);
    }
    #endif // ex5
