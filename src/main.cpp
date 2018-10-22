/*! \mainpage Lab 2 - Shapes
*
* This program gives you a basic SFML winow in which to draw your shapes.
*
* The classes and files you use are up to you.  
*
* This software froms the basis of your submission for lab book 1
*/

/*! \file main.cpp
* \brief Main file for the application
*
* Contains the entry point of the application 
*/
#include "SFML/Graphics.hpp"
#include "triangle.h"
#include "square.h"
#include "rectangle.h"
#include "line.h"
#include "dot.h"

int main() //!< Entry point for the application
{
	sf::RenderWindow window(sf::VideoMode(1024, 800), "Lab Book 1 - Shapes");
	window.setFramerateLimit(60);

	// Instaniate any classes here
	triangle Triangle(100,100,100,100);
	square Square(250, 100, 100);
	rectangle Rectangle(400, 100, 100, 50);
	line Line(50, 250, 150, 250);
	dot Dot(250, 250);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}

		window.clear(sf::Color::White);

		// Do your drawing here
		Triangle.calculateVertices();
		window.draw(Triangle);

		Square.calculateVertices();
		window.draw(Square);

		Rectangle.calculateVertices();
		window.draw(Rectangle);

		Line.calculateVertices();
		window.draw(Line);

		Dot.calculateVertices();
		window.draw(Dot);

		window.display();
	}
}
