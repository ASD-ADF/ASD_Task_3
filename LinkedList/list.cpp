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

void insertafter (list *l, address p, address prec)
{
    next(p) = next(prec);
    next(prec) = p;
}

address searchelement(list l, infotype x)
{
    address p;
    int a=0;

    p=first(l);
    while ( p != nil)
    {
        if (strcmp(info(p).id,x.id) == 0)
        {
            a = 1;
            break;
        }
        else
        {
            p = next(p);
        }
    }
    if (a != 1)
    {
        p = nil;
    }
    return p;
}
