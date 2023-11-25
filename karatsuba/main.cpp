#include <iostream>
#include <vector>

std::vector<int> get_number(std::istream& is) {
    std::string snum;
    std::vector<int> vnum;
    
    is >> snum;
    
    for (auto it = snum.crbegin(); it != snum.crend(); ++it) {
        vnum.push_back(*it - '0');
    }
    
    return vnum;
}

//TODO adjusting to exponent of 2
void adjust_the_size(std::vector<int>& cnt, size_t n) {
    if (cnt.size() < n) {
        while (cnt.size() < n) {
            cnt.push_back(0);
        }
    }
}

std::vector<int> karatsuba(std::vector<int> x, std::vector<int> y) {
    size_t m_sz = std::max(x.size(), y.size());
    adjust_the_size(x, m_sz);
    adjust_the_size(y, m_sz);

    if (x.size() == 1 && y.size() == 1) {
        return { x[0] * y[0] };
    }
    std::vector<int> result;
    for (size_t i = 0; i < result.size(); ++i) {
        result[i] += y[i];
    }
    return result;
}

int main() {
    auto test = karatsuba(get_number(std::cin), get_number(std::cin));
    for (auto dig : test) {
        std::cout << dig;
    }
    std::cout << std::endl;
    return 0;
}
