#include "..\include\dot.h"
void dot::calculateVertices()
{
	va_dot = sf::VertexArray(sf::Points, 1);
	va_dot[0].position = sf::Vector2f(fXPos, fYPos);
	va_dot[0].color = sf::Color::Red;
}

dot::dot()
{
	calculateVertices();
}

dot::dot(float Xpos, float YPos)
{
	fXPos = Xpos;
	fYPos = YPos;
	calculateVertices();
}

dot::~dot()
{
}

void dot::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(va_dot, states);
}
