#include <iostream>
#include <wchar.h>
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

Font font;

// Функция для выбора сложности
void ChooseDiff(RenderWindow& window){
    while(1){

        Vector2i mousePoz = Mouse::getPosition(window);

        window.clear();

        RectangleShape Diff1(Vector2f(250, 100));
        Diff1.setPosition(275, 225);
        Diff1.setFillColor(Color::Blue);
        Text fontDiff1("Легкая", font, 35);
        fontDiff1.setPosition(275, 225);
        fontDiff1.setFillColor(Color::Black);

        RectangleShape Diff2(Vector2f(250, 100));
        Diff2.setPosition(275, 550);
        Diff2.setFillColor(Color::Blue);
        Text fontDiff2("Средняя", font, 35);
        fontDiff2.setPosition(275, 550);
        fontDiff2.setFillColor(Color::Black);

        RectangleShape Diff3(Vector2f(250, 100));
        Diff3.setPosition(275, 875);
        Diff3.setFillColor(Color::Blue);
        Text fontDiff3("Сложная", font, 35);
        fontDiff3.setPosition(275, 875);
        fontDiff3.setFillColor(Color::Black);

        window.draw(Diff1);
        window.draw(fontDiff1);
        window.draw(Diff2);
        window.draw(fontDiff2);
        window.draw(Diff3);
        window.draw(fontDiff3);
        window.display();

        if(Mouse::isButtonPressed(Mouse::Left)){
            if (Diff1.getGlobalBounds().contains(mousePoz.x, mousePoz.y)){
                break;
            }
            
            if (Diff2.getGlobalBounds().contains(mousePoz.x, mousePoz.y)){
                break;
            }
            
            if (Diff3.getGlobalBounds().contains(mousePoz.x, mousePoz.y)){
                break;
            }
        }
    }
}

int main(){
    // Добавление шрифта
    if(!font.loadFromFile("C:/Windows/Fonts/Arial.ttf")) return EXIT_FAILURE;

    setlocale (LC_ALL,"Russian");
    
    string alphabet = "абвгдеёжзийклмнопрстуфхцчшщъыьэюя";
    
    // Создание окна
    RenderWindow window(VideoMode(800, 1200), "SFML window");

    Texture texture;
    if (!texture.loadFromFile("../1.png")) return EXIT_FAILURE;
    Sprite sprite(texture);

    // Создание кнопки старта игры
    RectangleShape But1(Vector2f(250, 100));
    But1.setPosition(100, 1000);
    But1.setFillColor(Color::Blue);
    Text fontBut1("Начать игру", font, 35);
    fontBut1.setPosition(135,1025);
    fontBut1.setFillColor(Color::Black);

    // Создание кнопки выхода
    RectangleShape But2(Vector2f(250, 100));
    But2.setPosition(450, 1000);
    But2.setFillColor(Color::Blue);
    Text fontBut2("Выйти из игры", font, 35);
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
        if(Mouse::isButtonPressed(Mouse::Left)){
            if (But2.getGlobalBounds().contains(mousePoz.x, mousePoz.y)){
                window.close();
            }
            if (But1.getGlobalBounds().contains(mousePoz.x, mousePoz.y)){
                ChooseDiff(window);
            }
        }    
    }
}