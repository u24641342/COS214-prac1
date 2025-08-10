#ifndef EXPORTCANVAS_H
#define EXPORTCANVAS_H
#include <iostream>
#include "Canvas.h"

class ExportCanvas {
    public:
        ExportCanvas(Canvas* canvas) : canvas(canvas) {}
        ~ExportCanvas();
        void exportToFile() const;
        
    protected:
        Canvas* canvas;
    private:
        virtual void prepareCanvas() const = 0;
        virtual void renderElements() const = 0;
        virtual void saveToFile() const = 0;
};

class PNGExporter : public ExportCanvas {
    public:
        PNGExporter(Canvas* canvas) : ExportCanvas(canvas) {}
        void prepareCanvas() const override;
        void renderElements() const override;
        void saveToFile() const override;
};

class PDFExporter : public ExportCanvas {
    public:
        PDFExporter(Canvas* canvas) : ExportCanvas(canvas) {}
        void prepareCanvas() const override;
        void renderElements() const override;
        void saveToFile() const override;
};

#endif