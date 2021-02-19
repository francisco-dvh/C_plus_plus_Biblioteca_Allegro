
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
    int p1_x = 0, p1_y = 0;
    int p2_x = 0, p2_y = 0;
    int espesssura_linha = 0;

    al_init();

    al_init_font_addon();
    al_init_ttf_addon();
    al_init_primitives_addon();
    ALLEGRO_DISPLAY *Tela =al_create_display(Lar_T, Alt_T);

    ALLEGRO_FONT *fonte = al_load_font("arial.ttf", 30,NULL);
    ALLEGRO_COLOR Cor_fundo = al_map_rgb(1000,1000,1000);
     ALLEGRO_COLOR Cor_rect = al_map_rgb(0,255,0);
     ALLEGRO_COLOR Cor_rect2 = al_map_rgb(0,0,0);



    al_clear_to_color(Cor_fundo);



    al_draw_rectangle(39,39 , 402, 302, Cor_rect2,3 );
    al_draw_filled_rectangle(40,40 ,400 , 300, Cor_rect );
    al_draw_rectangle(39,170 , 230, 39, Cor_rect2,3 );

    al_draw_filled_rectangle(37,168 ,228 , 30, Cor_fundo);

    al_draw_text(fonte, al_map_rgb(0 , 0, 0),100,120,NULL,"3 cm");
    al_draw_text(fonte, al_map_rgb(0 , 0, 0),300,5,NULL,"3 cm");
    al_draw_text(fonte, al_map_rgb(0 , 0, 0),420,150,NULL,"5,5 cm");
    al_draw_text(fonte, al_map_rgb(0 , 0, 0),200,320,NULL,"6 cm");


    al_flip_display();
    al_rest(3.0);

    al_destroy_font(fonte);
    al_destroy_display(Tela);
    return 0;

}



