#pragma once
#include "pelican_debug.h"

#include <utility>
#include <memory>

namespace pelican {
	class scene;
	struct impl {
		class resrouce_provider {
			friend struct impl;
		public:
			resrouce_provider() : handle(nullptr) {}
			resrouce_provider(resrouce_provider&& rp) : handle(std::move(rp.handle)) {}
			resrouce_provider(const resrouce_provider&) = delete;
		protected:
			class handle_t {
			public:
				virtual ~handle_t() {}
			};
			std::unique_ptr<handle_t> handle;
		};
	};
}