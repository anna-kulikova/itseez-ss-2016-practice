#include "workaround.hpp"

#include <cstddef>

using namespace std;

void MatrixProcessor::Threshold(unsigned char* const data, const int width,
                                const int height, const int threshold)
{
	if (width <= 0)
		throw ("Incorrect width");
	if (height <= 0)
		throw ("Incorrect height");
	if (threshold < 0)
		throw ("Incorrect threshold");
	if (data == 0)
		throw ("Incorrect data");
	int i = 0;
	int size = width*height;
	for (; i < size; i++)
		if (data[i] < threshold)
			data[i] = 0;
}
