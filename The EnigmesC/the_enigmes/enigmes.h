#ifndef ENIGMES_H_INCLUDED
#define ENIGMES_H_INCLUDED



primeiroNivel(int cont, int lvl){

    char senha[20], certo[20]="fitoplancton";
    lvl++;
    while(strcmp (certo, senha) != 0){

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");
        printf("\nNível 1\n");
        printf("\nÉ considerado o pulmão da terra\n\n");
        gets(senha);
        cont++;
         printf("\n\n\n-------------------------------------------------------------------\n\n\n");
        if(!strcmp (senha, "zooplancton")){
            printf("\n\nquase isso, pense melhor, fotossíntese\n");
        }

        if(!strcmp (senha, "sair")){
            dados();

            printf("\n\nAo fazer isso você o seus dados foram salvos, porém seu andamento não.\nTerá que começar tudo de novo");
            exit(0);
        }
    }

    return(cont, lvl);
}

segundoNivel(int cont, int lvl){

    char senha[20], certo[20]="flor";
    lvl++;

    while(strcmp (certo, senha) != 0){

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");
        printf("\nNível 2\n");
        printf("\nQuando uma pessoa cria laços com outra, sejam de amizade ou amor,HEXA ligação se\ntorna uma responsabilidade. Você tem de cuidar e alimentar a relação, para que o\nsentimento não acabe.\n");
        printf("66 6c 6f 72\n\n");
        gets(senha);
        cont++;

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");

        if(!strcmp (senha, "sair")){
            dados();

            printf("\n\nAo fazer isso você o seus dados foram salvos, porém seu andamento não.\nTerá que começar tudo de novo");
            exit(0);
        }
    }
    return(cont, lvl);
}

terceiroNivel(int cont, int lvl){

    char senha[20], certo[20]="rei";
    lvl++;

    while(strcmp (certo, senha) != 0){


        printf("\n\n\n-------------------------------------------------------------------\n\n\n");
        printf("\nNível 3\n");
        printf("\nDuas rainha, uma negra e a outra branca, fazem aniversário juntas e decidem dá uma festa em um salão onde seu piso\né xadrez, sendo assim uma festa com temática disco anos 80. Ficou certo que cada uma levariam 14 convidados.\nNo dia da festa, nem todos os convidados compareceram, porém os convidados da rainha branca, justificaram sua ausência.\nJá um convidado muito importante da rainha Negra não justificou sua ausência\n");
        printf("Quem seria esse convidado tão importante que não compareceu\n\n");
        gets(senha);
        cont++;

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");

        if(!strcmp (senha, "sair")){
            dados();

            printf("\n\nAo fazer isso você o seus dados foram salvos, porém seu andamento não.\nTerá que começar tudo de novo");
            exit(0);
        }
    }
    return(cont, lvl);
}

quartoNivel(int cont, int lvl){

    char senha[20], certo[20]="olho";
    lvl++;

    while(strcmp (certo, senha) != 0){

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");
        printf("\nNível 4\n");
        printf("\nA janela da alma\n\n");

        gets(senha);
        cont++;

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");

        if(cont>=7){
            printf("\n\nUm espelho te ajudará\n\n");
        }

        if(!strcmp (senha, "sair")){
            dados();

            printf("\n\nAo fazer isso você o seus dados foram salvos, porém seu andamento não.\nTerá que começar tudo de novo");
            exit(0);
        }
    }
    return(cont, lvl);
}

quintoNivel(int cont, int lvl){

    char senha[20], certo[20]="bacteria";
    lvl++;

    while(strcmp (certo, senha) != 0){

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");
        printf("\nNível 5\t\t\t\t\t\t\t\t\t\t\t\t\t              a\n");
        printf("\nO que há de semelhante entre cólera e o iogurte\n\n");
        gets(senha);
        cont++;

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");

        if(!strcmp (senha, "sair")){
            dados();

            printf("\n\nAo fazer isso você o seus dados foram salvos, porém seu andamento não.\nTerá que começar tudo de novo");
            exit(0);
        }
    }
    return(cont, lvl);
}

