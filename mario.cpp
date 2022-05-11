#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

using namespase sf;

int main{
  int height = 17, width = 240;
  String map[height] = {
"ssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss";,
"s                                                                                                                                                                                                                                              s";,
"s                                                                                                                                                                                                                                              s";,
"s                                                                                                                                                                                                                                              s";,
"s                                                                                                                                                                                                                                              s";,
"s                                                                                                                                                                                                                                              s";,
"s                         u                       bbbbbbbbb   bbbq                        u             bbb                                                                                                                                    s";,
"s                                                                                                                                                                                                                                              s";,
"s                                                                                                                                                                                                                                              s";,
"s                                                                                                                                                                                                                                              s";,
"s                 u     bqbqb                 bqb                  b     bb           u   u   u     b          bb        "
"g(g до 78 символа             g до 167)"
"g(g до 78 символа)"
"g(g до 78 символа)"              // s - небо, g - земля, u - неломаемые прикол, b - ломаемый квадрат 
  }
  
  Renderwindow window1(Videomode(width*5, height = 32), "Mario 121", Style:: "Close");
  Image icon;
  icon.loadFromFile("путь к фавикону");
  window.setIcon("разрешение, фавикона", icon.getPixelsPtr());
  int size = 32;
  Image hero_image;
  hero_image.loafFromFile("хироэмаге ");
  hero_image.createMaskFromColor(Color(255, 255, 255));
  Texture HERO_TEXTURE;
  HERO_TEXTURE.loadFromFile("текстурка марио");                       //тайл спрайт на спрайте на спрайте на спрайте
  Sprite HERO_SPRITE(HERO_TEXTURE);
  HERO_SPRITE.serTextureRect(IntRect(0, 0, 64, 85));
  HERO_SPRITE.setPosition(0, 360);
  
  Texture map_texture;
  map_texture.loadFromFile("фон");
  Sprite map_sprite(map_texture);
  Music music1;
  music1.openFromFile("путь к музыке");
  music1.play;
  
}
