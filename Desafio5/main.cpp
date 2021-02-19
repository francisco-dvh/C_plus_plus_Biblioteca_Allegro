#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
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
    al_init_image_addon();
    al_init_font_addon();
    al_init_ttf_addon();
    al_init_primitives_addon();
    ALLEGRO_DISPLAY *Tela =al_create_display(Lar_T, Alt_T);
    ALLEGRO_BITMAP * foto = al_load_bitmap("1.jpg");
    ALLEGRO_FONT *fonte = al_load_font("orbitron-black.ttf", 30,NULL);
    ALLEGRO_COLOR Cor_fundo = al_map_rgb(0, 255, 0);
     ALLEGRO_COLOR Cor_rect = al_map_rgb(0,0,0);
     ALLEGRO_COLOR Cor_rect2 = al_map_rgb(1000 ,1000 ,1000);
    al_clear_to_color(Cor_fundo);

    float h = al_get_bitmap_height(foto);
    float w = al_get_bitmap_width(foto);

    al_draw_bitmap(foto, 40, 75, NULL);

    al_draw_rectangle(40,75 , 365, 270, Cor_rect,10 );
    al_draw_rectangle(40,265 , 365, 230, Cor_rect,10 );
    al_draw_filled_rectangle(45, 265, 360, 235, Cor_rect2);

    al_draw_bitmap(foto,40+w+40,75,NULL);

    al_draw_rectangle(400, 75 , 730, 230, Cor_rect,10 );
    al_draw_rectangle(400,230 , 730, 270, Cor_rect,10 );
    al_draw_filled_rectangle(405, 265, 725, 235, Cor_rect2);

    al_draw_bitmap(foto,40,300,NULL);

    al_draw_rectangle(40,300 , 365, 460, Cor_rect,10 );
    al_draw_rectangle(40,460 , 365, 500, Cor_rect,10 );
    al_draw_filled_rectangle(45, 465, 360, 495, Cor_rect2);

    al_draw_bitmap(foto,40+w+40,300,NULL);

    al_draw_rectangle(400, 300 , 730, 460, Cor_rect,10 );
    al_draw_rectangle(400,460 , 730, 500, Cor_rect,10 );
    al_draw_filled_rectangle(405, 465, 725, 495, Cor_rect2);




    al_flip_display();
    al_rest(3.0);

    al_destroy_bitmap(foto);
    al_destroy_font(fonte);
    al_destroy_display(Tela);
    return 0;

}

