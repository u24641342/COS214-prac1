#ifndef EXPORTCANVAS_H
#define EXPORTCANVAS_H
#include <iostream>
#include "Canvas.h"

class ExportCanvas {
    public:
        ExportCanvas(Canvas* canvas) : canvas(canvas) {}
        ~ExportCanvas();
        void exportToFile();
    protected:
        Canvas* canvas;
    private:
        void prepareCanvas();
        void renderElements();
        virtual void saveToFile() = 0;
};

class PNGExporter : public ExportCanvas {
    public:
        PNGExporter(Canvas* canvas) : ExportCanvas(canvas) {}
        void prepareCanvas();
        void renderElements();
        void saveToFile() override;
};

class PDFExporter : public ExportCanvas {
    public:
        PDFExporter(Canvas* canvas) : ExportCanvas(canvas) {}
        void prepareCanvas();
        void renderElements();
        void saveToFile() override;
};

#endif