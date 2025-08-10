
filesToDelete = TestingMain Canvas ExportCanvas
filesToCompile = TestingMain.cpp Canvas.cpp ExportCanvas.cpp
filesInCoverageReport = TestingMain Canvas ExportCanvas

main:
	g++ -g -std=c++11 ${filesToCompile} -o TestingMain

clean:
	rm *.o *.gcov *.gcda *.gcno *.gz *.html *.css output.txt coverage.txt -f ${filesToDelete}

coverage:
	make clean
	g++ -g --coverage -dumpbase '' ${filesToCompile} -o TestingMain
	./TestingMain > outputXD.txt
	gcov -f -m -r -j ${filesInCoverageReport} > coverage.txt 
	gcovr --html-details output.html
	#make clean

valgrind:
	make clean
	make
	valgrind --track-origins=yes --leak-check=full --keep-stacktraces=alloc-and-free --error-exitcode=1 --log-file=valgrind.txt ./main > output.txt
