#include <iostream>
#include <GL/glew.h>
#include <SDL2/SDL.h>
#undef main
#include "display.h"

int main() {
	Display display(600, 400, "first Try");

	while (!display.IsClosed()) {
		glClearColor(0.0f, 0.15f, 0.3f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT);
		display.Update();
	}
	return 0;
}