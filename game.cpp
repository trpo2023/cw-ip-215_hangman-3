#include <iostream>
#include <wchar.h>
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

Font font;

void ChooseDiff(RenderWindow& window, int x, int y){
    while(1){
    	
        Vector2i mousePoz = Mouse::getPosition(window);
        
        window.clear();
        
        RectangleShape Zalivka(Vector2f(x, y));
    	Zalivka.setPosition(0, 0);
    	Zalivka.setFillColor(Color::White);
    	
        RectangleShape Diff1(Vector2f(300, 100));
        Diff1.setPosition(x/2-150, y/3-200);
        Diff1.setFillColor(Color::Blue);
        Text fontDiff1("Easy", font, 35);
        fontDiff1.setPosition(x/2-150+110, y/3-200+25);
        fontDiff1.setFillColor(Color::Black);
        
        RectangleShape Diff2(Vector2f(300, 100));
        Diff2.setPosition(x/2-150, y/3*2-200);
        Diff2.setFillColor(Color::Blue);
        Text fontDiff2("Medium", font, 35);
        fontDiff2.setPosition(x/2-150+85, y/3*2-200+25);
        fontDiff2.setFillColor(Color::Black);
        
        RectangleShape Diff3(Vector2f(300, 100));
        Diff3.setPosition(x/2-150, y-200);
        Diff3.setFillColor(Color::Blue);
        Text fontDiff3("Hard", font, 35);
        fontDiff3.setPosition(x/2-150+110, y-200+25);
        fontDiff3.setFillColor(Color::Black);
        
        window.draw(Zalivka);
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
    if(!font.loadFromFile("C:/Windows/Fonts/Arial.ttf")) return EXIT_FAILURE;
    
    setlocale (LC_ALL,"ru_RU.UTF-8");
    
    string alphabet = "?????????????????????????????????";
    
    int x = 1920, y = 1080;
    // ???????? ????
    RenderWindow window(VideoMode(x, y), "SFML window");
    
    RectangleShape Zalivka(Vector2f(x, y));
    Zalivka.setPosition(0, 0);
    Zalivka.setFillColor(Color::White);
    
    Texture texture;
    if (!texture.loadFromFile("../1.png")) return EXIT_FAILURE;
    Sprite sprite(texture);
    sprite.setPosition(x/2-400, 0);
    
    RectangleShape But1(Vector2f(300, 100));
    But1.setPosition(x/2-400, y-180);
    But1.setFillColor(Color::Blue);
    Text fontBut1("Start Game", font, 35);
    fontBut1.setPosition(x/2-400+60, y-180+25);
    fontBut1.setFillColor(Color::Black);
    
    RectangleShape But2(Vector2f(300, 100));
    But2.setPosition(x/2+100, y-180);
    But2.setFillColor(Color::Blue);
    Text fontBut2("Exit Game", font, 35);
    fontBut2.setPosition(x/2+100+60, y-180+25);
    fontBut2.setFillColor(Color::Black);
    
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
        window.draw(Zalivka);
        window.draw(sprite);
        window.draw(But1);
        window.draw(fontBut1);
        window.draw(But2);
        window.draw(fontBut2);
        window.display();
        
        if(Mouse::isButtonPressed(Mouse::Left)){
            if (But2.getGlobalBounds().contains(mousePoz.x, mousePoz.y)){
                window.close();
            }
            if (But1.getGlobalBounds().contains(mousePoz.x, mousePoz.y)){
                ChooseDiff(window, x, y);
            }
        }    
    }
}
