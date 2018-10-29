/*! \file arc.h 
* Used to draw an arc shape
* Can set position, color, dimensions and start/end angle
*/
#pragma once
#include <SFML/Graphics.hpp>
class arc : public sf::Drawable
{
private:
	sf::VertexArray va_Arc;
	float fXPos = 512;
	float fYPos = 400;
	float fXRadius = 50;
	float fYRadius = 50;
	float fStartTheta = 0;
	float fEndTheta = 2;
	int iVertexCount = 40;
	sf::Color color = sf::Color::Red;
public:
	//! Calculates and sets the position and color of each Vertex
	void calculateVertices();
	//! Constructs the object with default paramaters
	arc();
	//! Constructs the object with set paramaters
	/*! 
	\param Xpos X position.
	\param Ypos Y position.
	\param XRadius Radius on the X axis. 
	\param YRadius Radius on the Y axis.
	\param StartTheta Start Angle in Radians.
	\param EndTheta End Angle in Radians.
	\param NewColor Color of Shape.*/ 
	arc(float Xpos, float YPos, float XRadius, float YRadius, float StartTheta, float EndTheta, sf::Color NewColor);
	~arc();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

