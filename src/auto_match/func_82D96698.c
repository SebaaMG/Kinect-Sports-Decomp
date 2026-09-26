typedef unsigned char u8;

// Stores the power of two selected by index into the byte at offset 0x42.
void fn_82D96698(void *self, unsigned int index)
{
    u8 *bytes = (u8 *)self;

    bytes[0x42] = (u8)(1u << index);
}
