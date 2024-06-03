//
// Created by MichaelBrunner on 03/06/2024.
//

export module mod.Test;

export int addOne(const int x)
{
    return x + 1;
}

export template<int N> struct powTwo
{
    static const int value{2 * powTwo<N - 1>::value};
};

export template<> struct powTwo<0>
{
    static constexpr int value{1};
};
