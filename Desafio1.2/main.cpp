#include <allegro5/allegro.h>
#include <iostream>
using namespace std;
//projeto quatro
/*Desafio deixa o processo mas lento e verificável (linha a linha), insirindo "al_rest(0.1);"
depois de cada linha
*/

int main() //inicio da função principal
{


//declaração de variaveis e constantes
int larg_Tela  = 640,  alt_Tela = 480; //dimensões
int Posx = 300, Posy =200; //posição
const char TITULO[]= "PROJETO QUATRO"; //titulo

//cabeçalho
cout <<"---PROJETO QUATRO-----" <<endl;
cout <<"Autor: FRANCISCO MENDES ";
cout <<"DATA: 21/04/2020" <<endl;
//-----------------------------------------------

//bloco principal do programa
cout <<"INICIO DO BLOCO PRINCIPAL" <<endl;
ALLEGRO_DISPLAY *Tela =NULL;
al_rest(1);//atualiza os dados do monitor

cout <<"INICIO DA BIBLIOTECA ALLEGRO" <<endl;
al_init(); //inicia a biblioteca allegro5
al_rest(1);//atualiza os dados do monitor

cout <<"DECLARA A  VARIAVEL COM A COR DA TELA"<< endl;
ALLEGRO_COLOR Cor_Fundo =al_map_rgb(0, 100, 0);//cor  de fundo
al_rest(1);//atualiza os dados do monitor

cout <<"CRIA ATELA TELA NA MEMORIA" <<endl;
Tela = al_create_display(larg_Tela,alt_Tela); //cria tela com tamanho 640, 480
al_rest(1);//atualiza os dados do monitor

cout  <<"DEFINE TITULO DA TELA" <<endl;
al_set_window_title(Tela,TITULO);//define o titulo da tela
al_rest(1);//atualiza os dados do monitor

cout <<"DEFINE A POSICAO DA TELA DO MANITOR" <<endl;
al_set_window_position(Tela,Posx,Posy);//define a aposição na tela
al_rest(1);//atualiza os dados do monitor

cout <<"DEFINE A COR DO FUNDO DA TELA" <<endl;
al_clear_to_color(Cor_Fundo);//define a cor do fundo da tela
al_rest(1);//atualiza os dados do monitor

cout <<"ATUALIZA O MONITOR E MOSTRA A TELA CRIADA" <<endl;
al_flip_display();//atualiza os dados do monitor
al_rest(1);//atualiza os dados do monitor

cout <<"AGUARDA 5 SEGUNDOS E FECHA A TELA" <<endl;
al_rest(1);//atualiza os dados do monitor

cout << "DESTROI A TELA CRIAdA NA MEMORIA" <<endl;
al_rest(1);//atualiza os dados do monitor
al_destroy_display(Tela);//destroi  a tela
al_rest(1);//atualiza os dados do monitor

cout <<"FIM DO BLOCO PRINCIPAL" <<endl;
al_rest(1);//atualiza os dados do monitor
//------------------------------------------------------------
return 0;

}


