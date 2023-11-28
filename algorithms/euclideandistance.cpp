// Calculate euclidean distance between 2 points
auto dist = [](int x1, int y1, int x2, int y2) {
	return sqrt((x1-x2) * (x1-x2) + (y1-y2) * (y1-y2));
};