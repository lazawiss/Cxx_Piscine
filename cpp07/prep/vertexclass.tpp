#include <iostream>
#include <string>


template< typename T = float >
class Vertex {

public:
    
    Vertex( T const & x, T const & y, T const & z ) : _x(x), _y(y), _z(z){ }
    ~Vertex() { }
    
    T const &   getX() const { return this->_x; }
    T const &   getY() const { return this->_y; }
    T const &   getZ() const { return this->_z; }
    
private:

    



};