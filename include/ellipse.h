/*! \file ellipse.h
* Used to draw a ellipse shape
* Can set position, color and dimensions
*/
#pragma once
#include <SFML/Graphics.hpp>
class ellipse : public sf::Drawable
{
private:
	sf::VertexArray va_Ellipse;
	float fXPos = 512;
	float fYPos = 400;
	float fXRadius = 50;
	float fYRadius = 50;
	int iVertexCount = 40;
	sf::Color color = sf::Color::Red;
public:
	//! Calculates and sets the position and color of each Vertex
	void calculateVertices();
	//! Constructs the object with default paramaters
	ellipse();
	//! Constructs the object with set paramaters
	/*!
	\param Xpos X position.
	\param Ypos Y position.
	\param XRadius Radius on the X axis.
	\param YRadius Radius on the Y axis.
	\param NewColor Color of Shape.*/
	ellipse(float Xpos, float YPos, float XRadius, float YRadius, sf::Color NewColor);
	~ellipse();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

