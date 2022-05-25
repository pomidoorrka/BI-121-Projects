#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

using namespase sf;

class Fazer{
  public:
    float x, y, stepx, stepy, speed, w, h;
    int cuda;
    Image image;
    Texture texture;
    Sprite sprite;
    string name;
    Fazer (string N, float W, float H, float X, float Y){
      stepX = 0;
      stepY = 0;
      speed = 0;
      cuda = 0;
      name = n;
      w = W;
      h = H;
      x = X;
      y = Y;
      image.loadfromfile ("Указываем папку с картинками/" + name);
      image.createMaskFromColor(Color(255, 255, 255));
      texture.loadFromImage(image);
      sprite.setTexture(texture);
      sprite.setTextureRect(IntRect(0, 0, w, h));
    }
  void moveT(float time){
    switch (move){
      case 0:
        stepX = speed;
        stepY = 0;
        break;
      case 1:
        stepX = -speed;
        stepY = 0;
        break;
      case 2:
        stepX = 0;
        stepY = -speed;
        break;
    }
    x += stepX * time;
    y += stepY * time;
    speed = 0;
    sprite.setPosition(x, y+365);
  }
};

int main{
  Fazer m("Текстурка марио", 64, 85, 0, 0);
  m.sprite.setScale(0.8, 0.5);  
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
  const int size = 32;
  /*Image hero_image;
  hero_image.loafFromFile("хироэмаге ");
  hero_image.createMaskFromColor(Color(255, 255, 255));
  Texture HERO_TEXTURE;
  HERO_TEXTURE.loadFromFile(hero_image");                       //тайл спрайт на спрайте на спрайте на спрайте
  Sprite HERO_SPRITE(HERO_TEXTURE);
  HERO_SPRITE.serTextureRect(IntRect(0, 0, 64, 85));
  HERO_SPRITE.setPosition(0, 360);*/
  
  Texture map_texture;
  map_texture.loadFromFile("фон");
  Sprite map_sprite(map_texture);
  Music music1;
  music1.openFromFile("путь к музыке");
  music1.play;
  Clock clock;
  float nowFrame = 0;                          
  while (window1.isOpen()){
    float time = clock.getElapsedTime().asMicroseconds();
    clock.restart();
    time = time / 1000;
    Event event;
    while(window1.pollEvent(event)){
      if (event.type == Event::Closed)
        window1.close();
    }
    /*if (Keyboard::isKeyPressed(Keyboard::Right)){
      HERO_SPRITE.setScale(1, 1);
      nowFrame += 0.01 * time;               // nowFrame = nowFrame + (0,001 * time)
      if(nowFrame > 4)
        nowFrame -= 4;
      HERO_SPRITE.setTextureRect(intrect(80*int(nowFrame), 0, 90, 85));
      HERO_SPRITE.move(time * 0.1,0);
    }
    if (Keyboard::isKeyPressed(Keyboard::Left)){
      HERO_SPRITE.setScale(-1, 1);
      nowFrame += 0.01 * time;               // nowFrame = nowFrame + (0,001 * time)
      if(nowFrame > 4)
        nowFrame -= 4;
      HERO_SPRITE.setTextureRect(intrect(80*int(nowFrame), 0, 90, 85));
      HERO_SPRITE.move(time * -0.1,0);
    }
    if (Keyboard::isKeyPressed(Keyboard::Up)){
      HERO_SPRITE.move(0, time * -0.1);
      HERO_SPRITE.setTextureRext(intrect(418, 0, 85, 85));
    }*/
    if(Keyboard::isKeyPressed(Keyboard::Right)){
    m.sprite.setScale(0.8, 0.5);  
    m.move = 0;
    m.speed = 0,2;
    nowFrame += 0.01 * time;               // nowFrame = nowFrame + (0,001 * time)
      if(nowFrame > 4)
        nowFrame -= 4;
      m.sptire.setTextureRect(IntRect(80 * int (nofFrame), 0, 80, 85));
    }
    if(Keyboard::isKeyPressed(Keyboard::Left)){
    m.sprite.setScale (-1,1);
    m.move = 1;
    m.speed = 0,2;
    nowFrame += 0.01 * time;               // nowFrame = nowFrame + (0,001 * time)
      if(nowFrame > 4)
        nowFrame -= 4;
      m.sptire.setTextureRect(IntRect(80 * int (nofFrame), 0, 80, 85));
    }
    if(Keyboard::isKeyPressed(Keyboard::Up)){
    m.move = 2;
    m.speed = 0,2;
    nowFrame += 0.01 * time;               // nowFrame = nowFrame + (0,001 * time)
      if(nowFrame > 4)
        nowFrame -= 4;
      m.sptire.setTextureRect(IntRect(418, 0, 80, 85));             ///// Все нав фрейм на фрейм марио
    }
    m.moveT(time);
    window1.clear();
    for (int i = 0; i < height ;i++)
      for(int j = 0; j < width; j++){
        if (map [i][j] == 's' or map [i][j] == ' '
            map_sprite.setTextureRect(intRect(size * 4, 0, size, size));
        if (map [i][j] == 'b' or map [i][j] == ' '
            map_sprite.setTextureRect(intRect(size*2, 0, size, size));
        if (map [i][j] == 'g' or map [i][j] == ' '
            map_sprite.setTextureRect(intRect(0, 0, size, size));
        if (map [i][j] == 'q' or map [i][j] == ' '
            map_sprite.setTextureRect(intRect(size*3, 0, size, size));
        if (map [i][j] == 'u' or map [i][j] == ' '
            map_sprite.setTextureRect(intRect(size, 0, size, size));
        map_sprite.setPosition(i * size, j * size);                       ////////////
        window1.draw(map_sprite);
      }
    window1.draw(m.sprite);
    window1.display();
  }
}
