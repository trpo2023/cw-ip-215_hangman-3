#include <iostream>
#include <wchar.h>
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

int main(){
    setlocale (LC_ALL,"ru_RU.UTF-8");
    
    wchar_t alphabet[33] = {'а','б','в','г','е','ё','ж','з','и','й','к','л','м','н','о','п','р','с','т','у','ф','х','ц','ч','ш','щ','ъ','ы','ь','э','ю','я'};
    
    // Создание окна
    RenderWindow window(VideoMode(800, 1200), "SFML window");
    
    // Добавление шрифта
    Font font;
    if(!font.loadFromFile("C:/Windows/Fonts/Arial.ttf")) return EXIT_FAILURE;

    Texture texture;
    if (!texture.loadFromFile("../1.png")) return EXIT_FAILURE;
    Sprite sprite(texture);

    // Создание кнопки старта игры
    RectangleShape But1(Vector2f(250, 100));
    But1.setPosition(100, 1000);
    But1.setFillColor(Color::Blue);
    Text fontBut1("Start Game", font, 35);
    fontBut1.setPosition(135,1025);
    fontBut1.setFillColor(Color::Black);

    // Создание кнопки выхода
    RectangleShape But2(Vector2f(250, 100));
    But2.setPosition(450, 1000);
    But2.setFillColor(Color::Blue);
    Text fontBut2("Exit Game", font, 35);
    fontBut2.setPosition(485,1025);
    fontBut2.setFillColor(Color::Black);

    //Задержка окна
    while (window.isOpen())
    {

        Vector2i mousePoz = Mouse::getPosition(window);

        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }
        window.clear();
        window.draw(sprite);
        window.draw(But1);
        window.draw(fontBut1);
        window.draw(But2);
        window.draw(fontBut2);
        window.display();

        // Выход из программы при нажатии кнопки выхода
        if(Mouse::isButtonPressed(Mouse::Left))
            if (But2.getGlobalBounds().contains(mousePoz.x, mousePoz.y)){
                window.close();
            }

        // Переход к выбору сложности 
        if(Mouse::isButtonPressed(Mouse::Left))
            if (But1.getGlobalBounds().contains(mousePoz.x, mousePoz.y)){
                
            }
    }
}