sextoNivel(int cont, int lvl){

    char senha[20], certo[20]="20";
    lvl++;

    while(strcmp (certo, senha) != 0){

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");
        printf("\nNível 6\n");
        printf("\nPara cada célula do corpo humano que possuem seu DNA no núcleo, existem quantas bactérias\n\n");
        gets(senha);
        cont++;

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");

        if(!strcmp (senha, "sair")){
            dados();

            printf("\n\nAo fazer isso você o seus dados foram salvos, porém seu andamento não.\nTerá que começar tudo de novo");
            exit(0);
        }
    }
    return(cont, lvl);
}

setimoNivel(int cont, int lvl, char *nome[]){

    char senha[20];
    lvl++;

    while(strcmp (*nome, senha) != 0){
        printf("\nNível 7\n");
        printf("\nVocê é piloto de um avião que voa de Londres a  Berlim,\ncom duas escalas em Praga.\nComo o piloto se chama?\n\n");
        gets(senha);
        cont++;

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");

        if(cont>=7){
            printf("\n\nvocê pode ser mais inteligente que isso\n\n");
        }

        if(!strcmp (senha, "sair")){
            dados();

            printf("\n\nAo fazer isso você o seus dados foram salvos, porém seu andamento não.\nTerá que começar tudo de novo");
            exit(0);
        }
    }
    return(cont, lvl);
}

oitavoNivel(int cont, int lvl){

    char senha[20], certo[20]= "purple";
    lvl++;

    while(strcmp (certo, senha) != 0){

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");
        printf("\nNível 8\n");
        printf("\nRED+BLUE\n\n");
        gets(senha);
        cont++;

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");

        if(cont>=7){
            printf("\n\nSiga o padrão\n\n");
        }

        if(!strcmp (senha, "sair")){
            dados();

            printf("\n\nAo fazer isso você o seus dados foram salvos, porém seu andamento não.\nTerá que começar tudo de novo");
            exit(0);
        }
    }
    return(cont, lvl);
}

nonoNivel(int cont, int lvl){

    char senha[20], certo[20]= "rgb";
    lvl++;

    while(strcmp (certo, senha) != 0){

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");
        printf("\nNível 9\t\t\t\t\t\t\t\t\t\t\t\t\t              n\n");
        printf("\nGREEN+BLUE+RED\n\n");
        gets(senha);
        cont++;

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");

        if(cont>=10){
            printf("\n\npense melhor nas letras\n\n");
        }

        if(!strcmp (senha, "sair")){
            dados();

            printf("\n\nAo fazer isso você o seus dados foram salvos, porém seu andamento não.\nTerá que começar tudo de novo");
            exit(0);
        }
    }
    return(cont, lvl);
}

decimoNivel(int cont, int lvl){

    char senha[20], certo[20]= "pi";
    lvl++;

    while(strcmp (certo, senha) != 0){

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");
        printf("\nNível 10\n");
        printf("\nTransendental mas usado de maneira ampla\non March 14th it gets amused\nIf did you put the letter E, you can eat it\n\n");
        gets(senha);
        cont++;

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");

        if(cont >= 5){
            printf("\n\ndica: ingles\n\n");
        }

        if(!strcmp (senha, "sair")){
            dados();

            printf("\n\nAo fazer isso você o seus dados foram salvos, porém seu andamento não.\nTerá que começar tudo de novo");
            exit(0);
        }
    }
    return(cont, lvl);
}

aNivel(int cont, int lvl){

    char senha[20], certo[20]= "66 6d 6a";
    lvl++;

    while(strcmp (certo, senha) != 0){

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");
        printf("\nNível 11\n");
        printf("\nPara cada suspensionis punctorum, HEXA descubrirá a senha\n\n");
        gets(senha);
        cont++;

         printf("\n\n\n-------------------------------------------------------------------\n\n\n");

        if(cont>=10){
            printf("\n\nOlhe para trás e reveja seus passos\n\n");
        }

        if(!strcmp (senha, "sair")){
            dados();

            printf("\n\nAo fazer isso você o seus dados foram salvos, porém seu andamento não.\nTerá que começar tudo de novo");
            exit(0);
        }
    }
    return(cont, lvl);
}

