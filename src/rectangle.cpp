#include "..\include\rectangle.h"
void rectangle::calculateVertices()
{
	va_Rectangle = sf::VertexArray(sf::LineStrip, 5);
	va_Rectangle[0].position = sf::Vector2f((fXPos - (0.5 * fBase)), (fYPos - (0.5 * fHeight)));
	va_Rectangle[1].position = sf::Vector2f((fXPos + (0.5 * fBase)), (fYPos - (0.5 * fHeight)));
	va_Rectangle[2].position = sf::Vector2f((fXPos + (0.5 * fBase)), (fYPos + (0.5 * fHeight)));
	va_Rectangle[3].position = sf::Vector2f((fXPos - (0.5 * fBase)), (fYPos + (0.5 * fHeight)));
	va_Rectangle[4].position = sf::Vector2f((fXPos - (0.5 * fBase)), (fYPos - (0.5 * fHeight)));
	for (int i = 0; i < va_Rectangle.getVertexCount(); i++) {
		va_Rectangle[i].color = sf::Color::Red;
	}
}

rectangle::rectangle()
{
	calculateVertices();
}

rectangle::rectangle(float Xpos, float YPos, float Base, float Height)
{
	fXPos = Xpos;
	fYPos = YPos;
	fBase = Base;
	fHeight = Height;
	calculateVertices();
}

rectangle::~rectangle()
{
}

void rectangle::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(va_Rectangle, states);
}

