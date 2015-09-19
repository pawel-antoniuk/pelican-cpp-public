#pragma once
#include "pelican_impl.h"

namespace pelican {
	class mesh : public impl::resrouce_provider {
	public:
		explicit mesh(const char* buf);
	};
}