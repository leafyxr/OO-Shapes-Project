#include "..\include\circle.h"
#include <cmath>;
void circle::calculateVertices()
{
	va_Circle = sf::VertexArray(sf::LineStrip, iVertexCount);
	for (int i = 0; i < va_Circle.getVertexCount(); i++) {
		float fAngle = float((float)i / float(iVertexCount-1)) * 2 * float(atan(1) * 4);
		va_Circle[i].position = sf::Vector2f((float)(fXPos + cosf(fAngle) * fRadius), (float)(fYPos + sinf(fAngle) * fRadius));
		va_Circle[i].color = color;
	}
}

circle::circle()
{
	calculateVertices();
}

circle::circle(float Xpos, float YPos, float Radius, sf::Color NewColor)
{
	fXPos = Xpos;
	fYPos = YPos;
	fRadius = Radius;
	color = NewColor;
	calculateVertices();
}

circle::~circle()
{
}

void circle::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(va_Circle, states);
}
