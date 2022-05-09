/*1 - Escreva um programa para adivinhar um numero entre 1 e 99 que o usuario
    pensou. Digite via teclado os simbolos =, > ou < a cada pergunta. Utilize o
    comando if-else.*/
    #include<stdio.h>
    #include<locale.h>
    #define ex1
    #ifdef ex1

    main()
    {   setlocale(LC_ALL,"");
        int max=99;
        int min=1;
        int n=(max+min)/2;
        int g;
        char r;
        do{
         printf("pense em um numero\n");
         printf("use > se for maior, < se for menor ou = se for o que está pensou\n");

         while(r!='=')
         {
             printf("o numero e maior, igual ou esse %d ?\n",n=(max+min)/2);
             scanf("%c",&r);

             if(r=='>')
             {
                 min=n=(max+min)/2;

             }
             else if(r=='<')
             {
                 max=n=(max+min)/2;

             }

         }
         printf("o numero que pensou foi %d\n",n);

     printf("\nDeseja contnuar?\n");
     printf("1-Sim\n");
     printf("2-Não\n");
     scanf("%d",&g);
      }while(g==1);
    }
    #endif // ex1

    /*2 - Resecreva o programa do execicio anterior agora utilizando o comando switch.
    Conte o n. de tentativas e imprima o resultado no video.*/
    #ifdef ex2
    main()
    {setlocale(LC_ALL,"");
        int max=99;
        int min=1;
        int n=(max+min)/2;
        char r;
        int g;
do{
        printf("pense em um numero\n");
        printf("use > se for maior, < se for menor ou = se for o que está pens\n");

        do{
            printf("o numero e maior, igual ou esse %d ?\n",n=(max+min)/2);
            scanf("%c",&r);

          switch(r)
          {
          case '>':
              {
                  min=n=(max+min)/2;
                  getchar();
                  break;
              }
              case '<':
              {
                  max=n=(max+min)/2;
                   getchar();
                  break;
              }
              case '=':
              {
                  printf("o valor que está pensando é %d\n",n);
                   getchar();
                  break;
              }
              default:
            {
                printf("Escolha errada\n");
            }

          }
        } while(r!='=');

     printf("\nDeseja contnuar?\n");
     printf("1-Sim\n");
     printf("2-Não\n");
     scanf("%d",&g);
      }while(g==1);
}
    #endif // ex2
    /*3 - Escreva um programa que receba via teclado numeros inteiros positivos.
    Quando o numero digitado for negativo o programa deve parar e calcula a
    media dos valores positivos digitados.*/
    #ifdef ex3
    main()
    { setlocale(LC_ALL,"");
      int a, soma=0,cont=0,g;
      do{
            do{
      printf("digite um numero:\n");
      scanf("%d",&a);

      if(a>0)
      {
          soma+=a;
          cont++;
      }
            }while(a>0);
     soma=soma/cont;
     printf(" o valor é %i",soma);

     printf("\nDeseja contnuar?\n");
     printf("1-Sim\n");
     printf("2-Não\n");
     scanf("%d",&g);
      }while(g==1);
    }
    #endif // ex3

    /*4 - As ligacoes telefonicas são cobradas pela sua duracao. O sistema registra os
    instantes em que a ligacao foi iniciada e concluida.
    Escreva um programa que recebe via teclado dois instantes dados em
    horas, minutos e segundo e determina o intervalo de tempo
    (em horas, minutos e segundos) decorrido entre eles.*/
    #ifdef ex4
    main()
    { setlocale(LC_ALL,"");
      int hi;  int ht; int i;  int m;
      int mi;  int mt; int f;  int s;
      int si;  int st; int h ; int g;
      do{
 do {
        do {
      printf("Digite quantas  horas teve a lig.\n");
      scanf("%i",&hi);
      if(hi<0||hi>24)
      {
          printf("Por favor digite horas maiores que zero e menores que 24\n");
      }
        } while(hi<0||hi>24);
        do{
      printf("Digite quantos minutos teve a lig.\n");
      scanf("%i",&mi);
      if(mi<0||mi>60)
      {
          printf("Por favor digite min maiores que 0 e menores que 60\n");}
      }while(mi<0||mi>60);

      do{
        printf("Digite quantos seg teve a ligação\n");
        scanf("%i",&si);
        if(si<0||si>60)
        {
            printf("Por favor digite apenas seg maiores que 0 e menor que 60\n");
        }
      } while(si<0||si>60);

      hi=hi*3600;
      mi=mi*60;
      i=hi+mi+si;

      do{

        printf("Digite que horas terminou:\n");
        scanf("%i",&ht);
        if(ht<0||ht>24)
        {
            printf("Por favor digite horas maiores que zero e menores que 24\n");
        }
        }while(ht<0||ht>24);

        do{
        printf("Digite que min e seg terminou\n");
        scanf("%i",&mt);
        if(mt<0||mt>60)
        {
            printf("Por favor digite min. maiores que 0 e menores que 60\n");
        }
      }while(mt<0||mt>60);
      do
      {
          printf("Por favor digite seg que terminou \n");
          scanf("%i",&st);
          if(st<0||st>60)
          {
              printf("Por favor digite seg maiores que 0 e menores que 60\n");
          }
      } while(st<0||st>60);
      ht=ht*3600;
      mt=mt*60;
      f=ht+mt+st;

      if(i>f)
      {
          printf("por digite novamente usando horarios de 1 dia\n");
      }
      else
      {
          i=f-i;
          h=i/3600;
          s=i%3600;
          m=s/60;
          s=s-(m*60);

        if (h==0)
      {
          printf("o tempo foi de %d min e %d seg\n",m,s);
      }
      else if(h>=1)
      {
          printf("o tempo foi de %i h %i min e %i seg\n",h,m,s);
      }

      }
        } while(i>f);

     printf("\nDeseja contnuar?\n");
     printf("1-Sim\n");
     printf("2-Não\n");
     scanf("%d",&g);
      }while(g==1);


    }
    #endif // ex4