bNivel(int cont, int lvl){

    char senha[20], certo[20]= "humano";
    lvl++;

    while(strcmp (certo, senha) != 0){

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");
        printf("\nNível 12\t\t\t\t\t\t\t\t\t\t\t\t              a\n");
        printf("\n\t\t\tDECIFRA-ME OU DEVORO-TE!\n");
        printf("\nQue criatura pela manhã tem quatro pés, a tarde tem dois, e à noite tem três? \n\n");
        gets(senha);
        cont++;

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");

        if(!strcmp (senha, "sair")){
            dados();

            printf("\n\nAo fazer isso você o seus dados foram salvos, porém seu andamento não.\nTerá que começar tudo de novo");
            exit(0);
        }
    }
    return(cont, lvl);
}

cNivel(int cont, int lvl){

    char senha[20], certo[20]= "archimedes";
    lvl++;

    while(strcmp (certo, senha) != 0){

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");
        printf("\nNível 13\n");
        printf("\n\t\t\tEUREKA!! EUREKA!!\n\n");
        gets(senha);
        cont++;

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");

        if(!strcmp (senha, "sair")){
            dados();

            printf("\n\nAo fazer isso você o seus dados foram salvos, porém seu andamento não.\nTerá que começar tudo de novo");
            exit(0);
        }
    }
    return(cont, lvl);
}

dNivel(int cont, int lvl){

    char senha[20], certo[20]= "sabado";
    lvl++;

    while(strcmp (certo, senha) != 0){

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");
        printf("\nNível 14\t\t\t\t\t\t\t\t\t\t\t\t              h\n");
        printf("\n\t\t\tmodo gin\n\t\t\tadeus farine\n\t\t\tfaça rei ter\n\t\t\trifar ataque\n\t\t\tetnia faquir\n\t\t\tafixar tese\n\t\t\t   ???\n\n");
        gets(senha);
        cont++;

         printf("\n\n\n-------------------------------------------------------------------\n\n\n");

        if(cont>=7){
            printf("\n\nama grama\n\n");
        }

        if(!strcmp (senha, "sair")){
            dados();

            printf("\n\nAo fazer isso você o seus dados foram salvos, porém seu andamento não.\nTerá que começar tudo de novo");
            exit(0);
        }
    }
    return(cont, lvl);
}

eNivel(int cont, int lvl){

    char senha[20], certo[20]= "relogio";
    lvl++;

    while(strcmp (certo, senha) != 0){

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");
        printf("\nNível 15\n");
        printf("\nNuma pista circular\ndois caminham sem tumulto.\nA criança dá uma volta,\numa dúzia anda o adulto.\n\n");
        gets(senha);
        cont++;

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");

        if(!strcmp (senha, "hora")){
            printf("\n\nquase lá...\n\n");
        }

        if(!strcmp (senha, "sair")){
            dados();

            printf("\n\nAo fazer isso você o seus dados foram salvos, porém seu andamento não.\nTerá que começar tudo de novo");
            exit(0);
        }
    }
    return(cont, lvl);
}

fNivel(int cont, int lvl){

    char senha[20], certo[20]= "ades";
    lvl++;

    while(strcmp (certo, senha) != 0){

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");
        printf("\nNível 16\n");
        printf("\nirom xybmoB\n   odicet\n\n");
        gets(senha);
        cont++;

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");

        if(!strcmp ("seda", senha)){
            printf("\n\nsiga o padrão\n\n");
        }

        if(!strcmp (senha, "sair")){
            dados();

            printf("\n\nAo fazer isso você o seus dados foram salvos, porém seu andamento não.\nTerá que começar tudo de novo");
            exit(0);
        }
    }
    return(cont, lvl);
}

