#include "..\include\line.h"
void line::calculateVertices()
{
	va_Line = sf::VertexArray(sf::LineStrip, 2);
	va_Line[0].position = sf::Vector2f(fXPosA, fYPosA);
	va_Line[1].position = sf::Vector2f(fXPosB, fYPosB);
	for (int i = 0; i < va_Line.getVertexCount(); i++) {
		va_Line[i].color = sf::Color::Red;
	}
}

line::line()
{
	calculateVertices();
}

line::line(float XPosA, float YPosA, float XPosB, float YPosB)
{
	fXPosA = XPosA;
	fXPosB = XPosB;
	fYPosA = YPosA;
	fYPosB = YPosB;
	calculateVertices();
}

line::~line()
{
}

void line::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(va_Line, states);
}
