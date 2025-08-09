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
        void saveToFile() const override;
};

class PDFExporter : public ExportCanvas {
    public:
        void saveToFile() const override;
};

#endif