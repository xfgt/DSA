#include "header/version.h"

const char* getCPPVersion()
{

    /*
        Visual Studio must enable compiler flag: /Zc:__cplusplus
        otherwise __cplusplus defaults to 199711L (cpp98) or something else unexpected from actual standard
        See: Configuration Properties -> C/C++ -> Command Line: /Zc:__cplusplus
    */ 
    

    constexpr long pre98 = 1;
    constexpr long cpp98 = 199711L;
    constexpr long cpp11 = 201103L;
    constexpr long cpp14 = 201402L;
    constexpr long cpp17 = 201703L;
    constexpr long cpp20 = 202002L;
    constexpr long cpp23 = 202302L;
    

    // Warning C4984 'if constexpr' is a C++17 language extension
    if constexpr (__cplusplus == cpp23) return "C++23";
    else if constexpr (__cplusplus == cpp20) return "C++20";
    else if constexpr (__cplusplus == cpp17) return "C++17";
    else if constexpr (__cplusplus == cpp14) return "C++14";
    else if constexpr (__cplusplus == cpp11) return "C++11";
    else if constexpr (__cplusplus == cpp98) return "C++98";
    else if constexpr (__cplusplus == pre98) return "Pre-C++98";
    else return "Draft or pre-standardized or unknown C++ version";


    return "";
}
