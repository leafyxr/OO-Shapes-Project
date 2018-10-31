/*! \file arc.cpp
* \brief Code used to draw Arcs
*
*/
#include "..\include\arc.h"
//! Calculates and sets the position and color of each Vertex
void arc::calculateVertices()
{
	va_Arc = sf::VertexArray(sf::LineStrip, iVertexCount);
	float fAngleIncrement = (fEndTheta - fStartTheta) / iVertexCount; //!< finds the angle change per increment
	int i = 0; //!< index number
	// Sets every vertex to the same color and the position
	for (float fAngle = fStartTheta; fAngle < fEndTheta && i < iVertexCount;fAngle += fAngleIncrement) {
		va_Arc[i].position = sf::Vector2f((float)(fXPos + cosf(fAngle) * fXRadius), (float)(fYPos + sinf(fAngle) * fYRadius));
		va_Arc[i].color = color;
		i++;
	}
}
//! Constructs the object with default paramaters
arc::arc()
{
	calculateVertices();
}
//! Constructs the object with set paramaters
/*!
\param XPos X position.
\param YPos Y position.
\param XRadius Radius on the X axis.
\param YRadius Radius on the Y axis.
\param StartTheta Start Angle in Radians.
\param EndTheta End Angle in Radians.
\param NewColor Color of Shape.*/
arc::arc(float XPos, float YPos, float XRadius, float YRadius, float StartTheta , float EndTheta, sf::Color NewColor)
{
	fXPos = XPos;
	fYPos = YPos;
	fXRadius = XRadius;
	fYRadius = YRadius;
	fStartTheta = StartTheta;
	fEndTheta = EndTheta;
	color = NewColor;
	calculateVertices();
}
//! Deconstructor
arc::~arc()
{
}
//! Draws the Object
void arc::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(va_Arc, states);
}
