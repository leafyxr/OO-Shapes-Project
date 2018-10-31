/*! \file dot.cpp
* \brief Code used to draw dots
*
*/
#include "..\include\dot.h"
//! Calculates and sets the position and color of each Vertex
void dot::calculateVertices()
{
	va_dot = sf::VertexArray(sf::Points, 1);
	va_dot[0].position = sf::Vector2f(fXPos, fYPos);
	va_dot[0].color = color;
}
//! Constructs the object with default paramaters
dot::dot()
{
	calculateVertices();
}
//! Constructs the object with set paramaters
/*!
\param XPos X position.
\param YPos Y position.
\param NewColor Color of Shape.*/
dot::dot(float XPos, float YPos, sf::Color NewColor)
{
	fXPos = XPos;
	fYPos = YPos;
	color = NewColor;
	calculateVertices();
}
//! Deconstructor
dot::~dot()
{
}
//! Draws the Object
void dot::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(va_dot, states);
}
