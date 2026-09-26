// Kinect Sports retail 4D5308C9, function 0x82394448 (100 bytes).
// Virtual call: this->vtable[2](this, value, &(int){fn_82394228(param)[0]}).
typedef void code(int *self, int value, int *args);
extern int *fn_82394228(int param);

void fn_82394448(int *object, int value, int param)
{
    int *result;
    int arguments[2];
    code *entry;

    result = (int *)fn_82394228(param);
    entry = *(code **)(*object + 0x10);
    arguments[0] = *result;
    entry(object, value, arguments);
}
