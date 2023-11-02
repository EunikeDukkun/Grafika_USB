#include <GL/glut.h>
#include <cmath>

void drawCircle(float x, float y, float radius, int segments) {
    glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i < segments; i++) {
        float theta = 2.0f * 3.1415926f * float(i) / float(segments);
        float dx = radius * cosf(theta);
        float dy = radius * sinf(theta);
        glVertex2f(x + dx, y + dy);
    }
    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Menggambar bendera Palestina
    glColor3f(0.0, 0.0, 0.0); // Baris pertama berwarna hitam
    glBegin(GL_QUADS);
    glVertex2f(-0.25, 0.25);
    glVertex2f(0.25, 0.25);
    glVertex2f(0.25, 0.0833); // Memisahkan baris pertama dan kedua
    glVertex2f(-0.25, 0.0833);
    glEnd();

    glColor3f(1.0, 1.0, 1.0); // Baris kedua berwarna putih
    glBegin(GL_QUADS);
    glVertex2f(-0.25, 0.0833);
    glVertex2f(0.25, 0.0833);
    glVertex2f(0.25, -0.0833); // Memisahkan baris kedua dan ketiga
    glVertex2f(-0.25, -0.0833);
    glEnd();

    glColor3f(0.0, 0.4, 0.0); // Baris ketiga berwarna hijau
    glBegin(GL_QUADS);
    glVertex2f(-0.25, -0.0833);
    glVertex2f(0.25, -0.0833);
    glVertex2f(0.25, -0.25);
    glVertex2f(-0.25, -0.25);
    glEnd();

    glColor3f(1.0, 0.0, 0.0); // Segitiga berwarna merah
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.25, -0.2511);  // Titik kiri atas segitiga
    glVertex2f(-0.1000, 0.0000);   // Titik atas segitiga
    glVertex2f(-0.25, 0.2511);   // Titik kanan atas segitiga
    glEnd();

    glutSwapBuffers();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Bendera Palestina");

    glClearColor(1.0, 1.0, 1.0, 0.0);

    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
