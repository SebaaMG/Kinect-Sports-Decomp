int fn_82398048(int object, int index)
{
    struct pair {
        unsigned int *begin;
        unsigned int *end;
    };
    struct pair *entry;
    int result;
    unsigned int *end;
    unsigned int *it;

    entry = *(struct pair **)(index * 4 + *(int *)(object + 0x20));
    end = entry->end;
    it = entry->begin;
    while (it != end &&
           (result = fn_824CD030(*it), result != 0)) {
        it++;
    }

    return it != (*(struct pair **)(index * 4 + *(int *)(object + 0x20)))->end;
}
