/*1 - Escreva um programa que receba via teclado 2 numeros inteiros e
    imprima-os no video com o resultado das 4 operacoes aritmeticas.*/
    #include<stdio.h>
    #include<locale.h>
    #define ex1
    #ifdef ex1
    int a,b,g;
    main()
    {setlocale(LC_ALL,"");
    do{
     printf("Digite um numero int:");
     scanf("%i",&a);
     printf("Digite outro numero int:");
     scanf("%i",&b);
     printf("\nA adição dos numeros %i e %i é:%i\n",a,b,adicao());
     printf("\nA subtração dos numeros %i e %i é:%i\n",a,b,subtracao());
     printf("\nA divisão dos numeros %i e %i é:%i\n",a,b,divisao());
     printf("\nA multiplicação dos numeros %i e %i é:%i\n",a,b,multiplicacao());

     printf("Deseja contnuar?\n");
     printf("1-Sim\n");
     printf("2-Não\n");
     scanf("%d",&g);
    }while(g==1);

    }
    adicao()
    {int c;
     c=a+b;
     return(c);
    }
    subtracao()
    {int d;
        d=a-b;
        return(d);
    }
    divisao()
    {int e;
     e=a/b;
     return(e);
    }
    multiplicacao()
    {int f;
     f=a*b;
     return(f);
    }
    #endif // ex1

    /*2 - Reescreva o exercicio anterior utilizando operadores de atribuicao
    composta.*/
    #ifdef ex2
    main()
    {setlocale(LC_ALL,"");
     int a,b,g;
     do{
     printf("Digite um numero int:");
     scanf("%i",&a);
     printf("Digite outro numero int:");
     scanf("%i",&b);
     printf("\nA adição dos numeros é:%i\n",a+=b);
     printf("\nA subtração dos numeros é:%i\n",a-=b);
     printf("\nA divisão dos numeros é:%i\n",a/=b);
     printf("\nA multiplicação dos numeros é:%i\n",a*=b);

     printf("\n\nDeseja contnuar?\n");
     printf("1-Sim\n");
     printf("2-Não\n");
     scanf("%d",&g);
    }while(g==1);


    }
    #endif // ex2
    /*3 - Escreva um programa para determinar a idade de uma pessoa, em anos, meses e
    dias, recebendo via teclado a data (dia, mes e ano) do seu nascimento e a
    data (dia, mes e ano) atual.*/
    #ifdef ex3
    main()
    { setlocale(LC_ALL,"");
      int a1,a2,a3,b1,b2,b3,c1,c2,c3,d;
do{
    printf("Digite o dia do nascimento:");
    scanf("%d",&a1);
    printf("Digite o mes do nascimento:");
    scanf("%d",&a2);
    printf("Digite o ano do nascimento:");
    scanf("%d",&a3);

    printf("Digite o dia atual:");
    scanf("%d",&b1);
    printf("Digite o mes atual:");
    scanf("%d",&b2);
    printf("Digite o ano atual:");
    scanf("%d",&b3);

    c3=b3-a3;
    if(b2>=a2){
      if(b1>=a1){
         }else{
          c3--;
          }
          }else{
          c3--;
          }
          printf("A sua idade e' %d.\n\n",c3);

     printf("\n\nDeseja contnuar?\n");
     printf("1-Sim\n");
     printf("2-Não\n");
     scanf("%d",&d);


      }while(d==1);


    }
    #endif // ex3
    /*4 - Escreva um programa que receba via teclado 2 numeros inteiros e execute
    as operacoes logicas bit a bit AND, OU, OU EXCLUSIVO e imprima-os no
    video no formato decimal e hexadecimal.*/
    #ifdef ex4
    main()
    {setlocale(LC_ALL,"");
        int a,b,d;
    do{
    printf("Digite um numero: ");
    scanf("%d",&a);
    printf("\nDigite outro numero: ");
    scanf("%d",&b);
    printf("\nAND\nDecimal: %d\nHexadecimal: %x",a & b,a & b);
    printf("\n\nOU\nDecimal: %d\nHexadecimal: %x",a | b,a | b);
    printf("\n\nOU EXCLUSIVO\nDecimal: %d\nHexadecimal: %x", a ^ b,a ^ b);

     printf("\n\nDeseja contnuar?\n");
     printf("1-Sim\n");
     printf("2-Não\n");
     scanf("%d",&d);
    }while(d==1);
    }
    #endif // ex4

    /*5 - Escreva um programa que receba via teclado um valor e tenha o menu abaixo.
       1 - transforma graus Celsius em Fahrenheit e Kelvin
       2 - transforma graus Fahrenheit em Celsius e Kelvin
       3 - transforma graus Kelvin em Celsius e Fahrenheit
    Cada opcao de menu deve chamar uma funcao que retorna o resultado da
    conversao. O resultado deve ser mostrado na funcao main().*/
    #ifdef ex5
    float a,f,g;
    int b,d;
    main()
    {setlocale(LC_ALL,"");
    do{
     printf("Digite uma opção:\n");
     printf("1-TRANSFORMAR GRAUS CELSIUS EM FAHRENHEIT E KELVIN\n");
     printf("2-TRANSFORMAR GRAUS FAHRENHEIT EM CELSIUS E KELVIN\n");
     printf("3-TRANSFORMAR GRAUS KELVIN EM CELSIUS E FAHRENHEIT\n");
     scanf("%d",&b);
     if(b==1)
     {
        opcao1();
     }
     else if(b==2)
     {
         opcao2();
     }
     else if(b==3)
     {
         opcao3();
     }
     else
     {
          printf("opção invalida");
     }

     printf("\n\nDeseja contnuar?\n");
     printf("1-Sim\n");
     printf("2-Não\n");
     scanf("%d",&d);
    }while(d==1);


    }
    opcao1()
    { printf("Digite o valor em celsius:");
      scanf("%f",&a);
        f=a+273;
        g=1.8*a+32;
        printf("\nTEMPERATURA EM FAHRENHEIT %.2f\n",f);
        printf("TEMPERATURA EM KELVIN %.2f\n",g);
    }
    opcao2()
    {  float z;
        printf("Digite o valor em fahrenheit:");
        scanf("%f",&z);
        a=(z-32)/1.8;
        f=a+273;
      printf("\nTEMPERATURA EM CELSIUS %.2f\n",a);
      printf("TEMPERATURA EM KELVIN %.2f\n",f);
    }
    opcao3()
    {  float k;
        printf("Digite o valor em kelvin:");
        scanf("%f",&k);
        a=k-273;
        f=1.8*(k-273)+32;
        printf("\nTEMPERATURA EM CELSIUS %.2f\n",a);
       printf("TEMPERATURA EM FAHRENHEIT %.2f\n",f);
    }
    #endif // ex5
