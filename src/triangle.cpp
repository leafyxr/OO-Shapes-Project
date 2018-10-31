/*! \file triangle.cpp
* \brief Code used to draw triangles
*
*/
#include "..\include\triangle.h"
//! Calculates and sets the position and color of each Vertex
void triangle::calculateVertices() 
{
	va_Triangle = sf::VertexArray(sf::LineStrip, 4);
	va_Triangle[0].position = sf::Vector2f(fXPos, (fYPos - (0.5 * fHeight)));
	va_Triangle[1].position = sf::Vector2f((fXPos + (0.5 * fBase)), (fYPos + (0.5 * fHeight)));
	va_Triangle[2].position = sf::Vector2f((fXPos - (0.5 * fBase)), (fYPos + (0.5 * fHeight)));
	va_Triangle[3].position = sf::Vector2f(fXPos, (fYPos - (0.5 * fHeight)));
	// Sets every vertex to the same color
	for (int i = 0; i < va_Triangle.getVertexCount(); i++) {
		va_Triangle[i].color = color;
	}
}
//! Constructs the object with default paramaters
triangle::triangle()
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
triangle::triangle(float XPos, float YPos, float Base, float Height, sf::Color NewColor)
{
	fXPos = XPos;
	fYPos = YPos;
	fBase = Base;
	fHeight = Height;
	color = NewColor;
	calculateVertices();
}
//! Deconstructor
triangle::~triangle()
{
}
//! Draws the Object
void triangle::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(va_Triangle, states);
}
