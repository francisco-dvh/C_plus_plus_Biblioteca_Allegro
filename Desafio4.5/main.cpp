#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_primitives.h>
int main ()
/*desafio para aparecer quatro imagens, duas a duas, com suas respectivas
descrição abaixo.
*/
{
    int Lar_T= 800;
    int Alt_T= 500;
     float tempo_exib =7.0;

    int p1_x = 0, p1_y = 0;
    int p2_x = 0, p2_y = 0;
    int espesssura_linha = 0;
    al_init();
    al_init_image_addon();
    al_init_font_addon();
    al_init_ttf_addon();
    al_init_primitives_addon();
    ALLEGRO_DISPLAY *Tela =al_create_display(Lar_T, Alt_T);
    ALLEGRO_BITMAP * foto = al_load_bitmap("1.jpg");
    ALLEGRO_FONT *fonte = al_load_font("orbitron-black.ttf", 30,NULL);
    ALLEGRO_FONT *fonte1 = al_load_font("orbitron-black.ttf", 15,NULL);
    ALLEGRO_COLOR Cor_Ponto = al_map_rgb(0, 0 ,0);
    ALLEGRO_COLOR Cor_Fundo = al_map_rgb(0,255, 0);
    ALLEGRO_COLOR Cor_linha = al_map_rgb(0, 0, 0);


     al_clear_to_color(Cor_Fundo);
     for(int x=130; x<=400; x+=10)
    al_draw_pixel(x,155 , Cor_Ponto);
         for(int x=130; x<=400; x+=10)
    al_draw_pixel(x,165 , Cor_Ponto);

    al_draw_line(p1_x+430,p1_y+170,p2_x+430,p2_y+150, Cor_linha,espesssura_linha +2);
     al_draw_line(p1_x+400,p1_y+160,p2_x+430,p2_y+150, Cor_linha,espesssura_linha +2);
     al_draw_line(p1_x+400,p1_y+160,p2_x+430,p2_y+170, Cor_linha,espesssura_linha +2);
     al_draw_line(p1_x+430,p1_y+165,p2_x+440,p2_y+165, Cor_linha,espesssura_linha +2);
     al_draw_line(p1_x+430,p1_y+155,p2_x+440,p2_y+155, Cor_linha,espesssura_linha +2);
     al_draw_line(p1_x+120,p1_y+160,p2_x+400,p2_y+160, Cor_linha,espesssura_linha +2);


    al_draw_text(fonte, al_map_rgb(0 , 0, 255),120,50,NULL,"SISTEMA DE INFORMACAO!");
    al_draw_text(fonte1, al_map_rgb(0 , 0, 255),120,100,NULL,"Transformando o mundo ! ;)");


    al_draw_bitmap(foto, 190, 120, NULL);





    al_flip_display();
    al_rest(tempo_exib);

    al_destroy_bitmap(foto);
    al_destroy_font(fonte);
    al_destroy_display(Tela);
    return 0;

}

