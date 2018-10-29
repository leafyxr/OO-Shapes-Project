#include "..\include\ellipse.h"
void ellipse::calculateVertices()
{
	va_Ellipse = sf::VertexArray(sf::LineStrip, iVertexCount);
	for (int i = 0; i < va_Ellipse.getVertexCount(); i++) {
		float fAngle = float((float)i / float(iVertexCount - 1)) * 2 * float(atan(1) * 4);
		va_Ellipse[i].position = sf::Vector2f((float)(fXPos + cosf(fAngle) * fXRadius), (float)(fYPos + sinf(fAngle) * fYRadius));
		va_Ellipse[i].color = color;
	}
}

ellipse::ellipse()
{
	calculateVertices();
}

ellipse::ellipse(float Xpos, float YPos, float XRadius, float YRadius, sf::Color NewColor)
{
	fXPos = Xpos;
	fYPos = YPos;
	fXRadius = XRadius;
	fYRadius = YRadius;
	color = NewColor;
	calculateVertices();
}

ellipse::~ellipse()
{
}

void ellipse::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(va_Ellipse, states);
}
