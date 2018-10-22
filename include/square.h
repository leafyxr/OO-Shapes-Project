#pragma once
#include <SFML/Graphics.hpp>
class square : public sf::Drawable
{
private:
	sf::VertexArray va_Square;
	float fXPos = 512;
	float fYPos = 400;
	float fLength = 50;
public:
	void calculateVertices();
	square();
	square(float Xpos, float YPos, float Length);
	~square();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

