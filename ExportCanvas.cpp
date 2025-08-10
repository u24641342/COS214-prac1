#include "ExportCanvas.h"


void ExportCanvas::exportToFile() const {
    // Implementation for exporting the canvas to a file
    prepareCanvas();
    renderElements();
    saveToFile();
}

void ExportCanvas::prepareCanvas() const {
    std::cout << "Preparing canvas for export." << std::endl;
}

void ExportCanvas::renderElements() const {
    std::cout << "Rendering elements on the canvas." << std::endl;
}

void PNGExporter::saveToFile() const {
    std::cout << "Saving canvas as PNG file." << std::endl;
}

void PDFExporter::saveToFile() const {
    std::cout << "Saving canvas as PDF file." << std::endl;
}


ExportCanvas::~ExportCanvas() {
    std::cout << "ExportCanvas destructor called." << std::endl;
}

