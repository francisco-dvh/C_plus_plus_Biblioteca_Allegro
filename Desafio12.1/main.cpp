#include <allegro5/allegro.h>
#include <iostream>
#include <allegro5/allegro_native_dialog.h>
using namespace std;
/*----------------------------
projeto treze
-Data: 08/05/2020
-usando conditionais
-if else
Desafio 1 capitulo 6.1 diferen�a entre os comando"==" e"=" e que um compara e outro atribui
sendo assim sempre que se escolher um n�mero vai ser atribuido a cor!
Dsafio 2 este c�digo e uma condi��o e vai ser executado sempre que for verdadeiro
 quando executamos o c�digo ele pede para escolher
um n�mero que vai se comparado com o numero no causo cor, que foi atribuido ao mesmo
o c�digo sera executado e mostrarar a cor que foi escolhida.
-------------------*/
void Caixa_de_msg(ALLEGRO_DISPLAY *d)
{
    char  cxTitulo[]="projeto quinze";
    if (al_show_native_message_box(d, cxTitulo,
    "pergunta:", "deseja exibir a mensagem de erro?",
    NULL, ALLEGRO_MESSAGEBOX_YES_NO))
    {
        al_show_native_message_box(d,cxTitulo,
                                   )
    }
     exit(0);
al_clear_to_color(Cor_Fundo);
al_flip_display();
al_rest(2.0);
return 0;
}
