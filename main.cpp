#include "src/framebuffer.h"

void render() {
    Framebuffer framebuffer(800, 600);
    Color clearColor(0x00, 0x00, 0x00);

    framebuffer.clear(clearColor);

    // Poligono 1
    Color fillColor(0xFF, 0xFF, 0x00);       // Color de relleno (amarillo)
    Color borderColor(0xFF, 0xFF, 0xFF);     // Color de contorno (verde)
    std::vector<Vertex> poligono1{
            {165.0, 380.0},
            {185.0, 360.0},
            {180.0, 330.0},
            {207.0, 345.0},
            {233.0, 330.0},
            {230.0, 360.0},
            {250.0, 380.0},
            {220.0, 385.0},
            {205.0, 410.0},
            {193.0, 383.0}
    };

    // Poligono 2

    Color fillColor2(0, 0, 255);       // Relleno azul
    Color borderColor2(255, 255, 255); // Borde blanco
    std::vector<Vertex> vertices{
            {321.0, 335.0},
            {288.0, 286.0},
            {339.0, 251.0},
            {374.0, 302.0}
    };

    // Poligono 3
    Color fillColor3(255, 0, 0);         // Relleno rojo
    Color borderColor3(255, 255, 255);  // Borde blanco
    std::vector<Vertex> poligono3{
            {377.0, 249.0},
            {411.0, 197.0},
            {436.0, 249.0}
    };

    framebuffer.drawPolygon(poligono3, fillColor3, borderColor3);


    framebuffer.drawPolygon(poligono1, fillColor, borderColor);
    framebuffer.drawPolygon(vertices, fillColor2, borderColor2);
    framebuffer.drawPolygon(poligono3, fillColor3, borderColor3);

    framebuffer.renderBuffer();
}

int main() {

    render();

    return 0;
}
