/*! \class dot.h
* \brief Used to draw a single dot
*
*/
/*! \file dot.h
* \brief Header file for dot Class
*
*/
#pragma once
#include <SFML/Graphics.hpp>
class dot : public sf::Drawable
{
private:
	sf::VertexArray va_dot;//!< Object to be drawn
	float fXPos = 512;//!< X Position
	float fYPos = 400;//!< Y Position
	sf::Color color = sf::Color::Red;//!< color of the object
public:
	//! Calculates and sets the position and color of each Vertex
	void calculateVertices();
	//! Constructs the object with default paramaters
	dot();
	//! Constructs the object with set paramaters
	/*!
	\param XPos X position.
	\param YPos Y position.
	\param NewColor Color.*/
	dot(float XPos, float YPos, sf::Color NewColor);
	//! Deconstructor
	~dot();
	//! Draws the Object
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

