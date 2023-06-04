#include "ZagSlov.hpp"
#include "ChooseDiff.hpp"
#include "RandSlov.hpp"

int x = 1920, y = 1080;
string alphabet = "abcdefghijklmnopqrstuvwxyz";
Font font;

int main(){
    int mistake = 0, r = 0, Difficulty;
    bool Arr[26];
    string line;
    if(!font.loadFromFile("src/resources/Arial.otf")) return EXIT_FAILURE;
    
    RenderWindow window(VideoMode(x, y), "SFML window");
    
    Texture texture;
    if(!texture.loadFromFile("src/resources/1.png")) return EXIT_FAILURE;
    Sprite sprite(texture);
    sprite.setPosition(x/2-400, 0);
    
    RectangleShape But1(Vector2f(300, 100));
    But1.setPosition(x/2-400, y-180);
    But1.setFillColor(Color::Green);
    Text fontBut1("Start Game", font, 35);
    fontBut1.setPosition(x/2-399+60, y-180+25);
    fontBut1.setFillColor(Color::Black);
    
    RectangleShape But2(Vector2f(300, 100));
    But2.setPosition(x/2+100, y-180);
    But2.setFillColor(Color::Red);
    Text fontBut2("Exit Game", font, 35);
    fontBut2.setPosition(x/2+100+60, y-180+25);
    fontBut2.setFillColor(Color::Black);
    
    while(window.isOpen()){
        Vector2i mousePoz = Mouse::getPosition(window);
        
        window.clear(Color::White);
        window.draw(sprite);
        window.draw(But1);
        window.draw(fontBut1);
        window.draw(But2);
        window.draw(fontBut2);
        window.display();
        
        if(Mouse::isButtonPressed(Mouse::Left)){
            if(But2.getGlobalBounds().contains(mousePoz.x, mousePoz.y)){
                window.close();
            }
            if(But1.getGlobalBounds().contains(mousePoz.x, mousePoz.y)){
                ChooseDiff(window, x, y, font, Difficulty);
                RandSlov(Arr, Difficulty, line);
                ZagSlov(window, line, mistake, r, Difficulty, y, x, Arr, alphabet, font);
            }
        }
    }
}