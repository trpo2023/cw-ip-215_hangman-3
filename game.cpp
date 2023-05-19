#include <iostream>
#include <SFML/Graphics.hpp>
#include <stdlib.h>
#include <fstream>

using namespace std;
using namespace sf;

int r = 0, x = 1920, y = 1080, mistake = 0, Difficulty;
string alphabet = "qwertyuiopasdfghjklzxcvbnm";
bool Arr[26];
Font font;

void ZagSlov(RenderWindow&, string);

int main();

void youlose(RenderWindow& window){
	while(window.isOpen()){
		Event event;
		while(window.pollEvent(event)){
            if(event.type == Event::Closed)
                window.close();
        }
        Texture texture;
        texture.loadFromFile("9.png");
        Sprite sprite(texture);
		sprite.setPosition(x/2-400, 0);
		Text message1("You lose", font, 50);
		message1.setFillColor(Color::Red);
		message1.setPosition(x/2-125, y/2);
		Text message2("Press 'Enter' to return to the start menu", font, 50);
		message2.setFillColor(Color::Blue);
		message2.setPosition(x/2-430, y/2+100);
		
		window.clear(Color::White);
		window.draw(sprite);
		window.draw(message1);
		window.draw(message2);
		window.display();
		if(Keyboard::isKeyPressed(Keyboard::Return)){
			window.close();
			main();
		}
	}
}

void youwin(RenderWindow& window, string line){
	while(window.isOpen()){
		Event event;
		while(window.pollEvent(event)){
            if(event.type == Event::Closed)
                window.close();
        }
		Text message1("You win!", font, 50);
		message1.setFillColor(Color::Green);
		message1.setPosition(x/2-125, y/2-100);
		Text message2(line, font, 50);
		message2.setFillColor(Color::Green);
		message2.setPosition(x/2-125, y/2);
		Text message3("Press 'Enter' to return to the start menu", font, 50);
		message3.setFillColor(Color::Blue);
		message3.setPosition(x/2-430, y/2+100);
		
		window.clear(Color::White);
		window.draw(message1);
		window.draw(message2);
		window.draw(message3);
		window.display();
		if(Keyboard::isKeyPressed(Keyboard::Return)){
			window.close();
			main();
		}
	}
}

void checkletter(char c, string line, RenderWindow& window){
	bool Flag = false;
	for(int i = 0; i < sizeof(line)-1; i++){
		if(line[i] == c){
			Flag = true;
			r++;
		}
	}
	if(Flag == false){
		mistake++;
	}
	if(mistake == 8){
		youlose(window);
	}
	if(r == sizeof(line)-1){
		youwin(window, line);
	}
	if((r < sizeof(line)-1) && (mistake < 8)){
		ZagSlov(window, line);
	}
}

