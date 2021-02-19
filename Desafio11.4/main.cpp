#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_primitives.h>
int main (void)

{
    int Lar_T= 800;
    int Alt_T= 600;


    al_init();

    al_init_font_addon();
    al_init_ttf_addon();
    al_init_primitives_addon();
    ALLEGRO_DISPLAY *Tela =al_create_display(Lar_T, Alt_T);

    ALLEGRO_FONT *fonte = al_load_font("arial.ttf", 20,NULL);
    ALLEGRO_COLOR Cor_fundo = al_map_rgb(1000,1000,1000);







    al_clear_to_color(Cor_fundo);


al_draw_filled_rectangle(150,50,345,250, al_map_rgb(0,190,255));

al_draw_circle(145,50,110,al_map_rgb(0,200,0),3);
al_draw_circle(145,270,110,al_map_rgb(0,200,0),3);
al_draw_circle(365,50,110,al_map_rgb(0,200,0),3);
al_draw_circle(365,270,110,al_map_rgb(0,200,0),3);

al_draw_filled_circle(145,50,107,al_map_rgb(1000,1000,1000));
al_draw_filled_circle(145,270,107,al_map_rgb(1000,1000,1000));
al_draw_filled_circle(365,50,107,al_map_rgb(1000,1000,1000));
al_draw_filled_circle(365,270,107,al_map_rgb(1000,1000,1000));

al_draw_filled_rectangle(10,0,150,400, al_map_rgb(1000,1000,1000));
al_draw_filled_rectangle(10,260,500,400, al_map_rgb(1000,1000,1000));
al_draw_filled_rectangle(360,0,500,400, al_map_rgb(1000,1000,1000));
al_draw_filled_rectangle(0,0,400,50, al_map_rgb(1000,1000,1000));
al_draw_line(150,70,170,70,al_map_rgb(0,0,0),2);
al_draw_line(170,50,170,70,al_map_rgb(0,0,0),2);
al_draw_filled_rectangle(158,58,162,62, al_map_rgb(0,0,0));
al_draw_line(150,240,170,240,al_map_rgb(0,0,0),2);
al_draw_line(170,240,170,260,al_map_rgb(0,0,0),2);
al_draw_filled_rectangle(158,248,162,252, al_map_rgb(0,0,0));

al_draw_line(335,50,335,70,al_map_rgb(0,0,0),2);
al_draw_line(335,70,360,70,al_map_rgb(0,0,0),2);
al_draw_filled_rectangle(347,58,351,62, al_map_rgb(0,0,0));

al_draw_line(335,235,360,235,al_map_rgb(0,0,0),2);
al_draw_line(335,235,335,260,al_map_rgb(0,0,0),2);
al_draw_filled_rectangle(347,245,351,250, al_map_rgb(0,0,0));
al_draw_text(fonte, al_map_rgb(0 , 0, 0),365,150,NULL,"6 cm");
       al_draw_text(fonte, al_map_rgb(0 , 0, 0),225,265,NULL,"6 cm");






al_draw_rectangle(150,50,360,260, al_map_rgb(0,200,0),3);





    al_flip_display();
    al_rest(3.0);

    al_destroy_font(fonte);
    al_destroy_display(Tela);
    return 0;

}




