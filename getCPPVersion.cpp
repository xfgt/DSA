#include <iostream>

// Visual Studio must enable compiler flag: /Zc:__cplusplus
// otherwise __cplusplus defaults to 199711L (cpp98) or something else unexpected from actual standard
// See: Configuration Properties -> C/C++ -> Command Line: /Zc:__cplusplus
int main()
{
    std::string result;

    constexpr long pre98 = 1;
    constexpr long cpp98 = 199711L;
    constexpr long cpp11 = 201103L;
    constexpr long cpp14 = 201402L;
    constexpr long cpp17 = 201703L;
    constexpr long cpp20 = 202002L;
    constexpr long cpp23 = 202302L;
    

    // Warning C4984 'if constexpr' is a C++17 language extension
    if constexpr (__cplusplus == cpp23) result = "C++23";
    else if constexpr (__cplusplus == cpp20) result = "C++20";
    else if constexpr (__cplusplus == cpp17) result = "C++17";
    else if constexpr (__cplusplus == cpp14) result = "C++14";
    else if constexpr (__cplusplus == cpp11) result = "C++11";
    else if constexpr (__cplusplus == cpp98) result = "C++98";
    else if constexpr (__cplusplus == pre98) result = "Pre-C++98";
    else                                     result = "Draft or pre-standardized or unknown C++ version";
    

    std::cout << result << std::endl;

    return 0;
}
