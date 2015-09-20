void insertfirst (list *l, address p)
{
    if (first(*l) == nil)
    {
        first(*l) = p;
    }
    else
    {
        next(p) = first(*l);
        first(*l) = p;
    }
}

void insertlast (list *l, address p)
{
    address q;

    if (first(*l) == nil)
    {
        first(*l) = p;
    }
    else
    {
        q = first(*l);
        while (next(q) != nil)
        {
            q = next(q);
        }
        next(q) = p;
    }
}