void ZagSlov(RenderWindow& window, string line){
	while(window.isOpen()){
		Event event;
		while(window.pollEvent(event)){
            if(event.type == Event::Closed)
                window.close();
        }
		Texture texture;
		
		if(mistake == 0){
			texture.loadFromFile("1.png");
		}
		if(mistake == 1){
			texture.loadFromFile("2.png");
		}
		if(mistake == 2){
			texture.loadFromFile("3.png");
		}
		if(mistake == 3){
			texture.loadFromFile("4.png");
		}
		if(mistake == 4){
			texture.loadFromFile("5.png");
		}
		if(mistake == 5){
			texture.loadFromFile("6.png");
		}
		if(mistake == 6){
			texture.loadFromFile("7.png");
		}
		if(mistake == 7){
			texture.loadFromFile("8.png");
		}
		Sprite sprite(texture);
		sprite.setPosition(x/2-400, 0);
		
		window.clear(Color::White);
		window.draw(sprite);
		
		if(Difficulty == 0){
			RectangleShape ZagBuk1(Vector2f(50, 50));
			RectangleShape ZagBuk2(Vector2f(50, 50));
			RectangleShape ZagBuk3(Vector2f(50, 50));
			RectangleShape ZagBuk4(Vector2f(50, 50));
			RectangleShape ZagBuk5(Vector2f(50, 50));
			RectangleShape ZagBuk6(Vector2f(50, 50));
			RectangleShape ZagBuk7(Vector2f(50, 50));
			
			int t = x/2-220;
			ZagBuk1.setPosition(t, y/2+50);
			t+=60;
			ZagBuk2.setPosition(t, y/2+50);
			t+=60;
			ZagBuk3.setPosition(t, y/2+50);
			t+=60;
			ZagBuk4.setPosition(t, y/2+50);
			t+=60;
			ZagBuk5.setPosition(t, y/2+50);
			t+=60;
			ZagBuk6.setPosition(t, y/2+50);
			t+=60;
			ZagBuk7.setPosition(t, y/2+50);
			t+=60;
			
			ZagBuk1.setFillColor(Color::Black);
			ZagBuk2.setFillColor(Color::Black);
			ZagBuk3.setFillColor(Color::Black);
			ZagBuk4.setFillColor(Color::Black);
			ZagBuk5.setFillColor(Color::Black);
			ZagBuk6.setFillColor(Color::Black);
			ZagBuk7.setFillColor(Color::Black);
			
			window.draw(ZagBuk1);
			window.draw(ZagBuk2);
			window.draw(ZagBuk3);
			window.draw(ZagBuk4);
			window.draw(ZagBuk5);
			window.draw(ZagBuk6);
			window.draw(ZagBuk7);
		}
		if(Difficulty == 1){
			RectangleShape ZagBuk1(Vector2f(50, 50));
			RectangleShape ZagBuk2(Vector2f(50, 50));
			RectangleShape ZagBuk3(Vector2f(50, 50));
			RectangleShape ZagBuk4(Vector2f(50, 50));
			RectangleShape ZagBuk5(Vector2f(50, 50));
			RectangleShape ZagBuk6(Vector2f(50, 50));
	
			int t = x/2-220;
			ZagBuk1.setPosition(t, y/2+50);
			t+=60;
			ZagBuk2.setPosition(t, y/2+50);
			t+=60;
			ZagBuk3.setPosition(t, y/2+50);
			t+=60;
			ZagBuk4.setPosition(t, y/2+50);
			t+=60;
			ZagBuk5.setPosition(t, y/2+50);
			t+=60;
			ZagBuk6.setPosition(t, y/2+50);
			t+=60;
	
			ZagBuk1.setFillColor(Color::Black);
			ZagBuk2.setFillColor(Color::Black);
			ZagBuk3.setFillColor(Color::Black);
			ZagBuk4.setFillColor(Color::Black);
			ZagBuk5.setFillColor(Color::Black);
			ZagBuk6.setFillColor(Color::Black);

			window.draw(ZagBuk1);
			window.draw(ZagBuk2);
			window.draw(ZagBuk3);
			window.draw(ZagBuk4);
			window.draw(ZagBuk5);
			window.draw(ZagBuk6);
		}
		if(Difficulty == 2){
			RectangleShape ZagBuk1(Vector2f(50, 50));
			RectangleShape ZagBuk2(Vector2f(50, 50));
			RectangleShape ZagBuk3(Vector2f(50, 50));
			RectangleShape ZagBuk4(Vector2f(50, 50));
			RectangleShape ZagBuk5(Vector2f(50, 50));
	
			int t = x/2-220;
			ZagBuk1.setPosition(t, y/2+50);
			t+=60;
			ZagBuk2.setPosition(t, y/2+50);
			t+=60;
			ZagBuk3.setPosition(t, y/2+50);
			t+=60;
			ZagBuk4.setPosition(t, y/2+50);
			t+=60;
			ZagBuk5.setPosition(t, y/2+50);
			t+=60;
	
			ZagBuk1.setFillColor(Color::Black);
			ZagBuk2.setFillColor(Color::Black);
			ZagBuk3.setFillColor(Color::Black);
			ZagBuk4.setFillColor(Color::Black);
			ZagBuk5.setFillColor(Color::Black);

			window.draw(ZagBuk1);
			window.draw(ZagBuk2);
			window.draw(ZagBuk3);
			window.draw(ZagBuk4);
			window.draw(ZagBuk5);
		}
		for(int i = 0; i < 26; i++){
			for(int j = 0; j < sizeof(line)-1; j++){
				if((Arr[i] == true) && (line[j] == alphabet[i])){
					Text letter(alphabet[i], font, 35);
					letter.setPosition(x/2-210+60*j, y/2+50);
					letter.setFillColor(Color::Red);
					window.draw(letter);
				}
			}
		}
		window.display();
		if((Keyboard::isKeyPressed(Keyboard::Q)) && (Arr[0] == false)){
			Arr[0] = true;
			checkletter('q', line, window);
		}
		if(Keyboard::isKeyPressed(Keyboard::W) && (Arr[1] == false)){
			Arr[1] = true;
			checkletter('w', line, window);
		}
		if(Keyboard::isKeyPressed(Keyboard::E) && (Arr[2] == false)){
			Arr[2] = true;
			checkletter('e', line, window);
		}
		if(Keyboard::isKeyPressed(Keyboard::R) && (Arr[3] == false)){
			Arr[3] = true;
			checkletter('r', line, window);
		}
		if(Keyboard::isKeyPressed(Keyboard::T) && (Arr[4] == false)){
			Arr[4] = true;
			checkletter('t', line, window);
		}
		if(Keyboard::isKeyPressed(Keyboard::Y) && (Arr[5] == false)){
			Arr[5] = true;
			checkletter('y', line, window);
		}
		if(Keyboard::isKeyPressed(Keyboard::U) && (Arr[6] == false)){
			Arr[6] = true;
			checkletter('u', line, window);
		}
		if(Keyboard::isKeyPressed(Keyboard::I) && (Arr[7] == false)){
			Arr[7] = true;
			checkletter('i', line, window);
		}
		if(Keyboard::isKeyPressed(Keyboard::O) && (Arr[8] == false)){
			Arr[8] = true;
			checkletter('o', line, window);
		}
		if(Keyboard::isKeyPressed(Keyboard::P) && (Arr[9] == false)){
			Arr[9] = true;
			checkletter('p', line, window);
		}
		if(Keyboard::isKeyPressed(Keyboard::A) && (Arr[10] == false)){
			Arr[10] = true;
			checkletter('a', line, window);
		}
		if(Keyboard::isKeyPressed(Keyboard::S) && (Arr[11] == false)){
			Arr[11] = true;
			checkletter('s', line, window);
		}
		if(Keyboard::isKeyPressed(Keyboard::D) && (Arr[12] == false)){
			Arr[12] = true;
			checkletter('d', line, window);
		}
		if(Keyboard::isKeyPressed(Keyboard::F) && (Arr[13] == false)){
			Arr[13] = true;
			checkletter('f', line, window);
		}
		if(Keyboard::isKeyPressed(Keyboard::G) && (Arr[14] == false)){
			Arr[14] = true;
			checkletter('g', line, window);
		}
		if(Keyboard::isKeyPressed(Keyboard::H) && (Arr[15] == false)){
			Arr[15] = true;
			checkletter('h', line, window);
		}
		if(Keyboard::isKeyPressed(Keyboard::J) && (Arr[16] == false)){
			Arr[16] = true;
			checkletter('j', line, window);
		}
		if(Keyboard::isKeyPressed(Keyboard::K) && (Arr[17] == false)){
			Arr[17] = true;
			checkletter('k', line, window);
		}
		if(Keyboard::isKeyPressed(Keyboard::L) && (Arr[18] == false)){
			Arr[18] = true;
			checkletter('l', line, window);
		}
		if(Keyboard::isKeyPressed(Keyboard::Z) && (Arr[19] == false)){
			Arr[19] = true;
			checkletter('z', line, window);
		}
		if(Keyboard::isKeyPressed(Keyboard::X) && (Arr[20] == false)){
			Arr[20] = true;
			checkletter('x', line, window);
		}
		if(Keyboard::isKeyPressed(Keyboard::C) && (Arr[21] == false)){
			Arr[21] = true;
			checkletter('c', line, window);
		}
		if(Keyboard::isKeyPressed(Keyboard::V) && (Arr[22] == false)){
			Arr[22] = true;
			checkletter('v', line, window);
		}
		if(Keyboard::isKeyPressed(Keyboard::B) && (Arr[23] == false)){
			Arr[23] = true;
			checkletter('b', line, window);
		}
		if(Keyboard::isKeyPressed(Keyboard::N) && (Arr[24] == false)){
			Arr[24] = true;
			checkletter('n', line, window);
		}
		if(Keyboard::isKeyPressed(Keyboard::M) && (Arr[25] == false)){
			Arr[25] = true;
			checkletter('m', line, window);
		}
	}
}

