/*! \file dot.h
* Used to draw a dot
* Can set position and color
*/
#pragma once
#include <SFML/Graphics.hpp>
class dot : public sf::Drawable
{
private:
	sf::VertexArray va_dot;
	float fXPos = 512;
	float fYPos = 400;
	sf::Color color = sf::Color::Red;
public:
	//! Calculates and sets the position and color of each Vertex
	void calculateVertices();
	//! Constructs the object with default paramaters
	dot();
	//! Constructs the object with set paramaters
	/*!
	\param Xpos X position.
	\param Ypos Y position.
	\param NewColor Color.*/
	dot(float Xpos, float YPos, sf::Color NewColor);
	~dot();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

