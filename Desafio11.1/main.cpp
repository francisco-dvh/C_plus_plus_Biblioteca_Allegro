
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
     ALLEGRO_COLOR Cor_rect = al_map_rgb(0,50,255);
     ALLEGRO_COLOR Cor_rect2 = al_map_rgb(100,100,150);
    ALLEGRO_COLOR Cor_rect3 = al_map_rgb(0,0,0);



    al_clear_to_color(Cor_fundo);



    al_draw_rectangle(200,180 , 200, 160, Cor_rect2,3 );
    al_draw_rectangle(300,180 , 300, 160, Cor_rect2,3 );
    al_draw_rectangle(310,200 , 330, 200, Cor_rect2,3 );
    al_draw_rectangle(310,400 , 330, 400, Cor_rect2,3 );
    al_draw_rectangle(220,170 , 280, 170, Cor_rect2,3 );
     al_draw_rectangle(320,220 , 320,380 , Cor_rect2,3 );

     al_draw_filled_triangle(220, 165, 220, 175, 200,170 , Cor_rect2);
     al_draw_filled_triangle(280, 175, 300, 170, 280,165 , Cor_rect2);
     al_draw_filled_triangle(310, 220, 330, 220, 320,200 , Cor_rect2);
     al_draw_filled_triangle(320, 400, 310, 380, 330,380 , Cor_rect2);

      al_draw_text(fonte, al_map_rgb(0 , 0, 0),240,140,NULL,"a");
       al_draw_text(fonte, al_map_rgb(0 , 0, 0),330,280,NULL,"b");

       al_draw_rectangle(130,480 , 400,130, Cor_rect3,2 );


    al_draw_filled_rectangle(200,200 ,300 , 400, Cor_rect );
    al_draw_filled_circle(250,400,50,Cor_rect2);



    al_flip_display();
    al_rest(3.0);

    al_destroy_font(fonte);
    al_destroy_display(Tela);
    return 0;

}



