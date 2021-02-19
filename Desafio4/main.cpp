

#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
//desafios da formas geometricas 1, 2, 3,
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

    ALLEGRO_COLOR Cor_fundo = al_map_rgb(0, 255, 0);
    ALLEGRO_COLOR Cor_linha = al_map_rgb(0, 0, 0);

    Tela = al_create_display(Larg_t,Altu_t);
al_clear_to_color(Cor_fundo);
    al_draw_line(p1_x+10,p1_y+10,p2_x+10,p2_y+50, Cor_linha,espesssura_linha +1);
      al_draw_line(p1_x+20,p1_y+10,p2_x+20,p2_y+50, Cor_linha,espesssura_linha +2);
        al_draw_line(p1_x+30,p1_y+10,p2_x+30,p2_y+50, Cor_linha,espesssura_linha +3);
          al_draw_line(p1_x+40,p1_y+10,p2_x+40,p2_y+50, Cor_linha,espesssura_linha +4);
          al_flip_display();
          al_rest(tempo_exib);
al_clear_to_color(Cor_fundo);
    al_draw_line(p1_x+10,p1_y+10,p2_x+70,p2_y+10, Cor_linha,espesssura_linha +1);
      al_draw_line(p1_x+10,p1_y+20,p2_x+70,p2_y+20, Cor_linha,espesssura_linha +2);
        al_draw_line(p1_x+10,p1_y+30,p2_x+70,p2_y+30, Cor_linha,espesssura_linha +3);
          al_draw_line(p1_x+10,p1_y+40,p2_x+70,p2_y+40, Cor_linha,espesssura_linha +4);
           al_draw_line(p1_x+10,p1_y+50,p2_x+70,p2_y+50, Cor_linha,espesssura_linha +3);
            al_draw_line(p1_x+10,p1_y+60,p2_x+70,p2_y+60, Cor_linha,espesssura_linha +2);
             al_draw_line(p1_x+10,p1_y+70,p2_x+70,p2_y+70, Cor_linha,espesssura_linha +1);

   al_flip_display();
    al_rest(tempo_exib);
    al_clear_to_color(Cor_fundo);

    al_draw_line(p1_x+10,p1_y+10,p2_x+10,p2_y+50, Cor_linha,espesssura_linha +1);
      al_draw_line(p1_x+10,p1_y+10,p2_x+50,p2_y+10, Cor_linha,espesssura_linha +1);
       al_draw_line(p1_x+50,p1_y+50,p2_x+10,p2_y+50, Cor_linha,espesssura_linha +1);
      al_draw_line(p1_x+50,p1_y+50,p2_x+50,p2_y+10, Cor_linha,espesssura_linha +1);

    al_draw_line(p1_x+70,p1_y+10,p2_x+70,p2_y+40, Cor_linha,espesssura_linha +2);
    al_draw_line(p1_x+70,p1_y+10,p2_x+100,p2_y+10, Cor_linha,espesssura_linha +2);
    al_draw_line(p1_x+70,p1_y+40,p2_x+100,p2_y+10, Cor_linha,espesssura_linha +2);





    al_flip_display();
    al_rest(tempo_exib);
    al_destroy_display(Tela);
    return 0;
}
