#include "SFML/Graphics.hpp"

class ShapePicker : public sf::Drawable
{
	// a dot • a line • a square • a triangle • a rectangle • a circle • an arc • an ellipse 
public:
	ShapePicker();
	~ShapePicker();
	void update();
	void draw(sf::RenderTarget& target, sf::RenderStates states);
};
