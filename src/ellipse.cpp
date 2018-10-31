/*! \file ellipse.cpp
* \brief Code used to draw ellipse
*
*/
#include "..\include\ellipse.h"
//! Calculates and sets the position and color of each Vertex
void ellipse::calculateVertices()
{
	va_Ellipse = sf::VertexArray(sf::LineStrip, iVertexCount);
	// Sets every vertex to the same color and the position
	for (int i = 0; i < va_Ellipse.getVertexCount(); i++) {
		float fAngle = float((float)i / float(iVertexCount - 1)) * 2 * float(atan(1) * 4);
		va_Ellipse[i].position = sf::Vector2f((float)(fXPos + cosf(fAngle) * fXRadius), (float)(fYPos + sinf(fAngle) * fYRadius));
		va_Ellipse[i].color = color;
	}
}
//! Constructs the object with default paramaters
ellipse::ellipse()
{
	calculateVertices();
}
//! Constructs the object with set paramaters
/*!
\param XPos X position.
\param YPos Y position.
\param XRadius Radius on the X axis.
\param YRadius Radius on the Y axis.
\param NewColor Color of Shape.*/
ellipse::ellipse(float XPos, float YPos, float XRadius, float YRadius, sf::Color NewColor)
{
	fXPos = XPos;
	fYPos = YPos;
	fXRadius = XRadius;
	fYRadius = YRadius;
	color = NewColor;
	calculateVertices();
}
//! Deconstructor
ellipse::~ellipse()
{
}
//! Draws the Object
void ellipse::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(va_Ellipse, states);
}
