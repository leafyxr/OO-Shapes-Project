#include "..\include\line.h"
void line::calculateVertices()
{
	va_Line = sf::VertexArray(sf::LineStrip, 2);
	va_Line[0].position = sf::Vector2f(fXPosA, fYPosA);
	va_Line[1].position = sf::Vector2f(fXPosB, fYPosB);
	for (int i = 0; i < va_Line.getVertexCount(); i++) {
		va_Line[i].color = color;
	}
}

line::line()
{
	calculateVertices();
}

line::line(float XPosA, float YPosA, float XPosB, float YPosB, sf::Color NewColor)
{
	fXPosA = XPosA;
	fXPosB = XPosB;
	fYPosA = YPosA;
	fYPosB = YPosB;
	color = NewColor;
	calculateVertices();
}

line::~line()
{
}

void line::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(va_Line, states);
}
