void fn_82524548(int *object);

void fn_82525BC0(int *object, int value)
{
    if (value != object[0x26d]) {
        object[0x26d] = value;
        if ((*(int (**)(void))(*object + 0x14))() != 0) {
            fn_82524548(object);
            return;
        }
        object[0x26e] = 1;
    }
}