/*5 - Um posto está vendendo combustíveis com a seguinte tabela de descontos:
     Álcool
         até 20 litros, desconto de 3% por litro
         acima de 20 litros, desconto de 5% por litro
     Gasolina
          até 20 litros, desconto de 4% por litro
          acima de 20 litros, desconto de 6% por litro
     Escreva um programa que leia o número de litros vendidos e o tipo de
     combustível (codificado da seguinte forma: A-álcool, G-gasolina). Calcule e
     imprima o valor a ser pago pelo cliente sabendo-se que o preço do litro da
     gasolina é R$ 5,88 e o preço do litro do álcool é R$ 4,18.*/
     #ifdef ex5
     main()
     { setlocale(LC_ALL,"");
    int h;
    float L,G=3.88,A=3.18,g,a;
    char C;
do{
    printf("DIGITE (G) PARA GASOLINA OU (A) PARA ALCOOL: ");
    printf("\n");

    do{
        printf("\nTIPO DE COMBUSTIVEL: ");
        C=getche();
        C=tolower(C); /*CONVERTE LETRA MAIUSCULA PARA MINUSCULA*/

        if((C!='g')&&(C!='a'))
        {
            printf("\nPOR FAVOR DIGITE APENAS (G) PARA GASOLINA E (A) PARA ALCOOL\n");
        }
    }while((C!='g')&&(C!='a'));

    if(C=='g')
    {
        do{
            printf("\nDIGITE A QUANTIDADE DE LITROS: ");
            scanf("%f",&L);
            if(L<=0)
            {
                printf("DIGITE UMA QUANTIDADE DE LITROS MAIOR QUE 0!!\n");
            }
        }while(L<=0);

            if(L<=20)
            {
                g = L;          /*SALVA O VALOR DE LITROS*/
                G *= 1-0.04;    /*DESCONTA 4% DE CADA LITRO*/
                L = G*L;        /*MULTIPLICA O VALOR DA GASOLINA PELOS LITROS DESEJADOS*/
                    if(g==1)
                    {
                        printf("%.2f LITRO DE GASOLINA COM 4%% DE DESCONTO = %.2f",g,L);
                    }
                        else
                        {
                            printf("%.2f LITROS DE GASOLINA COM 4%% DE DESCONTO = %.2f",g,L);
                        }
            }
                else if(L>20)
                {
                    g = L;
                    G *= 1-0.06;
                    L = G*L;

                    printf("%.2f LITROS DE GASOLINA COM 6%% DE DESCONTO = %.2f",g,L);
                }
    }
        else if (C=='a')
        {
            do{
            printf("\nDIGITE A QUANTIDADE DE LITROS: ");
            scanf("%f",&L);
            if(L<=0)
            {
                printf("DIGITE UMA QUANTIDADE DE LITROS MAIOR QUE 0!!\n");
            }
        }while(L<=0);

            if(L<=20)
            {
                a = L;
                A *= 1-0.03;
                L = A*L;
                    if(a==1)
                    {
                        printf("%.2f LITRO DE ALCOOL COM 4%% DE DESCONTO = %.2f",a,L);
                    }
                        else
                        {
                            printf("%.2f LITROS DE ALCOOL COM 4%% DE DESCONTO = %.2f",a,L);
                        }
            }
                else if(L>20)
                {
                    a = L;
                    A *= 1-0.05;
                    L = A*L;

                    printf("%.2f LITROS DE ALCOOL COM 5%% DE DESCONTO = %.2f",a,L);
                }
        }
     printf("\nDeseja contnuar?\n");
     printf("1-Sim\n");
     printf("2-Não\n");
     scanf("%d",&h);
      }while(h==1);

     }
     #endif // ex5
