typedef struct Object {
    unsigned char padding[0x28];
    float previous_value;
    unsigned char gap[4];
    float value;
} Object;

void fn_82618BE8(Object *object, float value)
{
    object->previous_value = object->value;
    object->value = value;
}
