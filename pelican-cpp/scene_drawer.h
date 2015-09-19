#pragma once
#include "scene.h"

#include <functional>
#include <utility>
#include <memory>

/*namespace pelican {
	inline auto make_drawer(const scene& sc) {
		struct {
			void operator()() {
				scene.draw();
			}
			const scene& scene;
		} out{ sc };
		return out;
	}
	inline auto make_drawer(scene&& sc) {
		struct {
			void operator()() {
				scene->draw();
			}
			std::shared_ptr<scene> scene;
		} out{ std::make_shared<scene>(std::move(sc)) };
		return out;
	}
}*/