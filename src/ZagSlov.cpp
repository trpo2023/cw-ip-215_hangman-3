#include "ZagSlov.hpp"

void ZagSlov(RenderWindow& window, string line, int mistake, int Difficulty, int y, int x, bool Arr[], string alphabet, Font font){
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
		}
		window.display();
		if((Keyboard::isKeyPressed(Keyboard::Q)) && (Arr[0] == false)){
			Arr[0] = true;
			checkletter('q', line, window, mistake, x, y, font, Difficulty, Arr, alphabet);
		}
		if(Keyboard::isKeyPressed(Keyboard::W) && (Arr[1] == false)){
			Arr[1] = true;
			checkletter('w', line, window, mistake, x, y, font, Difficulty, Arr, alphabet);
		}
		if(Keyboard::isKeyPressed(Keyboard::E) && (Arr[2] == false)){
			Arr[2] = true;
			checkletter('e', line, window, mistake, x, y, font, Difficulty, Arr, alphabet);
		}
		if(Keyboard::isKeyPressed(Keyboard::R) && (Arr[3] == false)){
			Arr[3] = true;
			checkletter('r', line, window, mistake, x, y, font, Difficulty, Arr, alphabet);
		}
		if(Keyboard::isKeyPressed(Keyboard::T) && (Arr[4] == false)){
			Arr[4] = true;
			checkletter('t', line, window, mistake, x, y, font, Difficulty, Arr, alphabet);
		}
		if(Keyboard::isKeyPressed(Keyboard::Y) && (Arr[5] == false)){
			Arr[5] = true;
			checkletter('y', line, window, mistake, x, y, font, Difficulty, Arr, alphabet);
		}
		if(Keyboard::isKeyPressed(Keyboard::U) && (Arr[6] == false)){
			Arr[6] = true;
			checkletter('u', line, window, mistake, x, y, font, Difficulty, Arr, alphabet);
		}
		if(Keyboard::isKeyPressed(Keyboard::I) && (Arr[7] == false)){
			Arr[7] = true;
			checkletter('i', line, window, mistake, x, y, font, Difficulty, Arr, alphabet);
		}
		if(Keyboard::isKeyPressed(Keyboard::O) && (Arr[8] == false)){
			Arr[8] = true;
			checkletter('o', line, window, mistake, x, y, font, Difficulty, Arr, alphabet);
		}
		if(Keyboard::isKeyPressed(Keyboard::P) && (Arr[9] == false)){
			Arr[9] = true;
			checkletter('p', line, window, mistake, x, y, font, Difficulty, Arr, alphabet);
		}
		if(Keyboard::isKeyPressed(Keyboard::A) && (Arr[10] == false)){
			Arr[10] = true;
			checkletter('a', line, window, mistake, x, y, font, Difficulty, Arr, alphabet);
		}
		if(Keyboard::isKeyPressed(Keyboard::S) && (Arr[11] == false)){
			Arr[11] = true;
			checkletter('s', line, window, mistake, x, y, font, Difficulty, Arr, alphabet);
		}
		if(Keyboard::isKeyPressed(Keyboard::D) && (Arr[12] == false)){
			Arr[12] = true;
			checkletter('d', line, window, mistake, x, y, font, Difficulty, Arr, alphabet);
		}
		if(Keyboard::isKeyPressed(Keyboard::F) && (Arr[13] == false)){
			Arr[13] = true;
			checkletter('f', line, window, mistake, x, y, font, Difficulty, Arr, alphabet);
		}
		if(Keyboard::isKeyPressed(Keyboard::G) && (Arr[14] == false)){
			Arr[14] = true;
			checkletter('g', line, window, mistake, x, y, font, Difficulty, Arr, alphabet);
		}
		if(Keyboard::isKeyPressed(Keyboard::H) && (Arr[15] == false)){
			Arr[15] = true;
			checkletter('h', line, window, mistake, x, y, font, Difficulty, Arr, alphabet);
		}
		if(Keyboard::isKeyPressed(Keyboard::J) && (Arr[16] == false)){
			Arr[16] = true;
			checkletter('j', line, window, mistake, x, y, font, Difficulty, Arr, alphabet);
		}
		if(Keyboard::isKeyPressed(Keyboard::K) && (Arr[17] == false)){
			Arr[17] = true;
			checkletter('k', line, window, mistake, x, y, font, Difficulty, Arr, alphabet);
		}
		if(Keyboard::isKeyPressed(Keyboard::L) && (Arr[18] == false)){
			Arr[18] = true;
			checkletter('l', line, window, mistake, x, y, font, Difficulty, Arr, alphabet);
		}
		if(Keyboard::isKeyPressed(Keyboard::Z) && (Arr[19] == false)){
			Arr[19] = true;
			checkletter('z', line, window, mistake, x, y, font, Difficulty, Arr, alphabet);
		}
		if(Keyboard::isKeyPressed(Keyboard::X) && (Arr[20] == false)){
			Arr[20] = true;
			checkletter('x', line, window, mistake, x, y, font, Difficulty, Arr, alphabet);
		}
		if(Keyboard::isKeyPressed(Keyboard::C) && (Arr[21] == false)){
			Arr[21] = true;
			checkletter('c', line, window, mistake, x, y, font, Difficulty, Arr, alphabet);
		}
		if(Keyboard::isKeyPressed(Keyboard::V) && (Arr[22] == false)){
			Arr[22] = true;
			checkletter('v', line, window, mistake, x, y, font, Difficulty, Arr, alphabet);
		}
		if(Keyboard::isKeyPressed(Keyboard::B) && (Arr[23] == false)){
			Arr[23] = true;
			checkletter('b', line, window, mistake, x, y, font, Difficulty, Arr, alphabet);
		}
		if(Keyboard::isKeyPressed(Keyboard::N) && (Arr[24] == false)){
			Arr[24] = true;
			checkletter('n', line, window, mistake, x, y, font, Difficulty, Arr, alphabet);
		}
		if(Keyboard::isKeyPressed(Keyboard::M) && (Arr[25] == false)){
			Arr[25] = true;
			checkletter('m', line, window, mistake, x, y, font, Difficulty, Arr, alphabet);
		}
	}
}