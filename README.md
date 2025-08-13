# minimum_cmake_test


CMakeLists.txt
这个主要是为了测试COMPONENTS收到一些乱七八糟的组件的时候怎么办
但是测出来发现Eiegn库即使加了乱七八糟实际上不存在的组件，给COMPONENTS加了REQUIRED关键字，但是其实也不会报错，所以很奇怪

而且Eigen3现在我也不知道是不是走的是新模式还是老模式，所以也需要有一种判断的方法..............