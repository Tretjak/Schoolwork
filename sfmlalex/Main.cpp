#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

int main()
{
    std::string tobias;
    int mousex=0;
    int mousey=0;
    sf::RenderWindow window(sf::VideoMode(1024, 768), "Button");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);
    shape.setPosition(sf::Vector2f(800.f, 500.f));
    tobias="HEJ";

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
	    if (event.type == sf::Event::MouseMoved)
	    {
    		mousex = event.mouseMove.x;
    		mousey = event.mouseMove.y;
	    }
	    if (shape.getGlobalBounds().contains(mousex, mousey)) {
		std::cout << "Grön" << std::endl;
	    }
            if (event.type == sf::Event::Closed)
                window.close();
        }


        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}
