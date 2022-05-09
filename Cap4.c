/*1 - Escreva um programa que receba um vetor de tamanho 10 e o decomponha em dois
    outros vetores. Um contera' as componentes de ordem ímpar e o outro contera'
    as componentes de ordem par.
    Por exemplo, se o vetor dado for v = {3, 5, 6, 8, 1, 4, 2, 3, 7}, o programa
    deve gerar os vetores u = {3, 6, 1, 2, 7} e w = {5, 8, 4, 3}.*/
    #include<stdio.h>
    #include<locale.h>
    #define ex1
    #ifdef ex1

    int v[10];
    int p[5];
    int i[10];
    int t,s,e,g;
    main()
    { setlocale(LC_ALL,"");
    do{
      printf("Digite os numeros do vetor de no maximo 10 posições:\n");
      for(t=0;t<10;t++)
      scanf("%d",&v[t]);

     for(t=0;t<10;t++)
     {
         if(v[t]%2==0)
         {
             p[s]=v[t];
             s++;
         }
         else
         {
             i[e]=v[t];
             e++;
         }

     }

     for(t=0;t<s;t++)
     printf("Os numeros pares digitados são:%d\n",p[t]);

     for(t=0;t<e;t++)
     printf("Os numeros impares são:%d\n",i[t]);

     printf("\nDeseja contnuar?\n");
     printf("1-Sim\n");
     printf("2-Não\n");
     scanf("%d",&g);
      }while(g==1);

    }
    #endif // ex1

    /*2 - Receba via teclado valores do tipo int para uma matriz 5 x 5. Receba via
    teclado um valor x. O programa dever fazer a busca desse valor x na matriz
    e, ao final escrever a localizacao (linha e coluna) ou uma mensagem de
    ”nao encontrado”.*/
    #ifdef ex2
    int m[5] [5];
    int a,b,c,g;
    int d=0;
    main()
    { setlocale(LC_ALL,"");
    do{
      for(a=0;a<5;a++){
          for(b=0;b<5;b++){
              printf("digite a matriz[%d][%d] desejada:",a,b);
              scanf("%d",&m[a][b]);
          }
      }

      printf("\nDigite o numero que deseja buscar:");
      scanf("%d",&c);

      for(a=0;a<5;a++){
          for(b=0;b<5;b++){
                if(c==m[a][b])
                {
                    printf("\n encontrou na posição [%d][%d].",a,b);
                    d=1;
                }
          }
      }
      if(d==0)
      {
          printf("\nValor não encontrado");
      }



      printf("\n\nmatriz\n\n");
      for(a=0;a<5;a++){
          for(b=0;b<5;b++){
              printf("|%d|",m[a][b]);
          }
          puts("");


      }
      printf("\nDeseja contnuar?\n");
     printf("1-Sim\n");
     printf("2-Não\n");
     scanf("%d",&g);
      }while(g==1);



    }
    #endif // ex2

    /* 3 - Escreva um programa para receber via teclado em vetores 3 int, 3 long,
    3 unsigned, 3 float e 3 double e imprima-os no video no seguinte formato:

            10        20        30        40        50
    12345678901234567890123456789012345678901234567890
      int                 long                unsigned
                float               double
      int                 long                unsigned
                float               double
      int                 long                unsigned
                float               double*/
    #ifdef ex3
    main()
    { setlocale(LC_ALL,"");
        int c,g;
            do{

    char str [5][9]= {"INT","LONG","UNSIGNED","FLOAT","DOUBLE"};
    int vetorInt[3],x,y;
    long vetorLong[3];
    unsigned vetorUnsigned[3];
    float vetorFloat[3];
    double vetorDouble[3];

    for(y=0;y<5;y++){
        for(x=0;x<3;x++){
            printf("digite o %d numero %s: ",x+1,str[y]);
            if(y==0){
                scanf("%d",&vetorInt[x]);
            } else if (y==1){
                scanf("%ld",&vetorLong[x]);
            } else if (y==2){
                scanf("%u",&vetorUnsigned[x]);
            } else if (y==3){
                scanf("%f",&vetorFloat[x]);
            } else {
                scanf("%lf",&vetorDouble[x]);
            }
        }
    }
    printf("\n        10        20        30        40        50\n");
    printf("12345678901234567890123456789012345678901234567890\n");

    for(x=0;x<3;x++){
        printf("  %-6d              %-10ld          %-5u\n",vetorInt[x],vetorLong[x],vetorUnsigned[x]);
        printf("            %-8.1f            %-8.1lf\n",vetorFloat[x],vetorDouble[x]);
    }
        printf("\nDeseja contnuar?\n");
     printf("1-Sim\n");
     printf("2-Não\n");
     scanf("%d",&g);
      }while(g==1);

    }
    #endif // ex3

   /* 4 - Receba via teclado dez valores inteiros e ordene por ordem crescente assim
    que sao digitados. Guarde-os em um vetor. Mostre ao final os valores ordenados.*/
    #ifdef ex4
    int i[10],t,j,x,g;
    main()
    { setlocale(LC_ALL,"");
do{
  printf("Digite os valores\n");
      for(t=0;t<10;t++)
        scanf("%d",&i[t]);
      for(t=0;t<10;t++)
      {
        for(j=t+1;j<10;j++)
        {
                if(i[t]>i[j])
                {
                    x=i[t];
                    i[t]=i[j];
                    i[j]=x;
                }
        }
      }
      for(t=0;t<10;t++){
      printf("a ordem dos numeros digitados é: %d\n",i[t]);
      }
     printf("\nDeseja contnuar?\n");
     printf("1-Sim\n");
     printf("2-Não\n");
     scanf("%d",&g);
      }while(g==1);

    }
    #endif // ex4

    /*5 - Defina 2 vetores bidimensionais do tipo inteiro de 2x3. Escreva um programa
    que recebe os dados via teclado para esses 2 vetores. Usando o operador
    subtracao "-", subtraia os elementos de mesmo indice dos 2 vetores
    e guarde o resultado num 3. vetor. Imprima na tela o indice, os valores e
    o resultado dos 6 elementos dos vetores.*/
    #ifdef ex5
    int v[2][3];
    int z[2][3];
    int s[2][3];
    int a,b,c,g;
    main()
    { setlocale(LC_ALL,"");
    do{
        for(a=0;a<2;a++)
        { for(b=0;b<3;b++)
        {
            printf("Digite a matriz desejada [%d][%d]:",a,b);
            scanf("%d",&v[a][b]);
        }

        }

        for(a=0;a<2;a++)
        {for(b=0;b<3;b++)
        {
            printf("Digite a segunda matriz desejada[%d][%d]:",a,b);
            scanf("%d",&z[a][b]);
        }

        }

        for(a=0;a<2;a++)
        {for(b=0;b<3;b++)
        {
            s[a][b]=v[a][b]-z[a][b];
        }
        }

        for(a=0;a<2;a++)
        {for(b=0;b<3;b++)
        {
            printf("Valor na posição [%d][%d]:%d\n",a,b,s[a][b]);
        }
        }

     printf("\nDeseja contnuar?\n");
     printf("1-Sim\n");
     printf("2-Não\n");
     scanf("%d",&g);
      }while(g==1);

    }
    #endif ex5
