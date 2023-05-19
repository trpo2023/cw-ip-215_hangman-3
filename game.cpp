#include <iostream>
#include <SFML/Graphics.hpp>
#include <stdlib.h>
#include <fstream>

using namespace std;
using namespace sf;

int r = 0, x = 1920, y = 1080, mistake = 0;
int Difficulty;
Font font;

void ZagSlov(RenderWindow&, string);

void checkletter(char c, string line, RenderWindow& window){
	if(Difficulty == 0){
		int Index[7];
		bool Flag = false;
		for(int i = 0; i < 7; i++){
			if(line[i] == c){
				Flag = true;
				Index[r] = i;
				r++;
			}
		}
		if(Flag == false){
			mistake++;
		}
		if(mistake == 8){
			//you lose
		}
		if(r == 7){
			//you win
		}
		if(r != 7 && mistake != 8){
			ZagSlov(window, line);
		}
	}
}

void ZagSlov(RenderWindow& window, string line){
	while(window.isOpen()){
		Vector2i mousePoz = Mouse::getPosition(window);
		RectangleShape keycap1(Vector2f(50, 50));
		RectangleShape keycap2(Vector2f(50, 50));
		RectangleShape keycap3(Vector2f(50, 50));
		RectangleShape keycap4(Vector2f(50, 50));
		RectangleShape keycap5(Vector2f(50, 50));
		RectangleShape keycap6(Vector2f(50, 50));
		RectangleShape keycap7(Vector2f(50, 50));
		RectangleShape keycap8(Vector2f(50, 50));	
		RectangleShape keycap9(Vector2f(50, 50));
		RectangleShape keycap10(Vector2f(50, 50));
		RectangleShape keycap11(Vector2f(50, 50));
		RectangleShape keycap12(Vector2f(50, 50));
		RectangleShape keycap13(Vector2f(50, 50));
		RectangleShape keycap14(Vector2f(50, 50));
		RectangleShape keycap15(Vector2f(50, 50));
		RectangleShape keycap16(Vector2f(50, 50));
		RectangleShape keycap17(Vector2f(50, 50));
		RectangleShape keycap18(Vector2f(50, 50));
		RectangleShape keycap19(Vector2f(50, 50));
		RectangleShape keycap20(Vector2f(50, 50));
		RectangleShape keycap21(Vector2f(50, 50));
		RectangleShape keycap22(Vector2f(50, 50));
		RectangleShape keycap23(Vector2f(50, 50));
		RectangleShape keycap24(Vector2f(50, 50));
		RectangleShape keycap25(Vector2f(50, 50));
		RectangleShape keycap26(Vector2f(50, 50));
		
		int t = x/2-400;
		keycap1.setPosition(t, y/2+200+50);
		t+=55;
		keycap2.setPosition(t, y/2+200+50);
		t+=55;
		keycap3.setPosition(t, y/2+200+50);
		t+=55;
		keycap4.setPosition(t, y/2+200+50);
		t+=55;
		keycap5.setPosition(t, y/2+200+50);
		t+=55;
		keycap6.setPosition(t, y/2+200+50);
		t+=55;
		keycap7.setPosition(t, y/2+200+50);
		t+=55;
		keycap8.setPosition(t, y/2+200+50);
		t+=55;
		keycap9.setPosition(t, y/2+200+50);
		t+=55;
		keycap10.setPosition(t, y/2+200+50);
		t+=55;
		keycap11.setPosition(t, y/2+200+50);
		t+=55;
		keycap12.setPosition(t, y/2+200+50);
		t+=55;
		
		t = x/2-380;
		keycap13.setPosition(t, y/2+255+50);
		t+=55;
		keycap14.setPosition(t, y/2+255+50);
		t+=55;
		keycap15.setPosition(t, y/2+255+50);
		t+=55;
		keycap16.setPosition(t, y/2+255+50);
		t+=55;
		keycap17.setPosition(t, y/2+255+50);
		t+=55;
		keycap18.setPosition(t, y/2+255+50);
		t+=55;
		keycap19.setPosition(t, y/2+255+50);
		t+=55;
		keycap20.setPosition(t, y/2+255+50);
		t+=55;
		keycap21.setPosition(t, y/2+255+50);
		t+=55;
		keycap22.setPosition(t, y/2+255+50);
		t+=55;
		keycap23.setPosition(t, y/2+255+50);
		t+=55;
		
		t = x/2-350;
		keycap24.setPosition(t, y/2+310+50);
		t+=55;
		keycap25.setPosition(t, y/2+310+50);
		t+=55;
		keycap26.setPosition(t, y/2+310+50);
		t+=55;
		
		keycap1.setFillColor(Color::Black);
		keycap2.setFillColor(Color::Black);
		keycap3.setFillColor(Color::Black);
		keycap4.setFillColor(Color::Black);
		keycap5.setFillColor(Color::Black);
		keycap6.setFillColor(Color::Black);
		keycap7.setFillColor(Color::Black);
		keycap8.setFillColor(Color::Black);
		keycap9.setFillColor(Color::Black);
		keycap10.setFillColor(Color::Black);
		keycap11.setFillColor(Color::Black);
		keycap12.setFillColor(Color::Black);
		keycap13.setFillColor(Color::Black);
		keycap14.setFillColor(Color::Black);
		keycap15.setFillColor(Color::Black);
		keycap16.setFillColor(Color::Black);
		keycap17.setFillColor(Color::Black);
		keycap18.setFillColor(Color::Black);
		keycap19.setFillColor(Color::Black);
		keycap20.setFillColor(Color::Black);
		keycap21.setFillColor(Color::Black);
		keycap22.setFillColor(Color::Black);
		keycap23.setFillColor(Color::Black);
		keycap24.setFillColor(Color::Black);
		keycap25.setFillColor(Color::Black);
		keycap26.setFillColor(Color::Black);
		
		Text fontkeycap1("q", font, 35);
		Text fontkeycap2("w", font, 35);
		Text fontkeycap3("e", font, 35);
		Text fontkeycap4("r", font, 35);
		Text fontkeycap5("t", font, 35);
		Text fontkeycap6("y", font, 35);
		Text fontkeycap7("u", font, 35);
		Text fontkeycap8("i", font, 35);
		Text fontkeycap9("o", font, 35);
		Text fontkeycap10("p", font, 35);
		Text fontkeycap11("v", font, 35);
		Text fontkeycap12("b", font, 35);
		Text fontkeycap13("a", font, 35);
		Text fontkeycap14("s", font, 35);
		Text fontkeycap15("d", font, 35);
		Text fontkeycap16("f", font, 35);
		Text fontkeycap17("g", font, 35);
		Text fontkeycap18("h", font, 35);
		Text fontkeycap19("j", font, 35);
		Text fontkeycap20("k", font, 35);
		Text fontkeycap21("l", font, 35);
		Text fontkeycap22("n", font, 35);
		Text fontkeycap23("m", font, 35);
		Text fontkeycap24("z", font, 35);
		Text fontkeycap25("x", font, 35);
		Text fontkeycap26("c", font, 35);
		
		t = x/2-400+10;
		fontkeycap1.setPosition(t, y/2+200+50);
		t+=55;
		fontkeycap2.setPosition(t, y/2+200+50);
		t+=55;
		fontkeycap3.setPosition(t, y/2+200+50);
		t+=55;
		fontkeycap4.setPosition(t, y/2+200+50);
		t+=55;
		fontkeycap5.setPosition(t, y/2+200+50);
		t+=55;
		fontkeycap6.setPosition(t, y/2+200+50);
		t+=55;
		fontkeycap7.setPosition(t, y/2+200+50);
		t+=55;
		fontkeycap8.setPosition(t, y/2+200+50);
		t+=55;
		fontkeycap9.setPosition(t, y/2+200+50);
		t+=55;
		fontkeycap10.setPosition(t, y/2+200+50);
		t+=55;
		fontkeycap11.setPosition(t, y/2+200+50);
		t+=55;
		fontkeycap12.setPosition(t, y/2+200+50);
		t+=55;
		
		t = x/2-380+10;
		fontkeycap13.setPosition(t, y/2+255+50);
		t+=55;
		fontkeycap14.setPosition(t, y/2+255+50);
		t+=55;
		fontkeycap15.setPosition(t, y/2+255+50);
		t+=55;
		fontkeycap16.setPosition(t, y/2+255+50);
		t+=55;
		fontkeycap17.setPosition(t, y/2+255+50);
		t+=55;
		fontkeycap18.setPosition(t, y/2+255+50);
		t+=55;
		fontkeycap19.setPosition(t, y/2+255+50);
		t+=55;
		fontkeycap20.setPosition(t, y/2+255+50);
		t+=55;
		fontkeycap21.setPosition(t, y/2+255+50);
		t+=55;
		fontkeycap22.setPosition(t, y/2+255+50);
		t+=55;
		fontkeycap23.setPosition(t, y/2+255+50);
		t+=55;
		
		t = x/2-350+10;
		fontkeycap24.setPosition(t, y/2+310+50);
		t+=55;
		fontkeycap25.setPosition(t, y/2+310+50);
		t+=55;
		fontkeycap26.setPosition(t, y/2+310+50);
		t+=55;
		
		fontkeycap1.setFillColor(Color::White);
		fontkeycap2.setFillColor(Color::White);
		fontkeycap3.setFillColor(Color::White);
		fontkeycap4.setFillColor(Color::White);
		fontkeycap5.setFillColor(Color::White);
		fontkeycap6.setFillColor(Color::White);
		fontkeycap7.setFillColor(Color::White);
		fontkeycap8.setFillColor(Color::White);
		fontkeycap9.setFillColor(Color::White);
		fontkeycap10.setFillColor(Color::White);
		fontkeycap11.setFillColor(Color::White);
		fontkeycap12.setFillColor(Color::White);
		fontkeycap13.setFillColor(Color::White);
		fontkeycap14.setFillColor(Color::White);
		fontkeycap15.setFillColor(Color::White);
		fontkeycap16.setFillColor(Color::White);
		fontkeycap17.setFillColor(Color::White);
		fontkeycap18.setFillColor(Color::White);
		fontkeycap19.setFillColor(Color::White);
		fontkeycap20.setFillColor(Color::White);
		fontkeycap21.setFillColor(Color::White);
		fontkeycap22.setFillColor(Color::White);
		fontkeycap23.setFillColor(Color::White);
		fontkeycap24.setFillColor(Color::White);
		fontkeycap25.setFillColor(Color::White);
		fontkeycap26.setFillColor(Color::White);
		
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
		sprite.setPosition(x/2-400, y/2-470);
		
		window.clear(Color::White);
		window.draw(sprite);
		window.draw(keycap1);
		window.draw(keycap2);
		window.draw(keycap3);
		window.draw(keycap4);
		window.draw(keycap5);
		window.draw(keycap6);
		window.draw(keycap7);
		window.draw(keycap8);
		window.draw(keycap9);
		window.draw(keycap10);
		window.draw(keycap11);
		window.draw(keycap12);
		window.draw(keycap13);
		window.draw(keycap14);
		window.draw(keycap15);
		window.draw(keycap16);
		window.draw(keycap17);
		window.draw(keycap18);
		window.draw(keycap19);
		window.draw(keycap20);
		window.draw(keycap21);
		window.draw(keycap22);
		window.draw(keycap23);
		window.draw(keycap24);
		window.draw(keycap25);
		window.draw(keycap26);
		window.draw(fontkeycap1);
		window.draw(fontkeycap2);
		window.draw(fontkeycap3);
		window.draw(fontkeycap4);
		window.draw(fontkeycap5);
		window.draw(fontkeycap6);
		window.draw(fontkeycap7);
		window.draw(fontkeycap8);
		window.draw(fontkeycap9);
		window.draw(fontkeycap10);
		window.draw(fontkeycap11);
		window.draw(fontkeycap12);
		window.draw(fontkeycap13);
		window.draw(fontkeycap14);
		window.draw(fontkeycap15);
		window.draw(fontkeycap16);
		window.draw(fontkeycap17);
		window.draw(fontkeycap18);
		window.draw(fontkeycap19);
		window.draw(fontkeycap20);
		window.draw(fontkeycap21);
		window.draw(fontkeycap22);
		window.draw(fontkeycap23);
		window.draw(fontkeycap24);
		window.draw(fontkeycap25);
		window.draw(fontkeycap26);
		
		if(Difficulty == 0){
			Event event;
			while(window.pollEvent(event)){
            	if(event.type == Event::Closed)
                	window.close();
        	}
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
			window.display();
		}
		if(Difficulty == 1){
			Event event;
			while(window.pollEvent(event)){
            	if(event.type == Event::Closed)
                	window.close();
        	}
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
			window.display();
		}
		if(Difficulty == 2){
			Event event;
			while(window.pollEvent(event)){
            	if(event.type == Event::Closed)
                	window.close();
        	}
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
			window.display();
		}
		if(Mouse::isButtonPressed(Mouse::Left)){
			if (keycap1.getGlobalBounds().contains(mousePoz.x, mousePoz.y)){
				checkletter('q', line, window);
			}
			if (keycap2.getGlobalBounds().contains(mousePoz.x, mousePoz.y)){
				checkletter('w', line, window);
			}
			if (keycap3.getGlobalBounds().contains(mousePoz.x, mousePoz.y)){
				checkletter('e', line, window);
			}
			if (keycap4.getGlobalBounds().contains(mousePoz.x, mousePoz.y)){
				checkletter('r', line, window);
			}
			if (keycap5.getGlobalBounds().contains(mousePoz.x, mousePoz.y)){
				checkletter('t', line, window);
			}
			if (keycap6.getGlobalBounds().contains(mousePoz.x, mousePoz.y)){
				checkletter('y', line, window);
			}
			if (keycap7.getGlobalBounds().contains(mousePoz.x, mousePoz.y)){
				checkletter('u', line, window);
			}
			if (keycap8.getGlobalBounds().contains(mousePoz.x, mousePoz.y)){
				checkletter('i', line, window);
			}
			if (keycap9.getGlobalBounds().contains(mousePoz.x, mousePoz.y)){
				checkletter('o', line, window);
			}
			if (keycap10.getGlobalBounds().contains(mousePoz.x, mousePoz.y)){
				checkletter('p', line, window);
			}
			if (keycap11.getGlobalBounds().contains(mousePoz.x, mousePoz.y)){
				checkletter('v', line, window);
			}
			if (keycap12.getGlobalBounds().contains(mousePoz.x, mousePoz.y)){
				checkletter('b', line, window);
			}
			if (keycap13.getGlobalBounds().contains(mousePoz.x, mousePoz.y)){
				checkletter('a', line, window);
			}
			if (keycap14.getGlobalBounds().contains(mousePoz.x, mousePoz.y)){
				checkletter('s', line, window);
			}
			if (keycap15.getGlobalBounds().contains(mousePoz.x, mousePoz.y)){
				checkletter('d', line, window);
			}
			if (keycap16.getGlobalBounds().contains(mousePoz.x, mousePoz.y)){
				checkletter('f', line, window);
			}
			if (keycap17.getGlobalBounds().contains(mousePoz.x, mousePoz.y)){
				checkletter('g', line, window);
			}
			if (keycap18.getGlobalBounds().contains(mousePoz.x, mousePoz.y)){
				checkletter('h', line, window);
			}
			if (keycap19.getGlobalBounds().contains(mousePoz.x, mousePoz.y)){
				checkletter('j', line, window);
			}
			if (keycap20.getGlobalBounds().contains(mousePoz.x, mousePoz.y)){
				checkletter('k', line, window);
			}
			if (keycap21.getGlobalBounds().contains(mousePoz.x, mousePoz.y)){
				checkletter('l', line, window);
			}
			if (keycap22.getGlobalBounds().contains(mousePoz.x, mousePoz.y)){
				checkletter('n', line, window);
			}
			if (keycap23.getGlobalBounds().contains(mousePoz.x, mousePoz.y)){
				checkletter('m', line, window);
			}
			if (keycap24.getGlobalBounds().contains(mousePoz.x, mousePoz.y)){
				checkletter('z', line, window);
			}
			if (keycap25.getGlobalBounds().contains(mousePoz.x, mousePoz.y)){
				checkletter('x', line, window);
			}
			if (keycap26.getGlobalBounds().contains(mousePoz.x, mousePoz.y)){
				checkletter('c', line, window);
			}
		}
	}
}

