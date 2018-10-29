/*! \file line.h
* Used to draw a line
* Can set positions of two points and the color
*/
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
	sf::Color color = sf::Color::Red;
public:
	//! Calculates and sets the position and color of each Vertex
	void calculateVertices();
	//! Constructs the object with default paramaters
	line();
	//! Constructs the object with set paramaters
	/*!
	\param XposA X position of point A.
	\param YposA Y position of point A.
	\param XposB X position of point B.
	\param YposB Y position of point B.
	\param NewColor Color of Shape.*/
	line(float XposA, float YPosA, float XPosB, float YPosB, sf::Color NewColor);
	~line();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

