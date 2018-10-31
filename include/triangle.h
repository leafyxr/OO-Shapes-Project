/*! \class triangle.h
* \brief Used to draw triangle Shapes
*
*/
/*! \file triangle.h
* \brief Header file for triangle Class
*
*/
#pragma once
#include "SFML/Graphics.hpp"
class triangle : public sf::Drawable
{
private:
	sf::VertexArray va_Triangle;//!< Object to be drawn
	float fXPos = 512;//!< X Position
	float fYPos = 400;//!< Y Position
	float fBase = 50;//!< Base Length
	float fHeight = 50;//!< Height Length
	sf::Color color = sf::Color::Red;//!< color of the object
public:
	//! Calculates and sets the position and color of each Vertex
	void calculateVertices();
	//! Constructs the object with default paramaters
	triangle();
	//! Constructs the object with set paramaters
	/*!
	\param XPos X position.
	\param YPos Y position.
	\param Base length of the base of the object.
	\param Height height of the object.
	\param NewColor Color of Shape.*/
	triangle(float XPos, float YPos, float Base, float Height, sf::Color NewColor);
	//! Deconstructor
	~triangle();
	//! Draws the Object
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

