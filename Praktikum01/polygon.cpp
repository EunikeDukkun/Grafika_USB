#include <Windows.h>
#ifdef APPLE


#else
#include <GL/glut.h>
#endif // APPLE
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
    glClearColor(0.0, 0.0, 0.0, 0.0);  // Set the background color to black
    //glColor3f(0.0, 0.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-10.0, 10.0, -10.0, 10.0, -10.0, 10.0);
}



void display(void) {

    glClear(GL_COLOR_BUFFER_BIT);

    //menggambar segitiga
    glBegin(GL_TRIANGLES);
    glColor3f(0.0, 1.0, 0.0);
    glVertex3i(1, 4, 0);
    glVertex3i(5, 8, 0);
    glVertex3i(6, -8, 0);
    glEnd();

    //membuat polygon
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3i(-7, 4, 0);
    glVertex3i(-5, 3, 0);
    glVertex3i(7, -8, 0);
    glVertex3i(2, 6, 0);
    glEnd();

    glutSwapBuffers();






}