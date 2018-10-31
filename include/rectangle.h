/*! \class rectangle.h
* \brief Used to draw rectangle Shapes
*
*/
/*! \file rectangle.h
* \brief Header file for rectangle Class
*
*/
#pragma once
#include <SFML/Graphics.hpp>
class rectangle : public sf::Drawable
{
private:
	sf::VertexArray va_Rectangle;//!< Object to be drawn
	float fXPos = 512;//!< X Position
	float fYPos = 400;//!< Y Position
	float fBase = 50;//!< Base length of the object
	float fHeight = 50;//!< Height of the object
	sf::Color color = sf::Color::Red;//!< color of the object
public:
	//! Calculates and sets the position and color of each Vertex
	void calculateVertices();
	//! Constructs the object with default paramaters
	rectangle();
	//! Constructs the object with set paramaters
	/*!
	\param XPos X position.
	\param YPos Y position.
	\param Base length of the base of the object.
	\param Height height of the object.
	\param NewColor Color of Shape.*/
	rectangle(float XPos, float YPos, float Base, float Height, sf::Color NewColor);
	//! Deconstructor
	~rectangle();
	//! Draws the Object
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

