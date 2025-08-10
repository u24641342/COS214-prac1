
filesToDelete = main list task todo weekly priority history manager
filesToCompile = main.cpp list.cpp task.cpp todo.cpp weekly.cpp priority.cpp history.cpp manager.cpp 
filesInCoverageReport = main list task todo weekly priority history manager 

main:
	g++ -g -std=c++98 ${filesToCompile} -o main

clean:
	rm *.o *.gcov *.gcda *.gcno *.gz *.html *.css output.txt coverage.txt -f ${filesToDelete}

coverage:
	make clean
	g++ -g --coverage -dumpbase '' ${filesToCompile} -o main
	./main > outputXD.txt
	gcov -f -m -r -j ${filesInCoverageReport} > coverage.txt 
	gcovr --html-details output.html
	#make clean

valgrind:
	make clean
	make
	valgrind --track-origins=yes --leak-check=full --keep-stacktraces=alloc-and-free --error-exitcode=1 --log-file=valgrind.txt ./main > output.txt
