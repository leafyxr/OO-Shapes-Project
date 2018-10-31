/*! \class ellipse.h
* \brief Used to draw ellipse Shapes
*
*/
/*! \file ellipse.h
* \brief Header file for ellipse Class
*
*/
#pragma once
#include <SFML/Graphics.hpp>
class ellipse : public sf::Drawable
{
private:
	sf::VertexArray va_Ellipse;//!< Object to be drawn
	float fXPos = 512;//!< X Position
	float fYPos = 400;//!< Y Position
	float fXRadius = 50;//!< Radius for the X Axis
	float fYRadius = 50;//!< Radius for the Y Axis
	int iVertexCount = 40;//!< Number of Vertices to be Drawn
	sf::Color color = sf::Color::Red;//!< Color of the object
public:
	//! Calculates and sets the position and color of each Vertex
	void calculateVertices();
	//! Constructs the object with default paramaters
	ellipse();
	//! Constructs the object with set paramaters
	/*!
	\param XPos X position.
	\param YPos Y position.
	\param XRadius Radius on the X axis.
	\param YRadius Radius on the Y axis.
	\param NewColor Color of Shape.*/
	ellipse(float XPos, float YPos, float XRadius, float YRadius, sf::Color NewColor);
	//! Deconstructor
	~ellipse();
	//! Draws the Object
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

