C++에서 제공하는 STL (Standard Template Library)는, 알고리즘 / 자료구조 / 이터레이터 / 펑터를 제공해줍니다. 

1. 알고리즘
- 정렬, 탐색 등에 관한 함수로 이루어졌다. 
- ex: sort()

<br>

2. 자료구조 (컨테이너)
시퀀스 컨테이너, 연관 컨테이너, 정렬되지 않은 연관 컨테이너, 컨테이너 어댑터

- 시퀀스 컨테이너(sequence container) 
    - **데이터 단순 저장** 자료구조
    - array, vector, deque, forward_list, list

- 연관 컨테이너 (associate container)
    - 자료가 저장됨에 따라 + **자동정렬**되는 자료구조
    - 중복키가 가능한 것은, 이름에 multi가 붙음
    - set, map, multiset, multimap

- 정렬되지 않은 연관 컨테이너 (unordered associative container)
    - 자료가 저장됨에 따라 + **자동정렬 X** 자료구조
    - unordered_set, unordered_map, unordered_multiset, unordered_multimap

- 컨테이너 어댑터 (container adapter)
    - 시퀀스 컨테이너를 이용해 만든 자료구조
    - deque로 만들어진 stack, queue // vector로 만들어진 priority_queue

차후에 자료구조 자세히 배운다. 일단 이런 게 있구나 !

<br>

3. 이터레이터
추후에 배운다.

4. 펑터
펑터란, 함수 호출 연산자를 오버로드하는, 클래스의 인스턴스. 
여기서는 배우지 않습니다.


