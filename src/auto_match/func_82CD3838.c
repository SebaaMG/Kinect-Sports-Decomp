typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;


void fn_82CD3838(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
      (**(code **)(param_1 + 0x3948))
                (*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x18),
                 *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),0,
                 *(undefined4 *)(param_1 + 0x54),param_1);
      return;
    }
    (**(code **)(param_1 + 0x3944))
              (*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
               *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28),
               *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30),0,
               *(undefined4 *)(param_1 + 0x54));
    return;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    (**(code **)(param_1 + 0x393c))
              (*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x24),0,
               *(undefined4 *)(param_1 + 0x54),param_1);
    return;
  }
  (**(code **)(param_1 + 0x3940))
            (*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x28),
             *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30),0,
             *(undefined4 *)(param_1 + 0x54),param_1);
  return;
}

