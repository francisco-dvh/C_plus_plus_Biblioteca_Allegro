

#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
int main (void)

{
    int Lar_T= 800;
    int Alt_T= 400;
    al_init();
    al_init_image_addon();
    al_init_font_addon();
    al_init_ttf_addon();
    ALLEGRO_DISPLAY *Tela =al_create_display(Lar_T, Alt_T);
    ALLEGRO_BITMAP * foto = al_load_bitmap("1.png");
    ALLEGRO_FONT *fonte = al_load_font("fonte/orbitron-black.ttf", 30,NULL);
    ALLEGRO_COLOR Cor_fundo = al_map_rgb(0, 0, 0);

    al_clear_to_color(Cor_fundo);

    float h = al_get_bitmap_height(foto);
    float w = al_get_bitmap_width(foto);

    al_draw_bitmap(foto, 10, 75, NULL);
    al_draw_bitmap(foto,10+w+10,75,NULL);
    al_draw_bitmap(foto,10+w+w+10+10,75,NULL);

    al_draw_text(fonte, al_map_rgb(0 , 0, 255), 10, 40,NULL,"imagens");
    al_draw_text(fonte, al_map_rgb(0,255,0),10,h+75+10,NULL, "foto 1");
    al_draw_text(fonte, al_map_rgb(0,255,255),10+w+10,h+75+10,NULL, "foto 2");
    al_draw_text(fonte, al_map_rgb(255,0,255),10+w+10+w+10,h+75+10,NULL,"foto 3");

    al_flip_display();
    al_rest(3.0);

    al_destroy_bitmap(foto);
    al_destroy_font(fonte);
    al_destroy_display(Tela);
    return 0;

}
