/*! \class arc.h
* \brief Used to draw Arcs
*
*/
/*! \file arc.h
* \brief Header file for arc Class
*
*/
#pragma once
#include <SFML/Graphics.hpp>
class arc : public sf::Drawable
{
private:
	sf::VertexArray va_Arc;//!< Object to be drawn
	float fXPos = 512;//!< X Position
	float fYPos = 400;//!< Y Position
	float fXRadius = 50;//!< Radius in the X direction
	float fYRadius = 50;//!< Radius in the Y direction
	float fStartTheta = 0;//!< start angle in radians
	float fEndTheta = 2;//!< end angle in radians
	int iVertexCount = 40;//!< total number of vertices to be drawn
	sf::Color color = sf::Color::Red;//!< color of the object
public:
	//! Calculates and sets the position and color of each Vertex
	void calculateVertices();
	//! Constructs the object with default paramaters
	arc();
	//! Constructs the object with set paramaters
	/*! 
	\param XPos X position.
	\param YPos Y position.
	\param XRadius Radius on the X axis. 
	\param YRadius Radius on the Y axis.
	\param StartTheta Start Angle in Radians.
	\param EndTheta End Angle in Radians.
	\param NewColor Color of Shape.*/ 
	arc(float XPos, float YPos, float XRadius, float YRadius, float StartTheta, float EndTheta, sf::Color NewColor);
	//! Deconstructor
	~arc();
	//! Draws the Object
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

