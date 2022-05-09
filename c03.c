/*Escreva um programa que tem 3 vetores unidimensionais nome_musica[20] e
 3 vetores unidimensionais nome_autor[20] declarados como variáveis globais.

Na função main() faça um menu com as seguintes funções:

1 – entrada de dados.

2 – lista todos os dados na tela.

3 – pesquisa um nome_musica com o nome completo e mostra na tela

4 – pesquisa o nome_autor pela 1. letra e mostra todos na tela.

5 – altera dados. Pesquisa pelo nome_musica completo.

6 – exclui dados. Pesquisa pelo nome_musica completo.

7 - saída*/
#include<stdio.h>
#include<locale.h>
#define exf
#ifdef exf
#include <stdlib.h>
char nome_musica1[20];
char nome_musica2[20];
char nome_musica3[20];
char nome_autor1[20];
char nome_autor2[20];
char nome_autor3[20];
char a[20];
char i,c;
char b;
char d[20];
int e;
main()
{setlocale(LC_ALL,"");
for(;;)
{


printf("Digite a opção desejada:\n");
printf("1 – entrada de dados.\n");
printf("2 – lista todos os dados na tela.\n");
printf("3 – pesquisa um nome_musica com o nome completo e mostra na tela.\n");
printf("4 – pesquisa o nome_autor pela 1. letra e mostra todos na tela.\n");
printf("5 – altera dados. Pesquisa pelo nome_musica completo.\n");
printf("6 – exclui dados. Pesquisa pelo nome_musica completo.\n");
printf("7 - saída\n");
scanf("%i",&e);
getchar();

switch(e)
{
case 1:
    {
printf("_________________________________\n");
printf("Entrada de dados\n");
printf("_________________________________\n");
printf("Digite o nome de uma musica:\n");
gets(&nome_musica1);
printf("Digite o nome do autor:\n");
gets(&nome_autor1);
printf("Digite o nome de uma musica:\n");
gets(&nome_musica2);
printf("Digite o nome do autor:\n");
gets(&nome_autor2);
printf("Digite o nome de uma musica:\n");
gets(&nome_musica3);
printf("Digite o nome do autor:\n");
gets(&nome_autor3);
FILE *fp;
 fp = fopen ("programa_desafio.txt", "w");
 fwrite(nome_musica1,sizeof(nome_musica1),1,fp);
 fwrite(nome_musica2,sizeof(nome_musica2),1,fp);
 fwrite(nome_musica3,sizeof(nome_musica3),1,fp);
 fwrite(nome_autor1,sizeof(nome_autor1),1,fp);
 fwrite(nome_autor2,sizeof(nome_autor2),1,fp);
 fwrite(nome_autor3,sizeof(nome_autor3),1,fp);
 fclose(fp);
system("pause");

    }
    break;


case 2:
    {
        FILE *fp;
 fp = fopen ("programa_desafio.txt", "r");
 fread(nome_musica1,sizeof(nome_musica1),1,fp);
 fread(nome_musica2,sizeof(nome_musica2),1,fp);
 fread(nome_musica3,sizeof(nome_musica3),1,fp);
 fread(nome_autor1,sizeof(nome_autor1),1,fp);
 fread(nome_autor2,sizeof(nome_autor2),1,fp);
 fread(nome_autor3,sizeof(nome_autor3),1,fp);
 fclose(fp);
printf("________________________________\n");
printf("lista de dados:\n");
printf("________________________________\n");
printf("musica:%s\n",nome_musica1);
printf("autor:%s \n",nome_autor1);
printf("musica:%s\n",nome_musica2);
printf("autor:%s\n",nome_autor2);
printf("musica:%s\n",nome_musica3);
printf("autor:%s\n",nome_autor3);
system("pause");

    }
    break;


case 3:
    {
printf("_________________________________\n");
printf("Busca de dados da musica\n");
printf("_________________________________\n");
printf("Digite o nome de uma musica:\n");
gets(&a);
printf("%s\n",a);
for(i=0;a[i]!='\0';i++)
{ printf("%c %c\n",a[i],nome_musica1[i]);
    if(a[i]!=nome_musica1[i]){
   break;  }
}
if(a[i]=='\0'&&nome_musica1[i]=='\0')
{
    printf("musica encontrada\n");
}
else
{
    printf("musica não encontrada\n");
}

for(i=0;a[i]!='\0';i++)
{ printf("%c %c\n",a[i],nome_musica2[i]);
    if(a[i]!=nome_musica2[i]){
   break;  }
}
if(a[i]=='\0'&&nome_musica2[i]=='\0')
{
    printf("musica encontrada\n");
}

else
{
    printf("musica não encontrada\n");
}

for(i=0;a[i]!='\0';i++)
{ printf("%c %c\n",a[i],nome_musica3[i]);
    if(a[i]!=nome_musica3[i]){
   break;  }
}
if(a[i]=='\0'&&nome_musica3[i]=='\0')
{
    printf("musica encontrada\n");
}
else
{
    printf("musica não encontrada\n");
}
system("pause");

    }
    break;


case 4:
    {
printf("_________________________________\n");
printf("Busca de dados do autor\n");
printf("_________________________________\n");
printf("Digite a inicial do autor:\n");
b=getchar();
printf("Inicial digitada %c\n",b);

    if(b==nome_autor1[0]){
     printf("O nome autor é:%s\n",nome_autor1);
    }


    if(b==nome_autor2[0]);{
    printf("O nome do autor é:%s\n",nome_autor2);
    }


    if(b==nome_autor3[0]){
    printf("O nome do autor é:%s\n",nome_autor3);
    }
system("Pause");
    }
    break;


case 5:
{
printf("_________________________________\n");
printf("Altera dados\n");
printf("_________________________________\n");
printf("Digite o nome de uma musica:\n");
gets(&a);
printf("%s\n",a);
for(i=0;a[i]!='\0';i++)
{ printf("%c %c\n",a[i],nome_musica1[i]);
    if(a[i]!=nome_musica1[i]){
   break;  }
}
if(a[i]=='\0'&&nome_musica1[i]=='\0')
{
    printf("Digite o nome da musica:\n");
    gets(&nome_musica1);
    printf("Digite o nome do autor\n");
    gets(&nome_autor1);
}
else
{
    printf("musica não encontrada\n");
}

for(i=0;a[i]!='\0';i++)
{ printf("%c %c\n",a[i],nome_musica2[i]);
    if(a[i]!=nome_musica2[i]){
   break;  }
}
if(a[i]=='\0'&&nome_musica2[i]=='\0')
{
    printf("Digite o nome da musica:\n");
    gets(&nome_musica2);
     printf("Digite o nome do autor\n");
    gets(&nome_autor2);
}

else
{
    printf("musica não encontrada\n");
}

for(i=0;a[i]!='\0';i++)
{ printf("%c %c\n",a[i],nome_musica3[i]);
    if(a[i]!=nome_musica3[i]){
   break;  }
}
if(a[i]=='\0'&&nome_musica3[i]=='\0')
{
  printf("Digite o nome da musica:\n");
  gets(&nome_musica3);
  printf("Digite o nome do autor\n");
  gets(&nome_autor3);
}
else
{
    printf("musica não encontrada\n");
}
FILE *fp;
 fp = fopen ("programa_desafio.txt", "w");
 fwrite(nome_musica1,sizeof(nome_musica1),1,fp);
 fwrite(nome_musica2,sizeof(nome_musica2),1,fp);
 fwrite(nome_musica3,sizeof(nome_musica3),1,fp);
 fwrite(nome_autor1,sizeof(nome_autor1),1,fp);
 fwrite(nome_autor2,sizeof(nome_autor2),1,fp);
 fwrite(nome_autor3,sizeof(nome_autor3),1,fp);
 fclose(fp);


system("pause");

    }
    break;


case 6:
    {
printf("_________________________________\n");
printf("Apaga dados\n");
printf("_________________________________\n");
printf("Digite o nome de uma musica:\n");
gets(&a);
printf("%s\n",a);
for(i=0;a[i]!='\0';i++)
{ printf("%c %c\n",a[i],nome_musica1[i]);
    if(a[i]!=nome_musica1[i]){
   break;  }
}
if(a[i]=='\0'&&nome_musica1[i]=='\0')
{
    printf("Musica encontrada:\n");
    printf("Apagando musica...\n");
    nome_musica1[0]='*';
}
else
{
    printf("musica não encontrada\n");
}

for(i=0;a[i]!='\0';i++)
{ printf("%c %c\n",a[i],nome_musica2[i]);
    if(a[i]!=nome_musica2[i]){
   break;  }
}
if(a[i]=='\0'&&nome_musica2[i]=='\0')
{
    printf("Musica encontrada:\n");
    printf("Apagando musica...\n");
    nome_musica1[0]='*';
}

else
{
    printf("musica não encontrada\n");
}

for(i=0;a[i]!='\0';i++)
{ printf("%c %c\n",a[i],nome_musica3[i]);
    if(a[i]!=nome_musica3[i]){
   break;  }
}
if(a[i]=='\0'&&nome_musica3[i]=='\0')
{
  printf("Musica encontrada:\n");
    printf("Apagando musica...\n");
    nome_musica1[0]='*';
}
else
{
    printf("musica não encontrada\n");
}
FILE *fp;
 fp = fopen ("programa_desafio.txt", "w");
 fwrite(nome_musica1,sizeof(nome_musica1),1,fp);
 fwrite(nome_musica2,sizeof(nome_musica2),1,fp);
 fwrite(nome_musica3,sizeof(nome_musica3),1,fp);
 fwrite(nome_autor1,sizeof(nome_autor1),1,fp);
 fwrite(nome_autor2,sizeof(nome_autor2),1,fp);
 fwrite(nome_autor3,sizeof(nome_autor3),1,fp);
 fclose(fp);


system("pause");

    }
       break;


case 7:
    {
        exit(0);
    }


default:
    {
        printf("Opção invalida\n");
    }

}


}
}
#endif // exf
