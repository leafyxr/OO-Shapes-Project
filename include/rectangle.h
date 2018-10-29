/*! \file rectangle.h
* Used to draw a rectangle shape
* Can set position, color and dimensions
*/
#pragma once
#include <SFML/Graphics.hpp>
class rectangle : public sf::Drawable
{
public:
private:
	sf::VertexArray va_Rectangle;
	float fXPos = 512;
	float fYPos = 400;
	float fBase = 50;
	float fHeight = 50;
	sf::Color color = sf::Color::Red;
public:
	//! Calculates and sets the position and color of each Vertex
	void calculateVertices();
	//! Constructs the object with default paramaters
	rectangle();
	//! Constructs the object with set paramaters
	/*!
	\param Xpos X position.
	\param Ypos Y position.
	\param Base length of the base of the object.
	\param Height height of the object.
	\param NewColor Color of Shape.*/
	rectangle(float Xpos, float YPos, float Base, float Height, sf::Color NewColor);
	~rectangle();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

