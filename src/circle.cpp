/*! \file circle.cpp
* \brief Code used to draw Circles
*
*/
#include "..\include\circle.h"
#include <cmath>;
//! Calculates and sets the position and color of each Vertex
void circle::calculateVertices()
{
	va_Circle = sf::VertexArray(sf::LineStrip, iVertexCount);
	// Sets every vertex to the same color and the position
	for (int i = 0; i < va_Circle.getVertexCount(); i++) {
		float fAngle = float((float)i / float(iVertexCount-1)) * 2 * float(atan(1) * 4);
		va_Circle[i].position = sf::Vector2f((float)(fXPos + cosf(fAngle) * fRadius), (float)(fYPos + sinf(fAngle) * fRadius));
		va_Circle[i].color = color;
	}
}
//! Constructs the object with default paramaters
circle::circle()
{
	calculateVertices();
}
//! Constructs the object with set paramaters
/*!
\param XPos X position.
\param YPos Y position.
\param Radius Radius of the circle.
\param NewColor Color of Shape.*/
circle::circle(float XPos, float YPos, float Radius, sf::Color NewColor)
{
	fXPos = XPos;
	fYPos = YPos;
	fRadius = Radius;
	color = NewColor;
	calculateVertices();
}
//! Deconstructor
circle::~circle()
{
}
//! Draws the Object
void circle::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(va_Circle, states);
}
