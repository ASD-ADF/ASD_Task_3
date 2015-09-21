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

void deletelast (list *l, address *p)
{
    address q;

    if (first(*l) == nil)
    {
        cout<<"List Kosong";
    }
    else if (next(first(*l)) == nil)
    {
        *p=first(*l);
        first(*l) = nil;
        dealokasi(*p);
    }
    else
    {
        q=first(*l);
        while (next(next(q)) != nil)
        {
            q=next(q);
        }
        *p = next(q);
        next(q) = nil;
        dealokasi(*p);
    }
}
void deleteafter (list *l, address *p, address prec)
{
    *p = next(prec);
    next(prec) = next(*p);
    next(*p) = nil;
    dealokasi(*p);
}
