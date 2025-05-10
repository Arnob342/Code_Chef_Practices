#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h



void All()
{

	glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
	glLineWidth(4.2);
	glBegin(GL_LINES);  // Each set of 4 vertices form a quad
	glColor3f(0, 0, 0); // Black colour
    // X-axis (-6 to 6)
    glVertex2f(-6.0f, 0.0f);
    glVertex2f(6.0f, 0.0f);
    // Y-axis (-6 to 6)
    glVertex2f(0.0f, -6.0f);
    glVertex2f(0.0f, 6.0f);
    glEnd();


    glBegin(GL_TRIANGLES);  // Triangle Shape(axis ++ )
	glColor3ub(0, 128, 0); // Green colour
	glVertex2f(3,3);
	glVertex2f(3,1);
	glVertex2f(4.4,2);
	glEnd();
	glBegin(GL_QUADS);  // quads Shape( axis ++ )
	glColor3ub(0, 128, 0); //Green Colour
	glVertex2f(1.01,2.43);
	glVertex2f(3,2.45);
	glVertex2f(3.04,1.64);
	glVertex2f(1.01,1.64);
	glEnd();



    glBegin(GL_QUADS);  // Square Shape (axis -+)
	glColor3ub(255, 0, 0); // Red colour
	glVertex2f(-3,3);
	glVertex2f(-1,3);
	glVertex2f(-1,1);
	glVertex2f(-3,1);
	glEnd();



    glBegin(GL_TRIANGLES);  // Triangles Shape (axis --)
	glColor3ub(128, 0, 128); // purple colour
	glVertex2f(-3,-2);
	glVertex2f(-1,-1);
	glVertex2f(-1,-3);
	glEnd();



    glBegin(GL_TRIANGLES);  // Triangle Shape(axis +- )
	glColor3ub(255, 255, 0); // Yellow colour
	glVertex2f(2,-1);
	glVertex2f(1,-3);
	glVertex2f(3,-3);
	glEnd();

}


/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
     glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to white
     glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color

    All();// function Call
    glEnd();
	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);          // Initialize GLUT
	glutCreateWindow("Square, Triangle & quards");  // Create window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display);       // Register callback handler for window re-paint event                      // Our own OpenGL initialization
	gluOrtho2D(-5,5,-6,6);
	glutMainLoop();                 // Enter the event-processing loop
	return 0;
}

