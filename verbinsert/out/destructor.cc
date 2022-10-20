#include "out.ih"

Out::~Out()
{
    if (not d_verb)
        return;

    if (d_nLines)
    {
        if (d_verbEndl)
        {
            nl();
            cout << d_vindent;
        }

        cout << ")\n";
    }
}
