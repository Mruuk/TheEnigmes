#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <windows.h>
#include "enigmes.h"


//protoTypes;
int primeiroNivel(int cont, int lvl);
int segundoNivel(int cont, int lvl);
int terceiroNivel(int cont, int lvl);
int quartoNivel(int cont, int lvl);
int quintoNivel(int cont, int lvl);
int sextoNivel(int cont, int lvl);
int setimoNivel(int cont, int lvl, char *nome[]);
int oitavoNivel(int cont, int lvl);
int nonoNivel(int cont, int lvl);
int decimoNivel(int cont, int lvl);
int aNivel(int cont, int lvl);
int bNivel(int cont, int lvl);
int cNivel(int cont, int lvl);
int dNivel(int cont, int lvl);
int eNivel(int cont, int lvl);
int fNivel(int cont, int lvl);
int gNivel(int cont, int lvl);
int hNivel(int cont, int lvl);
int iNivel(int cont, int lvl);
int jNivel(int cont, int lvl);
int kNivel(int cont, int lvl);
int lNivel(int cont, int lvl);
int mNivel(int cont, int lvl);
int nNivel(int cont, int lvl);
int oNivel(int cont, int lvl);
int pNivel(int cont, int lvl);
int qNivel(int cont, int lvl);
finalNivel();
senhaFinal();
secret();
dados();

//atributos:
int  cont =-1, record=0, lvl=-1;
 char nome[20];

main(){
    setlocale(LC_ALL, "Portuguese");

    system("color 0a");

    printf("\nDigite seu nome jogador: ");
        gets(nome);

    printf("\n\t\tTHE ENIGMES\n");
    printf("\n\tSeja bem vindo a SEGUNDA EDICÃO do THE ENIGMES\n");
    printf("\tSeu objetivo é desvendar cada nível, até que chegue ao Final...\n");
    printf("\tUse qualquer recurso desejado ao seu favor, o Google é seu amigo\n");
    printf("\t\t\t...Mantenha as coisas no seu devido lugar\n");
    printf("\t\t\tPara sair do jogo e salvar sua pontuação digite 'sair'\n");
    printf("\t\t\tPorém seu progresso será zerado\n");
    printf("\t\t\tnada de acentuação nas chaves do jogo e nada de caixa alta, não é permitido\n");
    printf("\tBOA SORTE!!\n");
    printf("\t\n     e que comece os Jogos...\n");


   primeiroNivel(cont,lvl);
   record = 100 - cont;
   cont=-1;
   segundoNivel(cont,lvl);
   record += 100 - cont;
   cont=-1;
   terceiroNivel(cont,lvl);
   record += 100 - cont;
   cont=-1;
   quartoNivel(cont,lvl);
   record += 100 - cont;
   cont=-1;
   quintoNivel(cont,lvl);
   record += 100 - cont;
   cont=-1;
   sextoNivel(cont,lvl);
   record += 100 - cont;
   cont=-1;
   setimoNivel(cont,lvl,&nome);
   record += 100 - cont;
   cont=-1;
   oitavoNivel(cont,lvl);
   record += 100 - cont;
   cont=-1;
   nonoNivel(cont,lvl);
   record += 100 - cont;
   cont=-1;
   decimoNivel(cont,lvl);
   record += 100 - cont;
   cont=-1;
   aNivel(cont,lvl);
   record += 100 - cont;
   cont=-1;
   bNivel(cont,lvl);
   record += 100 - cont;
   cont=-1;
   cNivel(cont,lvl);
   record += 100 - cont;
   cont=-1;
   dNivel(cont,lvl);
   record += 100 - cont;
   cont=-1;
   eNivel(cont,lvl);
   record += 100 - cont;
   cont=-1;
   fNivel(cont,lvl);
   record += 100 - cont;
   cont=-1;
   gNivel(cont,lvl);
   record += 100 - cont;
   cont=-1;
   hNivel(cont,lvl);
   record += 100 - cont;
   cont=-1;
   iNivel(cont,lvl);
   record += 100 - cont;
   cont=-1;
   jNivel(cont,lvl);
   record += 100 - cont;
   cont=-1;
   kNivel(cont,lvl);
   record += 100 - cont;
   cont=-1;
   lNivel(cont,lvl);
   record += 100 - cont;
   cont=-1;
   mNivel(cont,lvl);
   record += 100 - cont;
   cont=-1;
   nNivel(cont,lvl);
   record += 100 - cont;
   cont=-1;
   oNivel(cont,lvl);
   record += 100 - cont;
   cont=-1;
   pNivel(cont,lvl);
   record += 100 - cont;
   cont=-1;
   qNivel(cont,lvl);
   record += 100 - cont;
   cont=-1;
   finalNivel();
   dados();




   printf("\nDados gravados com sucesso!\nObrigado por ter jogado THE ENIGMES!!\n");
    Sleep(7000);
    secret();
    system("move revele.png %%home%%\\Desktop");
    Sleep(1000);

}




finalNivel(){

        int c =0;

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");
        printf("0110011001101001 01101       00100 0110111101101010   0110100101101101 0110001101111   01101 0110111101100110\n");
        printf("0110011001101001 01101       00100 0110111101101010   0110100101101101 0110000101111   01101 011011101100111011\n");
        printf("     110011      01101       00100 01101              01101            01100 10101111  01101 01101          0110\n");
        printf("     110011      01101       00100 0110111101101010   0110100101101101 01100  0101111  01101 01101           011011\n");
        printf("     110011      01101101011001000 0110111101101010   0110100101101101 01100   1100111 01101 01101            110111\n");
        printf("     110011      01101101011001000 0110111101101010   0110100101101101 01100    010111 01101 01101           0110111\n");
        printf("     110011      01101       00100 01101              01101            01100     10111101101 01101          011011\n");
        printf("     110011      01101       00100 0110111101101010   0110100101101101 01100      1111101101 0110111101100111011\n");
        printf("     110011      01101       00100 0110111101101010   0110100101101101 01100        1110110  01101111011001110\n\n");

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");

        printf("Deseja ter a chave para o próxima THE ENIGMES? %s\n ");
        printf("aperte y\n");

        c = getch();

        if (c == 'y') {
            senhaFinal();
            Sleep(3000);
        }
}

senhaFinal(){

    printf("\n\n\n-------------------------------------------------------------------\n\n\n");
    printf("01101101011001000 0110111101101010   0110100101101101 100100010010001001000\n");
    printf("01101101011001000 0110111101101010   0110100101101101 100100010010001001000\n");
    printf("0110         1000 0110        1010   0110        1101        1001000\n");
    printf("0110         1000 0110        1010   0110        1101        1001000\n");
    printf("01101101011001000 0110        1010   0110        1101        1001000\n");
    printf("01101101011       0110        1010   0110        1101        1001000\n");
    printf("0110  0101101     0110        1010   0110        1101        1001000\n");
    printf("0110   10110001   0110111101101010   0110100101101101        1001000\n");
    printf("0110     01100101 0110111101101010   0110100101101101        1001000\n");

    printf("\n\n\n-------------------------------------------------------------------\n\n\n");




}

secret(){

    system("start crianca-pedindo-silencio.jpg");
}



dados(){

    FILE *enigmes_arq;

    enigmes_arq = fopen("arquivo_the_enigmes.txt", "a");
    lvl++;

    fprintf(enigmes_arq, "nome: %s\trecord: %i\tlevel: %i\n", nome, record, lvl);
    fclose(enigmes_arq);
}
