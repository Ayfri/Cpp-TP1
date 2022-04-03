#include "utils.hpp"

std::string tolower(std::string &string) {
	std::transform(string.begin(), string.end(), string.begin(), [](unsigned char c) {
		return std::tolower(c);
	});
	return string;
}