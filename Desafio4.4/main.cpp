#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>

//desafios da formas geometricas 4.
int main ()
{
    int Larg_t= 800, Altu_t=600;
    float tempo_exib =3.0;

    int p1_x = 0, p1_y = 0;
    int p2_x = 0, p2_y = 0;
    int espesssura_linha = 0;

    ALLEGRO_DISPLAY *Tela =NULL;

    al_init();

    al_init_primitives_addon();
    al_init_font_addon();
    al_init_ttf_addon();

      ALLEGRO_FONT *size_16;
    ALLEGRO_FONT *size_32;
    //crrega as fontes
    size_16= al_load_font("orbitron-black.ttf", 16 , 0);
    size_32= al_load_font("arial.ttf", 32 , 0);

    ALLEGRO_COLOR Cor_fundo = al_map_rgb(0, 255, 0);
    ALLEGRO_COLOR Cor_linha = al_map_rgb(0, 0, 0);

    Tela = al_create_display(Larg_t,Altu_t);

al_clear_to_color(Cor_fundo);
al_draw_text(size_32, al_map_rgb(255, 0, 0), 20, 10, 0,"Desafio 4!!!");
al_flip_display();
    al_rest(tempo_exib);
    al_clear_to_color(Cor_fundo);

al_draw_text(size_32, al_map_rgb(255, 0, 0), 20, 10, 0,"PROJETO_2!!!");
      al_draw_text(size_16, al_map_rgb(0, 0, 0), 20, 50, 0,"LINHA E TEXTOS");
    al_draw_line(p1_x+10,p1_y+10,p2_x+10,p2_y+70, Cor_linha,espesssura_linha +2);
      al_draw_line(p1_x+10,p1_y+70,p2_x+250,p2_y+70, Cor_linha,espesssura_linha +2);

 al_flip_display();
    al_rest(tempo_exib);
      al_clear_to_color(Cor_fundo);

al_draw_text(size_32, al_map_rgb(255, 0, 0), 20, 10, 0,"Desafio 5!!!");
al_flip_display();
    al_rest(tempo_exib);
    al_clear_to_color(Cor_fundo);


al_draw_text(size_32, al_map_rgb(255, 0, 0), 20, 10, 0,"PROJETO_2!!!");
    al_flip_display();
    al_rest(tempo_exib);

    al_draw_line(p1_x+10,p1_y+10,p2_x+10,p2_y+70, Cor_linha,espesssura_linha +2);
     al_flip_display();
    al_rest(tempo_exib);

     al_draw_line(p1_x+10,p1_y+70,p2_x+250,p2_y+70, Cor_linha,espesssura_linha +2);
     al_flip_display();
    al_rest(tempo_exib);

      al_draw_text(size_16, al_map_rgb(0, 0, 0), 20, 50, 0,"LINHA E TEXTOS");


    al_flip_display();
    al_rest(tempo_exib);
    al_destroy_display(Tela);
    return 0;
}
