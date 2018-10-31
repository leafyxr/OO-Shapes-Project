/*! \file rectangle.cpp
* \brief Code used to draw rectangles
*
*/
#include "..\include\rectangle.h"
//! Calculates and sets the position and color of each Vertex
void rectangle::calculateVertices()
{
	va_Rectangle = sf::VertexArray(sf::LineStrip, 5);
	va_Rectangle[0].position = sf::Vector2f((fXPos - (0.5 * fBase)), (fYPos - (0.5 * fHeight)));
	va_Rectangle[1].position = sf::Vector2f((fXPos + (0.5 * fBase)), (fYPos - (0.5 * fHeight)));
	va_Rectangle[2].position = sf::Vector2f((fXPos + (0.5 * fBase)), (fYPos + (0.5 * fHeight)));
	va_Rectangle[3].position = sf::Vector2f((fXPos - (0.5 * fBase)), (fYPos + (0.5 * fHeight)));
	va_Rectangle[4].position = sf::Vector2f((fXPos - (0.5 * fBase)), (fYPos - (0.5 * fHeight)));
	// Sets every vertex to the same color
	for (int i = 0; i < va_Rectangle.getVertexCount(); i++) {
		va_Rectangle[i].color = color;
	}
}
//! Constructs the object with default paramaters
rectangle::rectangle()
{
	calculateVertices();
}
//! Constructs the object with set paramaters
/*!
\param XPos X position.
\param YPos Y position.
\param Base Length of the base of the Object.
\param Height Height of the Object.
\param NewColor Color of Shape.*/
rectangle::rectangle(float XPos, float YPos, float Base, float Height, sf::Color NewColor)
{
	fXPos = XPos;
	fYPos = YPos;
	fBase = Base;
	fHeight = Height;
	color = NewColor;
	calculateVertices();
}
//! Deconstructor
rectangle::~rectangle()
{
}
//! Draws the Object
void rectangle::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(va_Rectangle, states);
}

