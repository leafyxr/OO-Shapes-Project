#pragma once
#include <SFML/Graphics.hpp>
class rectangle : public sf::Drawable
{
public:
private:
	sf::VertexArray va_Rectangle;
	float fXPos = 512;
	float fYPos = 400;
	float fBase = 50;
	float fHeight = 50;
public:
	void calculateVertices();
	rectangle();
	rectangle(float Xpos, float YPos, float Base, float Height);
	~rectangle();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

