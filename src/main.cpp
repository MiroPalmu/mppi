#include <iostream>

#include "foo.hpp"

auto main([[maybe_unused]] int argc,[[maybe_unused]] char** argv) -> int {

	std::cout << foo::bar() << "\n";
}
