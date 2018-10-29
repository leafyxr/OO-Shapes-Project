#include "..\include\arc.h"

void arc::calculateVertices()
{
	va_Arc = sf::VertexArray(sf::LineStrip, iVertexCount);
	float fAngleIncrement = (fEndTheta - fStartTheta) / iVertexCount;
	int i = 0;
	for (float fAngle = fStartTheta; fAngle < fEndTheta && i < iVertexCount;fAngle += fAngleIncrement) {
		va_Arc[i].position = sf::Vector2f((float)(fXPos + cosf(fAngle) * fXRadius), (float)(fYPos + sinf(fAngle) * fYRadius));
		va_Arc[i].color = color;
		i++;
	}
}

arc::arc()
{
	calculateVertices();
}

arc::arc(float Xpos, float YPos, float Base, float Height, float StartTheta , float EndTheta, sf::Color NewColor)
{
	fXPos = Xpos;
	fYPos = YPos;
	fXRadius = Base;
	fYRadius = Height;
	fStartTheta = StartTheta;
	fEndTheta = EndTheta;
	color = NewColor;
	calculateVertices();
}

arc::~arc()
{
}

void arc::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(va_Arc, states);
}