void RandSlov(RenderWindow& window){
	int a = rand()%100+1;
	for(int i = 0; i < 26; i++){
		Arr[i] = false;
	}
	string line;
	if(Difficulty == 0){
		ifstream d1("diff1.txt");
		if(d1.is_open()){
			for(int i = 0; i < a; i++){
				getline(d1, line);
			}
    	}
		ZagSlov(window, line);
	}
	if(Difficulty == 1){
		ifstream d2("diff2.txt");
		if(d2.is_open()){
			for(int i = 0; i < a; i++){
				getline(d2, line);
			}
    	}
    	ZagSlov(window, line);
	}
	if(Difficulty == 2){
		ifstream d3("diff3.txt");
		if(d3.is_open()){
			for(int i = 0; i < a; i++){
				getline(d3, line);
			}
    	}
    	ZagSlov(window, line);
	}
}

void ChooseDiff(RenderWindow& window){
	while(window.isOpen()){
        Vector2i mousePoz = Mouse::getPosition(window);
        Event event;
		while(window.pollEvent(event)){
            if(event.type == Event::Closed)
                window.close();
        }

		RectangleShape Diff1(Vector2f(300, 100));
		Diff1.setPosition(x/2-150, y/3-300);
		Diff1.setFillColor(Color::Blue);
		Text fontDiff1("Easy", font, 35);
		fontDiff1.setPosition(x/2-150+110, y/3-300+25);
		fontDiff1.setFillColor(Color::Black);

		RectangleShape Diff2(Vector2f(300, 100));
		Diff2.setPosition(x/2-150, y/3*2-300);
		Diff2.setFillColor(Color::Blue);
		Text fontDiff2("Medium", font, 35);
		fontDiff2.setPosition(x/2-150+85, y/3*2-300+25);
		fontDiff2.setFillColor(Color::Black);

		RectangleShape Diff3(Vector2f(300, 100));
		Diff3.setPosition(x/2-150, y-300);
		Diff3.setFillColor(Color::Blue);
		Text fontDiff3("Hard", font, 35);
		fontDiff3.setPosition(x/2-150+110, y-300+25);
		fontDiff3.setFillColor(Color::Black);
		
		window.clear(Color::White);
		window.draw(Diff1);
		window.draw(fontDiff1);
		window.draw(Diff2);
		window.draw(fontDiff2);
		window.draw(Diff3);
		window.draw(fontDiff3);
		window.display();

        if(Mouse::isButtonPressed(Mouse::Left)){
            if(Diff1.getGlobalBounds().contains(mousePoz.x, mousePoz.y)){
		    	Difficulty = 0;
		    	RandSlov(window);
            }
            
            if(Diff2.getGlobalBounds().contains(mousePoz.x, mousePoz.y)){
            	Difficulty = 1;
            	RandSlov(window);
            }
            
            if(Diff3.getGlobalBounds().contains(mousePoz.x, mousePoz.y)){
            	Difficulty = 2;
            	RandSlov(window);
            }
        }
    }
}

int main(){
    if(!font.loadFromFile("C:/Windows/Fonts/Arial.ttf")) return EXIT_FAILURE;
    
    RenderWindow window(VideoMode(x, y), "SFML window");
    
    r = 0, mistake = 0;
    
    Texture texture;
    if(!texture.loadFromFile("1.png")) return EXIT_FAILURE;
    Sprite sprite(texture);
    sprite.setPosition(x/2-400, 0);
    
    RectangleShape But1(Vector2f(300, 100));
    But1.setPosition(x/2-400, y-180);
    But1.setFillColor(Color::Green);
    Text fontBut1("Start Game", font, 35);
    fontBut1.setPosition(x/2-400+60, y-180+25);
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
                ChooseDiff(window);
            }
        }    
    }
}
