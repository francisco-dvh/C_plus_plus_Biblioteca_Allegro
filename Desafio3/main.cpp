#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
/*Desafio mostra 10 ponto alinhados na horizontal e sepadas por pixels.
*/
int main ()
{
    int LAR_T=800;
    int ALT_T=600;

    ALLEGRO_DISPLAY *Tela =NULL;
    al_init();
    al_init_primitives_addon();
    ALLEGRO_COLOR Cor_Ponto = al_map_rgb(0, 0 ,0);
    ALLEGRO_COLOR Cor_Fundo = al_map_rgb(0,255, 0);

    Tela = al_create_display(LAR_T, ALT_T);
    al_clear_to_color(Cor_Fundo);
    al_draw_pixel(10,10 , Cor_Ponto);
    al_draw_pixel(20,10 , Cor_Ponto);
    al_draw_pixel(30,10 , Cor_Ponto);
    al_draw_pixel(40,10 , Cor_Ponto);
    al_draw_pixel(50,10 , Cor_Ponto);
    al_draw_pixel(60,10 , Cor_Ponto);
    al_draw_pixel(70,10 , Cor_Ponto);
    al_draw_pixel(80,10 , Cor_Ponto);
    al_draw_pixel(90,10 , Cor_Ponto);
    al_draw_pixel(100,10 , Cor_Ponto);

    al_flip_display();
    al_rest(3.0);
    al_destroy_display(Tela);

    return 0;
}

