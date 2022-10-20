#include "out.ih"

void Out::firstInsert(std::string const &line)
{
    if (d_verb)
        cout << d_vindent << "verb(";

    d_nl = d_verbEndl ? "\n" : "";

    d_insert = d_line;
    insert(line);
}
