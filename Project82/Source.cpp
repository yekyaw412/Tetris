#include <iostream>
#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>

using namespace std;
void disp() {
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);

	glColor3d(1.0, 0.0, 0.0);
	glVertex2d(0.9, -0.9);

	glColor3d(1.0, 2.0, 0.0);
	glVertex2d(0.9, -0.9);

	glColor3d(0.0, 0.0, 1.0);
	glVertex2d(0.9, 0.9);

	glColor3d(1.0, 1.0, 0.0);
	glVertex2d(-0.9, 0.9);

	glEnd();
	glFlush();
}

int main(int argc, char ** argv)
{	
	glutInit(&argc, argv);
	glutInitWindowPosition(100, 50);
	glutInitWindowSize(300, 300);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);

	glutCreateWindow("Hellow GLUT!!");
	glutDisplayFunc(disp);
	glutMainLoop();


}