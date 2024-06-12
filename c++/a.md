-- 엄격한 컴파일 명령어
-- a.cpp라는 파일을, 엄격하게(-wall) c++ 14버전으로 컴파일해서 test.out 파일을 만든다. (-o test.out)

g++ -std=c++14 -Wall a.cpp -o test.out