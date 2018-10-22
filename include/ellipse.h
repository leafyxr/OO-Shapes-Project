#pragma once
#include <SFML/Graphics.hpp>
class ellipse : public sf::Drawable
{
private:
	sf::VertexArray va_Triangle;
	float fXPos = 512;
	float fYPos = 400;
	float fBase = 50;
	float fHeight = 50;
public:
	void calculateVertices();
	ellipse();
	ellipse(float Xpos, float YPos, float Base, float Height);
	~ellipse();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

