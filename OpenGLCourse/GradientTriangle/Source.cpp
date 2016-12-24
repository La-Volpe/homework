// Gradient Triangle by babak-ss

#include <glut.h>
void init()
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
}
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(-0.5, -0.5);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(0.5, -0.5);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(0.0, 0.5);
	glEnd();
	glPopMatrix();
	glutSwapBuffers();
}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(400, 400);
	glutCreateWindow("Gradiant Triangle");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}