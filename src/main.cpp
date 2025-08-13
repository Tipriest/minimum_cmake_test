#include <boost/filesystem.hpp>
#include <iostream>

int main() {
    using namespace boost::filesystem;

    path p = ".";
    std::cout << "Listing current directory:" << std::endl;

    for (auto & entry : boost::make_iterator_range(directory_iterator(p), {})) {
        std::cout << entry.path().string() << std::endl;
    }

    std::cout << "Boost filesystem test finished." << std::endl;
    return 0;
}
