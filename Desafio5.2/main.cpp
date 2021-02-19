
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

    ALLEGRO_FONT *fonte = al_load_font("orbitron-black.ttf", 15,NULL);
    ALLEGRO_COLOR Cor_fundo = al_map_rgb(1000,1000,1000);
     ALLEGRO_COLOR Cor_rect = al_map_rgb(0,130,255);
     ALLEGRO_COLOR Cor_rect2 = al_map_rgb(0,90,20);
     ALLEGRO_COLOR Cor_rect3 = al_map_rgb(0, 0, 0);
       ALLEGRO_COLOR Cor_linha = al_map_rgb(0, 0, 0);


    al_clear_to_color(Cor_fundo);



    al_draw_filled_rectangle(40,40 ,400 , 400, Cor_rect );

    al_draw_filled_rectangle(120,120 ,320 , 320, Cor_rect2 );

    al_draw_rectangle(40,40 , 400, 400, Cor_rect3,2 );
    al_draw_rectangle(120,120 , 320, 320, Cor_rect3,2 );

    al_draw_rectangle(40,120 ,320 , 40, Cor_rect3,2 );
    al_draw_rectangle(120,120 , 40, 120, Cor_rect3,2 );
    al_draw_rectangle(120,400 , 400, 320, Cor_rect3,2 );
     al_draw_rectangle(40,30 , 400, 30, Cor_rect3,2 );
      al_draw_rectangle(40,35 , 40,25 , Cor_rect3,2 );
       al_draw_rectangle(320,35 , 320, 25, Cor_rect3,2 );
       al_draw_rectangle(400,35 , 400, 25, Cor_rect3,2 );
        al_draw_rectangle(25,40 , 25, 400, Cor_rect3,2 );
         al_draw_rectangle(20,40 , 30, 40, Cor_rect3,2 );
          al_draw_rectangle(20,120 , 30, 120, Cor_rect3,2 );
           al_draw_rectangle(20,400 , 30, 400, Cor_rect3,2 );


       al_draw_text(fonte, al_map_rgb(0 , 0, 0),350,15,NULL,"9");
       al_draw_text(fonte, al_map_rgb(0 , 0, 0),180,15,NULL,"X");
       al_draw_text(fonte, al_map_rgb(0 , 0, 0),10,80,NULL,"9");
       al_draw_text(fonte, al_map_rgb(0 , 0, 0),10,250,NULL,"X");
       al_draw_text(fonte, al_map_rgb(0 , 0, 0),180,80,NULL,"R");
       al_draw_text(fonte, al_map_rgb(0 , 0, 0),350,180,NULL,"R");
       al_draw_text(fonte, al_map_rgb(0 , 0, 0),80,250,NULL,"R");
       al_draw_text(fonte, al_map_rgb(0 , 0, 0),300,350,NULL,"R");
       al_draw_text(fonte, al_map_rgb(0 , 0, 0),210,200,NULL,"Q");















    al_flip_display();
    al_rest(3.0);

    al_destroy_font(fonte);
    al_destroy_display(Tela);
    return 0;

}



