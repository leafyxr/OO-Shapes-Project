/*! \file triangle.h
* Used to draw a triangle shape
* Can set position, color and dimensions
*/
#pragma once
#include "SFML/Graphics.hpp"

class triangle : public sf::Drawable
{
private:
	sf::VertexArray va_Triangle;
	float fXPos = 512;
	float fYPos = 400;
	float fBase = 50;
	float fHeight = 50;
	sf::Color color = sf::Color::Red;
public:
	//! Calculates and sets the position and color of each Vertex
	void calculateVertices();
	//! Constructs the object with default paramaters
	triangle();
	//! Constructs the object with set paramaters
	/*!
	\param Xpos X position.
	\param Ypos Y position.
	\param Base length of the base of the object.
	\param Height height of the object.
	\param NewColor Color of Shape.*/
	triangle(float Xpos, float YPos, float Base, float Height, sf::Color NewColor);
	~triangle();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

