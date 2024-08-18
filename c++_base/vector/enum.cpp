#include <iostream>

enum class Color{red,blue,green};
enum class Traffic_light{green,yellow,red};
Traffic_light& operator++(Traffic_light& t){
	using enum Traffic_light;
	switch (t){
		case green: return t = yellow;
		case yellow: return t = red;
		case red: return t = green;
	}
}
int main(){
	Color col = Color::red;
	Traffic_light light = Traffic_light::red;

	
	return 0;
}