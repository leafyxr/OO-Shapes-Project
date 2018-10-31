/*! \class square.h
* \brief Used to draw square Shapes
*
*/
/*! \file square.h
* \brief Header file for square Class
*
*/
#pragma once
#include <SFML/Graphics.hpp>
class square : public sf::Drawable
{
private:
	sf::VertexArray va_Square;//!< Object to be drawn
	float fXPos = 512;//!< X Position
	float fYPos = 400;//!< Y Position
	float fLength = 50;//!< length of the sides
	sf::Color color = sf::Color::Red;//!< color of the object
public:
	//! Calculates and sets the position and color of each Vertex
	void calculateVertices();
	//! Constructs the object with default paramaters
	square();
	//! Constructs the object with set paramaters
	/*!
	\param XPos X position.
	\param YPos Y position.
	\param Length size of the Square.
	\param NewColor Color of Shape.*/
	square(float XPos, float YPos, float Length, sf::Color NewColor);
	//! Deconstructor
	~square();
	//! Draws the Object
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

