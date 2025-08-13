# minimum_cmake_test


CMakeLists.txt
find_package without `NO_MODULE`
```bash
find_package(Boost REQUIRED COMPONENTS system filesystem)
```
![1755057303616](image/README/1755057303616.png)

---
find_package with `NO_MODULE`
```bash
find_package(Boost REQUIRED COMPONENTS system filesystem)
```
![1755058201049](image/README/1755058201049.png)