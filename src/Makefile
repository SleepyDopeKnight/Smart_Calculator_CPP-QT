.PHONY: all dist install uninstall dist dvi gcov_report clean check rebuild
CXX = g++ -std=c++17
CXXFLAGS = -Wall -Werror -Wextra -g
OS = $(shell uname -s)
TEST_FLAGS = -o test.out -lgtest

ifeq ($(OS), Linux)
	TEST_FLAGS += -lpthread
endif

# all: tests gcov_report check install dvi
all: tests gcov_report 

tests: tests.cc
	$(CXX) $(CXXFLAGS) tests.cc ./model/model_smart_calc.cc $(TEST_FLAGS)
	./test.out

dvi:
	touch readme.dvi
	@(echo "1. В умном калькуляторе можно нажимать кнопки с клавиатуры(числа, операторы, скобки, вычисление(Enter), AC(del)), кроме функций, графиков и открытия других калькуляторов. Чтобы можно было вводить с клавиатуры, нужно ЛКМ нажать в область графика.\n2. Кредитный и Депозитный калькуляторы могут производить расчет при нажатии клавиши Enter и имеют привязку к клавишам(кнопки подписаны) кредитный -F1, депозитный - F1/F2.\n3. Чтобы установить калькулятор - make install, для удаления - make uninstall, создать архив с дистрибьютором - make dist, для удаления ненужных файлом - make clean." > readme.dvi)

dist:
	rm -rf archive_smart_calc/
	mkdir archive_smart_calc/
	mkdir archive_smart_calc/src/
ifeq ($(OS), Darwin)
	cp -r ./build/Smart_Calculator.app archive_smart_calc/src/
else
	cp -r ./build/Smart_Calculator archive_smart_calc/src/
endif
	tar cvzf archive_smart_calc.tgz archive_smart_calc/
	rm -rf archive_smart_calc/

install:
	cd view && qmake && make && make clean && rm Makefile && cd ../ && mkdir build
ifeq ($(OS), Darwin)
	mv view/Smart_Calculator.app build
else
	mv view/Smart_Calculator build
endif

uninstall:
	rm -rf build*

gcov_report:  
	$(CXX) $(CXXFLAGS) -fprofile-arcs -ftest-coverage tests.cc ./model/model_smart_calc.cc $(TEST_FLAGS)
	./test.out
	lcov -t "test" -o test.info --no-external -c -d .
	genhtml -o report test.info
ifeq ($(OS), Darwin)
	open ./report/index.html
else
	xdg-open ./report/index.html
endif

clean:
	rm -rf *.out *.gcda *.gcno *.a *.info *.o report *.dSYM .DS_Store *.dvi
	rm -rf ./model/*.out ./model/*.gcda ./model/*.gcno ./model/*.a ./model/*.info ./model/*.o report ./model/*.dSYM ./model/.DS_Store
	rm -rf ./view/*.out ./view/*.gcda ./view/*.gcno ./view/*.a ./view/*.info ./view/*.o report ./view/*.dSYM ./view/.q* ./view/.DS_Store ./view/moc*
	rm -rf ./controller/*.out ./controller/*.gcda ./controller/*.gcno ./controller/*.a ./controller/*.info ./controller/*.o report ./controller/*.dSYM ./controller/.DS_Store

check:
	clang-format -style=google -i ./model/*.cc ./model/*.h
	clang-format -style=google -n ./model/*.cc ./model/*.h
	clang-format -style=google -i ./view/*.cc ./view/*.h
	clang-format -style=google -n ./view/*.cc ./view/*.h
	clang-format -style=google -i ./controller/*.cc ./controller/*.h
	clang-format -style=google -n ./controller/*.cc ./controller/*.h
	cppcheck ./model/*.cc
	cppcheck ./view/view_*.cc
	cppcheck ./controller/*.cc
ifeq ($(OS), Darwin)
	CK_FORK=no leaks --atExit -- ./test.out
else
	valgrind --trace-children=yes --track-fds=yes --track-origins=yes --leak-check=full --show-leak-kinds=all ./test.out
endif

rebuild: clean all
