/*1 - Escreva um programa que determine o menor multiplo de um numero inteiro. Este
    multiplo deve ser maior que o limite minimo recebido. Recebe os 2 numeros via
    teclado.
    Ex: menor multiplo de 13 maior que 100. Resultado: 104.*/

    #include<locale.h>
    #include<stdio.h>
    #define ex1
    #ifdef ex1

    main()
    { setlocale(LC_ALL,"");
      int a;  int i;  int g;
      int b;  int j;

      do{
      printf("Por favor digite um numero e um limite:\n");
      scanf("%d %d",&a,&b);
      if(a>b)
      {
          printf("Por favor digite o limite maior que o multiplo\n");
      }
      for(i=a+b+1;i>b;i--)
       {
            if(i%a==0)
            {
               j=i;
            }
            else if(j==0)
            {
                j==i;
            }
       }
       printf("menor multiplo de %d maior que o limite minimo %d é: %d\n",a,b,j);

     printf("\nDeseja contnuar?\n");
     printf("1-Sim\n");
     printf("2-Não\n");
     scanf("%d",&g);
      }while(g==1);

    }

    #endif // ex1

    /*2 - Escreva um programa que receba dados via teclado para variaveis do tipo short,
    long, int, float, double e um char e imprima-os no video no seguinte
    formato:

             10        20        30        40        50        60
     12345678901234567890123456789012345678901234567890123456789012345
         short               long                int
                   float               double              char*/

    #include<locale.h>
    #include<stdio.h>
    #ifdef ex2

    main()
    {setlocale(LC_ALL,"");
     short s;
     long l;
     unsigned long ul;
     int i,g;
     unsigned int ui;
     float f;
     double d;
     char c;
     unsigned char uc;
do{
     printf("Digite um valor short: \n");
     scanf("%d",&s);
     printf("Digite um valor long:\n");
     scanf("%ld",&l);
     printf("Digite um valor int:\n");
     scanf("%d",&i);
     printf("Digite um valor float:\n");
     scanf("%f",&f);
     printf("Digite um valor double:\n");
     scanf("%lf",&d);
     printf("Digite um valor char:\n");
     scanf("%c",&c);
     c=getchar();

     printf("        10        20        30        40        50        60\n");
    printf("12345678901234567890123456789012345678901234567890123456789012345\n");

    printf("%9d%19d%19d\n",s,l,i);
    printf("%19.1f%21.01f%18c\n",f,d,c);

    printf("\nDeseja contnuar?\n");
     printf("1-Sim\n");
     printf("2-Não\n");
     scanf("%d",&g);
      }while(g==1);

    }
    #endif // ex2

   /* 3 - Escreva um programa que receba via teclado um tempo em segundos e converta
    para horas, minutos e segundos.
    Ex.: recebe 3850 segundos que converte para 1h 4min 10s.*/
    #ifdef ex3

    main()
    {
        setlocale(LC_ALL,"");
        int a,b,c,d,g;
do{
        printf("Digite os segundo que deseja converter em minutos: ");
        scanf("%i", &a);

        b=a/3600;
        c=a%3600;
        d=c/60;
        c=c-(d*60);

        if(b==0)
        {
            printf("%d segundos são: %d horas e %d minutos\n", a,c,d);
        }
        else if(b==1)
        {
            printf("%d segundos são: %d hora %d minutos e %d segundos\n", a,b,c,d);
        }
        else
        {
            printf("%d segundo são: %d horas %d minutos e %d segundos\n", a,b,c,d);
        }

     printf("\nDeseja contnuar?\n");
     printf("1-Sim\n");
     printf("2-Não\n");
     scanf("%d",&g);
      }while(g==1);
    }
    #endif // ex3

    /*4 - Escreva um programa que permute o conteúdo de duas variáveis sem utilizar uma
    variável auxiliar.*/
    #ifdef ex4
    main()
    {
     setlocale(LC_ALL,"");
     int a=50;
     int b=30;
     int g;
     do{
       printf("O valor inicial é: ");
       printf("a=%d e b=%d\n",a,b);

       a=a+b;
       b=a-b;
       a=a-b;

       printf("o valor permutado é: ");
       printf("a=%d e b=%d",a,b);

     printf("\nDeseja contnuar?\n");
     printf("1-Sim\n");
     printf("2-Não\n");
     scanf("%d",&g);
      }while(g==1);
    }
    #endif // ex4

   /* 5 - Escreva um programa que lê um valor em reais e calcula qual o menor número
    possível de notas de $100, $50, $20, $10, $5, $2 e $1 em que o valor lido pode
    ser decomposto. Escrever o valor lido e a relação de notas necessárias.*/
    #ifdef ex5
    main()
    { int v,n100,n50,n20,n10,n5,n2,n1,r,g;
      setlocale(LC_ALL,"");
 do{
       printf("Digite um valor\n");
       scanf("%d",&v);

        n100=v/100;
        r=v%100;
        n50=r/50;
        r=r%50;
        n20=r/20;
        r=r%20;
        n10=r/10;
        r=r%10;
        n5=r/5;
        r=r%5;
        n2=r/2;
        r=r%2;
        n1=r/1;
        r=r%1;

        printf("o valor em notas de 100 é:%d \n",n100);
        printf("o valor em notas de 50 é: %d\n",n50);
        printf("o valor em notas de 20 é: %d\n", n20);
        printf("o valor em notas de 10 é: %d\n", n10);
        printf("o valor em notas de 5 é: %d\n", n5);
        printf("o valor em notas de 2 é: %d\n", n2);
        printf("o valor em notas de 1 é: %d\n", n1);

     printf("\nDeseja contnuar?\n");
     printf("1-Sim\n");
     printf("2-Não\n");
     scanf("%d",&g);
      }while(g==1);

    }
    #endif // ex5


