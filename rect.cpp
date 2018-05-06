#include <iostream>
using namespace std;

class Rectangle{
public:	
double surface() const {
		return height*width;		}
double getHeight() const{
	return height;	}		
double getWidth() const {
	return width;}		
	
void setHeight(double h){
	height = h;}	
void setWidth(double w){
	width = w;}	
private:
double height;
double width;	
	};
	
int main(){
Rectangle rect1;

rect1.setHeight(3.0);
rect1.setWidth(4.0);

cout << "height : "<< rect1.getHeight() << endl;

return 0;
	
	}	
	
	
	
