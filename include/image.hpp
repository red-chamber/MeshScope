#include "include/color.hpp"
#include <vector>
#include <cstddef>
#include <string>
#include <stdexcept>

class Image{
	public:
		Image(int width,int height);

		[[nodiscard]] int width() const;
		[[nodiscard]] int height() const;

		void color(const Color& color);
		void setPixel(int x,int y,const Color& color);

		[[nodiscard]] const Color& getPixel(int x,int y) const;

		void savePPM(const std::string& path) const;
	
	private:
		[[nodiscard]] bool inBounds(int x,int y) const;
		[[nodiscard]] std::size_t index(int x,int y) const;

		int width_,heigth_;
		std::vector<Color> pixels_;

}
