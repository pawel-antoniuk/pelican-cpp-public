#pragma once
#include "mesh.h"
#include "texture.h"

#include <vector>
#include <tuple>

namespace pelican {
	class model {
		using parts_container = std::vector<std::tuple<mesh, texture>>;
	public:
		explicit model(const char* buf);
		parts_container& parts() { return _parts; }
	private:
		parts_container _parts;
	};
}