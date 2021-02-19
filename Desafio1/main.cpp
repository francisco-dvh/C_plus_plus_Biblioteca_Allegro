#include <allegro5/allegro.h>
/*neste codigo estar os desafio 1,2,3
desafio 1 alterar as vari�veis do float que era 3 para ,2,1,3 respectivamente
 t1 vale 2 segundo, conforme foi declarado.
 t2 vale 1 segundo, conforme foi declarado.
 t3 vale 3 segundo, conforme foi declarado.
desafio 2 alterar os numero posx, posy. quando esses numero s�o alterados
estamos mudando a aposi��o da tela no ponto x e no ponto y !
desafio 3 altera os numero t1,t2,t3. e onde mudamos os tempo de cada tela.

*/
int main() //fun��o principal
{
    //declara��es de variaveis
   int PosX =1 ,PosY=2;
    //tempo de exoposi�� da tela
    float t1= 2, t2=1 , t3= 3;//desafio 1 alterar as vari�veis do float que era 3 para ,2,1,3respectivamente
     //desafio 3 altera os numero t1,t2,t3. e onde mudamos os tempo de cada tela.

  const   char Titulo []="O Grande Jogo";
    //c�digo principal
    //define um ponteiro para a tel do jogo

    ALLEGRO_DISPLAY *Tela = NULL;
    //inicializa a biblioteca allegro 5
    al_init();
    //cria a tela para  jogo e define
    //o tamanho para 640, 480


    Tela = al_create_display(640, 480);
    al_set_window_title(Tela,Titulo );
    //define o titulo da janela

        //define  a posi��o da tela
        al_set_window_position(Tela,PosX,PosY);
        //define  a cor de tela para verde
        al_clear_to_color(al_map_rgb(0,100,0));
        //apresenta a tela no manitor
        al_flip_display();
        //aguarda um segundo
        al_rest(t1);//desafio 1 t1 vale 2 segundo conforme foi declarado

    //altera o conteudo  das vari�veis de posi��es
    PosX= PosX + 100;
    PosY= PosY + 100;//desafio 2 alterar os numero posx, posy. quando esses numero s�o alterados
                      //estamos mudando a aposi��o da tela no ponto x e no ponto y !


//define a posi��o da janela
    al_set_window_position(Tela,PosX,PosY);
    //define a cor  do fundo da tela para vermelho
    al_clear_to_color(al_map_rgb(100,0,0));
    //apresenta a tela do jogo no manitor
    al_flip_display();

    //agurda um segundo
    al_rest(t2);  //desafio 1 t2 vale 1 segundo conforme foi declarado


    //altera o conteudo das vari�veis de posi��es
        PosX=PosX +150;
        PosY=PosY +150;

        //define a posi��o da janela
        al_set_window_position(Tela,PosX,PosY);
        //define  a cor de tela de fundo par azul
        al_clear_to_color(al_map_rgb(0,0,100));
        //apresenta atela do jogo no manitor
        al_flip_display();
        //aguarda um segundo
        al_rest(t3); //desafio 1 t3 vale 3 segundo conforme foi declarado


      //destoi o ponteiro referente � tela no momitor
        al_destroy_display(Tela);
        //retorna 0 parao S.O.
        return 0;
}
