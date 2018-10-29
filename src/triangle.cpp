#include "..\include\triangle.h"
#include <iostream>

void triangle::calculateVertices() 
{
	va_Triangle = sf::VertexArray(sf::LineStrip, 4);
	va_Triangle[0].position = sf::Vector2f(fXPos, (fYPos - (0.5 * fHeight)));
	va_Triangle[1].position = sf::Vector2f((fXPos + (0.5 * fBase)), (fYPos + (0.5 * fHeight)));
	va_Triangle[2].position = sf::Vector2f((fXPos - (0.5 * fBase)), (fYPos + (0.5 * fHeight)));
	va_Triangle[3].position = sf::Vector2f(fXPos, (fYPos - (0.5 * fHeight)));
	for (int i = 0; i < va_Triangle.getVertexCount(); i++) {
		va_Triangle[i].color = color;
	}
}

triangle::triangle()
{
	calculateVertices();
}

triangle::triangle(float Xpos, float YPos, float Base, float Height, sf::Color NewColor)
{
	fXPos = Xpos;
	fYPos = YPos;
	fBase = Base;
	fHeight = Height;
	color = NewColor;
	calculateVertices();
}

triangle::~triangle()
{
}

void triangle::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(va_Triangle, states);
}
