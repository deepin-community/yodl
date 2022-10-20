#include "out.ih"

void Out::numberedLine(std::string const &line)
{
    nl();
    cout << d_indent << setw(2) << ++d_number << ": " << line;
}
