#include "ZagSlov.hpp"

void ZagSlov(RenderWindow& window, string &line, int &mistake, int &r, int Difficulty, int y, int x, bool Arr[], string alphabet, Font font){
	while(window.isOpen()){
		Event event;
		while(window.pollEvent(event)){
            if(event.type == Event::Closed)
                window.close();
        }
		Texture texture;
		
		texture.loadFromFile("src/resources/"+to_string(mistake+1)+".png");
	
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
			for(int j = 0; j < line.length(); j++){
				if((Arr[i] == true) && (line[j] == alphabet[i])){
					Text letter(alphabet[i], font, 35);
					letter.setPosition(x/2-210+60*j, y/2+50);
					letter.setFillColor(Color::Red);
					window.draw(letter);
				}
			}
			if((Keyboard::isKeyPressed(Keyboard::Key(i))) && (Arr[i] == false)){
				Arr[i] = true;
				checkletter(alphabet[i], line, mistake, r);
				break;
			}
		}
		if(mistake == 8){
		    youlose(window, line, x, y, font);
	    }
        if(r == line.length()){
            youwin(window, line, x, y, font);
        }
		window.display();
	}
}