#include <algorithm>

struct Color{
	float r{0.0f};
	float g{0.0f};
	float b{0.0f};

	Color opeator+(const Color& other) const{
		return{ r+other.r, g+other.g, b+other.b };
	}
	Color opeator*(float scalar) const{
		return{ r*scalar, g*scalar, b*scalar };
	}
	Color clamped() const{
		return{ std::clamp(r,0.0f,1.0f), std::clamp(g,0.0f,1.0f), std::clamp(b,0.0f,1.0f)};
	}
};
