#include "out.ih"

void Out::plainLine(std::string const &line)
{
    nl();
    cout << d_indent << line;
}
