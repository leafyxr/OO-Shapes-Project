/*! \class circle.h
* \brief Used to draw circle Shapes
*
*/
/*! \file circle.h
* \brief Header file for circle Class
*
*/
#pragma once
#include <SFML/Graphics.hpp>
class circle : public sf::Drawable
{
private:
	sf::VertexArray va_Circle;//!< Object to be drawn
	float fXPos = 512;//!< X Position
	float fYPos = 400;//!< Y Position
	float fRadius = 50;//!< Radius
	int iVertexCount = 40;//!< total number of vertices to be drawn
	sf::Color color = sf::Color::Red;//!< color of the object
public:
	//! Calculates and sets the position and color of each Vertex
	void calculateVertices();
	//! Constructs the object with default paramaters
	circle();
	//! Constructs the object with set paramaters
	/*!
	\param XPos X position.
	\param YPos Y position.
	\param Radius Radius of the circle.
	\param NewColor Color of Shape.*/
	circle(float XPos, float YPos, float Radius, sf::Color NewColor);
	//! Deconstructor
	~circle();
	//! Draws the Object
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

