#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

void Line()
{
    glBegin(GL_LINES);              // Each set of 4 vertices form a quad

	glVertex2f(1,3);
	glVertex2f(3,3);

	glVertex2f(1,3);
	glVertex2f(1,1);

	glVertex2f(3,3);
	glVertex2f(3,1);

	glVertex2f(1,1);
	glVertex2f(3,1);

}

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)// Draw a Red 1x1 Square centered at origin
    glColor3ub(0,0,0);
    Line();

	glEnd();
	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	gluOrtho2D(-5,5,-10,10);
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
