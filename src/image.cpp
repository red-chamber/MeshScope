#include "include/image.hpp"

namespace meshscope{

	Image::Image(int width,int height){
		if(width<=0||height<=0){
			throw std::invalid_argument("长和宽不能为负数!");
		}
			
	}

	int Image::width() const{
		
	}

}

namespace{

	std::uint8_t floatToByte(float value){
		float restrictedValue=clamp(value,(float)0.0,(float)1.0);
		std::uint8_t resByte;
		restrictedValue=restrictedValue*(float)255.0;
		resByte=(std::int8_t)lround(restrictedValue);
		return resByte;
	}

}
