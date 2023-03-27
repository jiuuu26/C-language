#define CRT_SECURE_NO_WAWRNINGS
#include <stdio.h>

typedef struct point {
	int xpos;
	int ypos;
} Point;

typedef struct rect {
	Point left;
	Point right;
}Rectangle;

void Width(Rectangle *rect1) {

	int wid = ((rect1->right).xpos - (rect1->left).xpos) * ((rect1->right).ypos - (rect1->left).ypos);
	printf("%d", wid);
}
int main(void) {
	Rectangle rectangle;
	(rectangle.left).xpos = 0;
	(rectangle.left).ypos = 0;
	(rectangle.right).xpos = 100;
	(rectangle.right).ypos = 100;

	Width(&rectangle);
}