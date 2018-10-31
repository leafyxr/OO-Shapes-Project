/*! \file square.cpp
* \brief Code used to draw squares
*
*/
#include "..\include\square.h"
//! Calculates and sets the position and color of each Vertex
void square::calculateVertices()
{
	va_Square = sf::VertexArray(sf::LineStrip, 5);
	va_Square[0].position = sf::Vector2f((fXPos - (0.5 * fLength)), (fYPos - (0.5 * fLength)));
	va_Square[1].position = sf::Vector2f((fXPos + (0.5 * fLength)), (fYPos - (0.5 * fLength)));
	va_Square[2].position = sf::Vector2f((fXPos + (0.5 * fLength)), (fYPos + (0.5 * fLength)));
	va_Square[3].position = sf::Vector2f((fXPos - (0.5 * fLength)), (fYPos + (0.5 * fLength)));
	va_Square[4].position = sf::Vector2f((fXPos - (0.5 * fLength)), (fYPos - (0.5 * fLength)));
	// Sets every vertex to the same color
	for (int i = 0; i < va_Square.getVertexCount(); i++) {
		va_Square[i].color = color;
	}
}
//! Constructs the object with default paramaters
square::square()
{
	calculateVertices();
}
//! Constructs the object with set paramaters
/*!
\param XPos X position.
\param YPos Y position.
\param Length Length of the sides of the Object.
\param NewColor Color of Shape.*/
square::square(float XPos, float YPos, float Length, sf::Color NewColor)
{
	fXPos = XPos;
	fYPos = YPos;
	fLength = Length;
	color = NewColor;
	calculateVertices();
}
//! Deconstructor
square::~square()
{
}
//! Draws the Object
void square::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(va_Square, states);
}

