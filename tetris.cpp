#include <SFML/Graphics.hpp>
#include <ctime>

using namespace sf;
    int height = 20, width = 10;
    int* pole = new int[width] new int[height] = {0};  /*динамическое выделение памяти т.к. в cpp всегда массив - конст*/
    const int razmer_kubika = 34;
    int* kubiki[7][4] = {
    1,3,5,7,
    2,4,5,7,
    3,5,4,6,
    3,5,4,7,
    2,3,5,7,
    3,5,6,7,
    2,3,4,5,};
    struct koordinati_kubika{
    int x,y;
    }tek[4], pred[4];
    bool test(){
        for (int i = 0; i < 4; i+=){
            if(tek[i].x < 0 | tek[i].x > width | tek [i].y > height)
                return 0; // 0 - всё работает, 1 - ты дебил
            else
                return 1;
        }
    }
    int main(){
        srand(time(0));
        RenderWindow window1(VideoMode(wight*size,height*size) ,"JOCKIETETRIS");
        Texture Kubik;
        Kibik.loadFromFile("/*сюды фоточку загружать(обсалютной ссылкой)*/");
        Sprite sprite_figuri(Kubik);
        bool rotate = false;
        int stepX = 0;
        float delay = 0.5;
        while (window1,isOpen()){
            Event doing;
                while(window1.pollEvent(doing)){
                    if (doing.type==Event::KeyPressed)
                        if (doing.key.code==Keyboard::Up)
                            rotate=true;
                        else if(doing.type==Event::KeyPressed)
                            if (doing.key.code==Keyboard::Right)
                                stepX = 1;
                            else (doing.type==Event::KeyPressed)
                        if (doing.key.code==Keyboard::Left)
                                stepX = -1;
                        if (doing.type == Event::Closed)
                            window1.close();
     }
                        if (Keyboard::isKeyPressed (Keyboard::Down) )
                            delay = delay/2;
    
                        for (int i = 0; i < 4; i+=){
                        pred[i]=tek[i];
                        tek[i].x += stepX;
                        }
                        if (test () == true){
                            int i = 0; i < 4; i+=)
                                tek[i] = pred[i];
                        }  
            //задали первую фигуру
            if(tek[0].x==0){
            int n = rand() % 7;
                for (int i = 0; i < 4; i+=1){
                    tek[i].x = kubiki[n][i] % 2;
                    tek[i].y = kubiki[n][i] / 2;
                }
            }
            window1.clear(Color::White);
            for(int i = 0; i < 4; i+=1){
            sprite_figuri.setTextureRect(intrect(0, size, size, size));
            sprite_figuri.setPosition(tek[i].x*size, tek[i].y*size);
            window1.draw(sprite_figuri);
            }
            window1.display();
                }
    }
