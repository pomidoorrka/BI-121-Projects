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
    int main(){
        srand(time(0));
        Texture Kubik;
        Kibik.loadFromFile("/*сюды фоточку загружать(обсалютной ссылкой)*/");
        Sprite sprite_figuri(Kubik);
 }
