#include "ExportCanvas.h"


void ExportCanvas::exportToFile() const {
    // Implementation for exporting the canvas to a file
    prepareCanvas();
    renderElements();
    saveToFile();
}

void ExportCanvas::prepareCanvas() const {
    // Implementation for preparing the canvas
    std::cout << "Preparing canvas for export." << std::endl;
}

void ExportCanvas::renderElements() const {
    // Implementation for rendering elements on the canvas
    std::cout << "Rendering elements on the canvas." << std::endl;
}

ExportCanvas::~ExportCanvas() {
    // Destructor implementation
    std::cout << "ExportCanvas destructor called." << std::endl;
}

