/*! \class line.h
* \brief Used to draw lines
*
*/
/*! \file line.h
* \brief Header file for line Class
*
*/
#pragma once
#include <SFML/Graphics.hpp>
class line : public sf::Drawable
{
private:
	sf::VertexArray va_Line;//!< Object to be drawn
	float fXPosA = 512;//!< X Position of point A
	float fYPosA = 400;//!< Y Position of point A
	float fXPosB = 512;//!< X Position of point B
	float fYPosB = 200;//!< Y Position of Point B
	sf::Color color = sf::Color::Red;//!< color of the object
public:
	//! Calculates and sets the position and color of each Vertex
	void calculateVertices();
	//! Constructs the object with default paramaters
	line();
	//! Constructs the object with set paramaters
	/*!
	\param XPosA X position of point A.
	\param YPosA Y position of point A.
	\param XPosB X position of point B.
	\param YPosB Y position of point B.
	\param NewColor Color of Shape.*/
	line(float XPosA, float YPosA, float XPosB, float YPosB, sf::Color NewColor);
	//! Deconstructor
	~line();
	//! Draws the Object
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

