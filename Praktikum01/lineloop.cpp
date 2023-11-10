#include <Windows.h>
#ifdef _APPLE_


#else
#include <GL/glut.h>
#endif // _APPLE_
#include<stdio.h>
#include <stdlib.h>
#include <math.h> // Tambahkan header math.h
#include <stdlib.h>

void init(void);
void display(void);

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("My First OpenGL Application");
    init();
    glutDisplayFunc(display);  // Register the display callback function
    glutMainLoop();  // Enter the GLUT event loop
    return 0;
}

void init(void) {
    glClearColor(1.0, 1.0, 1.0, 1.0);  // Set the background color to black
    glColor3f(0.0, 0.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-100.0, 100.0, -100.0, 100.0, -100.0, 100.0);
}



void display(void) {

    glClear(GL_COLOR_BUFFER_BIT);


    //Line loop
    glBegin(GL_LINE_LOOP);

    glVertex2i(20, 10);
    glVertex2i(50, 10);
    glVertex2i(20, 80);
    glVertex2i(50, 80);
    glEnd();

    glutSwapBuffers();


}
