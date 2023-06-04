#include "ChooseDiff.hpp"

void ChooseDiff(RenderWindow& window, int x, int y, Font font, int Difficulty, bool Arr[], string alphabet){
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
}