void RandSlov(RenderWindow& window){
	int a = rand()%100+1;
	string line;
	if(Difficulty == 0){
		ifstream d1("diff1.txt");
		if (d1.is_open()){
			for(int i = 0; i < a; i++){
				getline(d1, line);
			}
    	}
		ZagSlov(window, line);
	}
	if(Difficulty == 1){
		ifstream d2("diff2.txt");
		if (d2.is_open()){
			for(int i = 0; i < a; i++){
				getline(d2, line);
			}
    	}
    	ZagSlov(window, line);
	}
	if(Difficulty == 2){
		ifstream d3("diff3.txt");
		if (d3.is_open()){
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
        window.clear(Color::White);

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
		    	break;
            }
            
            if(Diff2.getGlobalBounds().contains(mousePoz.x, mousePoz.y)){
            	Difficulty = 1;
            	break;
            }
            
            if(Diff3.getGlobalBounds().contains(mousePoz.x, mousePoz.y)){
            	Difficulty = 2;
            	break;
            }
        }
    }
	window.clear(Color::White);
    RandSlov(window);
}

int main(){
    if(!font.loadFromFile("C:/Windows/Fonts/Arial.ttf")) return EXIT_FAILURE;
    
    RenderWindow window(VideoMode(x, y), "SFML window");
    
    Texture texture;
    if(!texture.loadFromFile("1.png")) return EXIT_FAILURE;
    Sprite sprite(texture);
    sprite.setPosition(x/2-400, y/2-470);
    
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
