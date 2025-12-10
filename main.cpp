#include <iostream>

int main() {
	// our actual image
	// image width and height are both 256 pixels, use of const to ensure
	// these values do not change
	int image_width = 256;
	int image_height = 256;

	// rendering
	// ppm header
	// outputs the string P3 (ascii ppm format identifier)
	// prints <width> <height> then new line
	std::cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";
	// first scanline of pixel data is the top row of the image
	// by looping j downward can make j = image_height-1 = TOP ROW
	// then j = 0 is BOTTOM ROW
	for (int j = 0; j < image_height; j++) {
		for (int i = 0; i < image_width; i++) {
			auto r = double(i)/(image_width-1);
			auto g = double(j)/(image_height-1);
			auto b = 0.0;

			int ir = int(255.999*r);
			int ig = int(255.999*g);
			int ib = int(255.999*b);

			std::cout << ir << ' ' << ig << ' ' << ib << '\n';
		}
	}
}
