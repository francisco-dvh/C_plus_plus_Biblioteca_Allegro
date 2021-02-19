

#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_primitives.h>
int main (void)

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
     ALLEGRO_COLOR Cor_linha = al_map_rgb(0,0,0);

     ALLEGRO_COLOR Cor_circle = al_map_rgb(0,20,255);




    al_clear_to_color(Cor_fundo);

al_draw_rectangle(190,95,345,250,Cor_circle,2);
al_draw_filled_rectangle(190,95,345,250,Cor_circle);
al_draw_circle(195,245,150,Cor_linha,2);
al_draw_filled_circle(195,245,150,Cor_fundo);
al_draw_rectangle(190,95,345,250,Cor_linha,2);

al_draw_filled_rectangle(188,251,346,400,Cor_fundo);
al_draw_filled_rectangle(10,94,189,400,Cor_fundo);

al_draw_rectangle(190,95,210,120,Cor_linha,2);
al_draw_filled_circle(200,107,3,Cor_linha);

al_draw_rectangle(190,225,210,250,Cor_linha,2);
al_draw_filled_circle(200,237,3,Cor_linha);
al_draw_text(fonte, al_map_rgb(0 , 0, 0),130,170,NULL,"10 cm");
       al_draw_text(fonte, al_map_rgb(0 , 0, 0),230,250,NULL,"10 cm");


    al_flip_display();
    al_rest(3.0);

    al_destroy_font(fonte);
    al_destroy_display(Tela);
    return 0;

}




