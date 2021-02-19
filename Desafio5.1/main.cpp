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

    ALLEGRO_FONT *fonte = al_load_font("orbitron-black.ttf", 20,NULL);
    ALLEGRO_COLOR Cor_fundo = al_map_rgb(1000,1000,1000);
     ALLEGRO_COLOR Cor_rect = al_map_rgb(0,0,0);


    al_clear_to_color(Cor_fundo);



    al_draw_rectangle(40,50 , 365, 270, Cor_rect,2 );
    al_draw_rectangle(40,50 , 60,70, Cor_rect,1 );
    al_draw_filled_circle(50,60 , 3, Cor_rect );

    al_draw_rectangle(345,70 , 365,50, Cor_rect,1 );
    al_draw_filled_circle(355,60 , 3, Cor_rect );

    al_draw_rectangle(40,250 , 60,270, Cor_rect,1 );
    al_draw_filled_circle(50,260 , 3, Cor_rect );

    al_draw_rectangle(345,250 , 365,270, Cor_rect,1 );
    al_draw_filled_circle(355,260 , 3, Cor_rect );


 al_draw_text(fonte, Cor_rect,380,170 ,NULL,"ALTURA (h)");
    al_draw_text(fonte, Cor_rect,160,300,NULL, "base (b)");







    al_flip_display();
    al_rest(3.0);

    al_destroy_font(fonte);
    al_destroy_display(Tela);
    return 0;

}


