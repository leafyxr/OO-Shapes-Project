/*! \file square.h
* Used to draw a square shape
* Can set position, color and dimensions
*/
#pragma once
#include <SFML/Graphics.hpp>
class square : public sf::Drawable
{
private:
	sf::VertexArray va_Square;
	float fXPos = 512;
	float fYPos = 400;
	float fLength = 50;
	sf::Color color = sf::Color::Red;
public:
	//! Calculates and sets the position and color of each Vertex
	void calculateVertices();
	//! Constructs the object with default paramaters
	square();
	//! Constructs the object with set paramaters
	/*!
	\param Xpos X position.
	\param Ypos Y position.
	\param Lenght size of the Square.
	\param NewColor Color of Shape.*/
	square(float Xpos, float YPos, float Length, sf::Color NewColor);
	~square();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

