#ifndef EXPORTCANVAS_H
#define EXPORTCANVAS_H
#include <iostream>
class ExportCanvas {
    public:
        // Method to export the canvas to a file
        void exportToFile() const;

        // Method to export the canvas to a specific format
        void prepareCanvas() const;

        // Method to set the canvas properties before exporting
        void renderElements() const;
        
        virtual void saveToFile() const = 0;
        // Destructor
        ~ExportCanvas();
};

class PNGExporter : public ExportCanvas {
    public:
        void saveToFile() const override {
            std::cout << "Saving canvas as PNG file." << std::endl;
            // Implementation for saving as PNG
        }
};

class PDFExporter : public ExportCanvas {
    public:
        void saveToFile() const override {
            std::cout << "Saving canvas as PDF file." << std::endl;
            // Implementation for saving as PDF
        }
};

#endif