#pragma once
#include <SFML/Graphics.hpp>
class line : public sf::Drawable
{
public:
private:
	sf::VertexArray va_Line;
	float fXPosA = 512;
	float fYPosA = 400;
	float fXPosB = 512;
	float fYPosB = 200;
public:
	void calculateVertices();
	line();
	line(float XposA, float YPosA, float XPosB, float YPosB);
	~line();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