gNivel(int cont, int lvl){

   char senha[20], certo[20]= "dezembro";
   lvl++;

    while(strcmp (certo, senha) != 0){

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");
        printf("\nNível 17\t\t\t\t\t\t\t\t\t\t\t\t              t\n");
        printf("\n\t\tembro\n\t\tembro\n\t\tembro\n\t\tembro\n\t\tembro\n\t\tembro\n\t\tembro\n\t\tembro\n\t\tembro\n\t\tembro\n\n");
        gets(senha);
        cont++;

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");

        if(!strcmp (senha, "sair")){
            dados();

            printf("\n\nAo fazer isso você o seus dados foram salvos, porém seu andamento não.\nTerá que começar tudo de novo");
            exit(0);
        }
    }
    return(cont, lvl);
}

hNivel(int cont, int lvl){

   char senha[20], certo[20]= "balonismo";
   lvl++;

    while(strcmp (certo, senha) != 0){

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");
        printf("\nNível 18\t\t\t\t\t\t\t\t\t\t\t\t              a\n");
        printf("\n\t5 13 8 28 16 42\nnão o shostakovich, nem o pozharky\n\n");
        gets(senha);
        cont++;

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");

        if(!strcmp (senha, "Dmitri")){
            printf("\n\nQual Dmitri?\n\n");
        }
        if(!strcmp (senha, "dmitri")){
            printf("\n\nQual Dmitri?\n\n");
        }

        if(!strcmp (senha, "sair")){
            dados();

            printf("\n\nAo fazer isso você o seus dados foram salvos, porém seu andamento não.\nTerá que começar tudo de novo");
            exit(0);
        }
    }
    return(cont, lvl);
}

iNivel(int cont, int lvl){

   char senha[20], certo[20]= "melancia";
   lvl++;

    while(strcmp (certo, senha) != 0){

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");
        printf("\nNível 19\t\t\t\t\t\t\t\t\t\t\t\t              r\n");
        printf("\n\t\t4566 m\n\t\t8848 m\n\t\t8516 m\n\t\t6962 m\n\t\t4609 m\n\t\t5897 m\n\t\t6438 m\n\t\t5947 m\n\n");
        gets(senha);
        cont++;

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");

        if(!strcmp (senha, "sair")){
            dados();

            printf("\n\nAo fazer isso você o seus dados foram salvos, porém seu andamento não.\nTerá que começar tudo de novo");
            exit(0);
        }
    }
    return(cont, lvl);
}

jNivel(int cont, int lvl){

   char senha[20], certo[20]= "zq";
   lvl++;

    while(strcmp (certo, senha) != 0){

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");
        printf("\nNível 20\n");
        printf("\n\t\tcomunismo\n\t\tcérebro criativo\n\t\tteclas agudas\n\t\tfacas, colheres e copos\n\t\tpróxima página\n\t\tmão inglesa\n\t\tbarra de rolagem\n\t\ttouro em guernica\n\t\tmetais alcalinos\n\t\tteclado numérico\n\t\tmenu iniciar\n\t\tleste\n\t\tcoração\n\t\ttorneira de água quente\n\t\tnove horas\n\t\trei branco\n\t\t   0 1\n\n");
        gets(senha);
        cont++;

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");

        if(!strcmp (senha, "sair")){
            dados();

            printf("\n\nAo fazer isso você o seus dados foram salvos, porém seu andamento não.\nTerá que começar tudo de novo");
            exit(0);
        }
    }
    return(cont, lvl);
}

kNivel(int cont, int lvl){

   char senha[20], certo[20]= "liberdade";
   lvl++;

    while(strcmp (certo, senha) != 0){

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");
        printf("\nNível 21\n");
        printf("\nEm uma retrospectiva você achará dicas para prosseguir com o enigma\n\n");
        gets(senha);
        cont++;

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");

        if(cont>=10){
            printf("\n\nolhes os seus passos\n\n");
        }

        if(!strcmp (senha, "chave")){
            printf("\n\nseu símbolo\n\n");
        }

        if(!strcmp (senha, "sair")){
            dados();

            printf("\n\nAo fazer isso você o seus dados foram salvos, porém seu andamento não.\nTerá que começar tudo de novo");
            exit(0);
        }
    }
    return(cont, lvl);
}

