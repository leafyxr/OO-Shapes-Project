#pragma once
#include <SFML/Graphics.hpp>
class dot : public sf::Drawable
{
private:
	sf::VertexArray va_dot;
	float fXPos = 512;
	float fYPos = 400;
public:
	void calculateVertices();
	dot();
	dot(float Xpos, float YPos);
	~dot();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

