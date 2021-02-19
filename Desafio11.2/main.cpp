
#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_primitives.h>
int main (void)
/*desafio para aparecer quatro imagens, duas a duas, com suas respectivas
descrição abaixo.
*/
{
    int Lar_T= 900;
    int Alt_T= 600;


    al_init();

    al_init_font_addon();
    al_init_ttf_addon();
    al_init_primitives_addon();
    ALLEGRO_DISPLAY *Tela =al_create_display(Lar_T, Alt_T);

    ALLEGRO_FONT *fonte = al_load_font("arial.ttf", 20,NULL);
    ALLEGRO_COLOR Cor_fundo = al_map_rgb(1000,1000,1000);
     ALLEGRO_COLOR Cor_rect = al_map_rgb(200,200,250);
     ALLEGRO_COLOR Cor_linha = al_map_rgb(100,60,150);

     ALLEGRO_COLOR Cor_circle = al_map_rgb(0,20,255);




    al_clear_to_color(Cor_fundo);
al_draw_circle(300,200,81,Cor_circle,3);
al_draw_filled_circle(300,200,79,Cor_rect);
 al_draw_filled_rectangle(150,120 ,305,279, Cor_rect );
al_draw_rectangle(150,120 ,305,281, Cor_circle,3 );
al_draw_line(150,140,170,140,Cor_linha,2);
al_draw_line(170,120,170,140,Cor_linha,2);
al_draw_line(150,260,175,260,Cor_linha,2);
al_draw_line(175,260,175,280,Cor_linha,2);
al_draw_line(303,260,280,260,Cor_linha,2);
al_draw_line(280,260,280,280,Cor_linha,2);
al_draw_text(fonte, al_map_rgb(0 , 0, 0),90,180,NULL,"12 cm");
       al_draw_text(fonte, al_map_rgb(0 , 0, 0),200,290,NULL,"12 cm");

    al_flip_display();
    al_rest(3.0);

    al_destroy_font(fonte);
    al_destroy_display(Tela);
    return 0;

}




