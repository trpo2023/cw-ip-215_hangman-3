#include "game_result.hpp"

void youlose(RenderWindow& window, string line, int x, int y, Font font){
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
		Text message2("Press 'Enter' to exit game", font, 50);
		message2.setFillColor(Color::Blue);
		message2.setPosition(x/2-430, y/2+100);
		Text message3(line, font, 50);
		message3.setFillColor(Color::Green);
		message3.setPosition(x/2-125, y/2);
		
		window.clear(Color::White);
		window.draw(sprite);
		window.draw(message1);
		window.draw(message2);
		window.display();
		if(Keyboard::isKeyPressed(Keyboard::Return)){
			window.close();
		}
	}
}

void youwin(RenderWindow& window, string line, int x, int y, Font font){
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
		Text message3("Press 'Enter' to exit game", font, 50);
		message3.setFillColor(Color::Blue);
		message3.setPosition(x/2-430, y/2+100);
		
		window.clear(Color::White);
		window.draw(message1);
		window.draw(message2);
		window.draw(message3);
		window.display();
		if(Keyboard::isKeyPressed(Keyboard::Return)){
			window.close();
		}
	}
}