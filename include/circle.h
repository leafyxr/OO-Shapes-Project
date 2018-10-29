/*! \file circle.h
* Used to draw a circle shape
* Can set position, color and dimensions
*/
#pragma once
#include <SFML/Graphics.hpp>
class circle : public sf::Drawable
{
private:
	sf::VertexArray va_Circle;
	float fXPos = 512;
	float fYPos = 400;
	float fRadius = 50;
	int iVertexCount = 40;
	sf::Color color = sf::Color::Red;
public:
	//! Calculates and sets the position and color of each Vertex
	void calculateVertices();
	//! Constructs the object with default paramaters
	circle();
	//! Constructs the object with set paramaters
	/*!
	\param Xpos X position.
	\param Ypos Y position.
	\param Radius Radius of the circle.
	\param NewColor Color of Shape.*/
	circle(float Xpos, float YPos, float Radius, sf::Color NewColor);
	~circle();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