lNivel(int cont, int lvl){

    char senha[20], certo[20]= "esta indo bem";
   lvl++;

    printf("\n\n\t\tApartir desse nível será mais difícil ter dicas.\n\t\tJá considero você inteligente suficiente para não precisar disso\n\n");

      while(strcmp (certo, senha) != 0){

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");
        printf("\nNível 22\n");
        printf("\n. ... - .- -··-· .. -. -.. --- -··-· -... . --\n\n");
        gets(senha);
        cont++;

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");

        if(!strcmp (senha, "sair")){
            dados();

            printf("\n\nAo fazer isso você o seus dados foram salvos, porém seu andamento não.\nTerá que começar tudo de novo");
            exit(0);
        }
    }
    return(cont, lvl);
}

mNivel(int cont, int lvl){

    char senha[20], certo[20]= "budapeste hungria";
   lvl++;

      while(strcmp (certo, senha) != 0){

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");
        printf("\nNível 23\n");
        printf("\n\t\t\tcolónia alemanha\n\t\t\tmilão itália\n\t\t\tB=3,14155926535\n\t\t\tpoznan polônia\n\n");
        gets(senha);
        cont++;

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");

        if(!strcmp (senha, "sair")){
            dados();

            printf("\n\nAo fazer isso você o seus dados foram salvos, porém seu andamento não.\nTerá que começar tudo de novo");
            exit(0);
        }
    }
    return(cont, lvl);
}

nNivel(int cont, int lvl){

    char senha[20], certo[20]= "oculto";
   lvl++;

        system("start theenigmesweb2.html");

      while(strcmp (certo, senha) != 0){

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");
        printf("\nNível 24\n\n");
        gets(senha);
        cont++;

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");

        if(cont>=7){
            printf("\npense melhor você consegue\n");
        }

        if(!strcmp (senha, "sair")){
            dados();

            printf("\n\nAo fazer isso você o seus dados foram salvos, porém seu andamento não.\nTerá que começar tudo de novo");
            exit(0);
        }
    }
    return(cont, lvl);
}

oNivel(int cont, int lvl){

    char senha[20], certo[20]= "decifrado";
   lvl++;

        system("start A_CHAVE_E_decifrado.html");

      while(strcmp (certo, senha) != 0){

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");
        printf("\nNível 25\n\n");
        gets(senha);
        cont++;

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");

        if(cont>=7){
            printf("\npense melhor você consegue\n");
        }

        if(!strcmp (senha, "sair")){
            dados();

            printf("\n\nAo fazer isso você o seus dados foram salvos, porém seu andamento não.\nTerá que começar tudo de novo");
            exit(0);
        }
    }
    return(cont, lvl);
}


pNivel(int cont, int lvl){

    char senha[20], certo[20]= "durma bem";
   lvl++;

        system("start theenigmesweb.html");

      while(strcmp (certo, senha) != 0){

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");
        printf("\nNível 26\n\n");
        gets(senha);
        cont++;

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");

        if(cont>=7){
            printf("\npense melhor você consegue\n");
        }

        if(!strcmp (senha, "sair")){
            dados();

            printf("\n\nAo fazer isso você o seus dados foram salvos, porém seu andamento não.\nTerá que começar tudo de novo");
            exit(0);
        }
    }
    return(cont, lvl);
}

qNivel(int cont, int lvl){

    char senha[20], certo[20]= "caminho verdadeiro";
   lvl++;

        system("start timegame.exe");

      while(strcmp (certo, senha) != 0){

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");
        printf("\nNível 27\n\n");
        gets(senha);
        cont++;

        printf("\n\n\n-------------------------------------------------------------------\n\n\n");

        if(cont>=7){
            printf("\npense melhor você consegue\n");
        }

        if(!strcmp (senha, "sair")){
            dados();

            printf("\n\nAo fazer isso você o seus dados foram salvos, porém seu andamento não.\nTerá que começar tudo de novo");
            exit(0);
        }
    }
    return(cont, lvl);
}



#endif // ENIGMES_H_INCLUDED



