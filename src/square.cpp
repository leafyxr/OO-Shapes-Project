#include "..\include\square.h"
void square::calculateVertices()
{
	va_Square = sf::VertexArray(sf::LineStrip, 5);
	va_Square[0].position = sf::Vector2f((fXPos - (0.5 * fLength)), (fYPos - (0.5 * fLength)));
	va_Square[1].position = sf::Vector2f((fXPos + (0.5 * fLength)), (fYPos - (0.5 * fLength)));
	va_Square[2].position = sf::Vector2f((fXPos + (0.5 * fLength)), (fYPos + (0.5 * fLength)));
	va_Square[3].position = sf::Vector2f((fXPos - (0.5 * fLength)), (fYPos + (0.5 * fLength)));
	va_Square[4].position = sf::Vector2f((fXPos - (0.5 * fLength)), (fYPos - (0.5 * fLength)));
	for (int i = 0; i < va_Square.getVertexCount(); i++) {
		va_Square[i].color = color;
	}
}

square::square()
{
	calculateVertices();
}

square::square(float Xpos, float YPos, float Length, sf::Color NewColor)
{
	fXPos = Xpos;
	fYPos = YPos;
	fLength = Length;
	color = NewColor;
	calculateVertices();
}

square::~square()
{
}

void square::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(va_Square, states);
}

