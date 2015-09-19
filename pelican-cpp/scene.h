#pragma once
#include "model.h"

#include <vector>

namespace pelican {
	class camera {};

	class scene {
		using models_container = std::vector<model>;
	public:
		scene() = default;
		scene(const scene&) = delete;
		scene(scene&&) = default;
		models_container& models() { return _models; }
		void draw() const;
		camera camera;
	private:
		models_container _models;
	};
}