/*! \file line.cpp
* \brief Code used to draw Lines
*
*/
#include "..\include\line.h"
//! Calculates and sets the position and color of each Vertex
void line::calculateVertices()
{
	va_Line = sf::VertexArray(sf::LineStrip, 2);
	va_Line[0].position = sf::Vector2f(fXPosA, fYPosA);
	va_Line[1].position = sf::Vector2f(fXPosB, fYPosB);
	// Sets every vertex to the same color
	for (int i = 0; i < va_Line.getVertexCount(); i++) {
		va_Line[i].color = color;
	}
}
//! Constructs the object with default paramaters
line::line()
{
	calculateVertices();
}
//! Constructs the object with set paramaters
/*!
\param XPosA X position of point A.
\param YPosA Y position of Point A.
\param XPosB X position of point B.
\param YPosB Y position of point B.
\param NewColor Color of Shape.*/
line::line(float XPosA, float YPosA, float XPosB, float YPosB, sf::Color NewColor)
{
	fXPosA = XPosA;
	fXPosB = XPosB;
	fYPosA = YPosA;
	fYPosB = YPosB;
	color = NewColor;
	calculateVertices();
}
//! Deconstructor
line::~line()
{
}
//! Draws the Object
void line::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(va_Line, states);
}
