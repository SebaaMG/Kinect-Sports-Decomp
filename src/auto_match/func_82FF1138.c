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


void fn_82FF1138(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x1c);
  if (puVar2 != *(undefined4 **)(param_1 + 0x20)) {
    do {
      if ((puVar2[1] & 0x40000000) == 0) {
        iVar1 = *(int *)(param_1 + 0x20);
        if (1 < (uint)((iVar1 - *(int *)(param_1 + 0x1c)) / 0xc)) {
          *puVar2 = *(undefined4 *)(iVar1 + -0xc);
          puVar2[1] = *(undefined4 *)(iVar1 + -8);
          puVar2[2] = *(undefined4 *)(iVar1 + -4);
        }
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -0xc;
      }
      else {
        puVar2 = puVar2 + 3;
      }
    } while (puVar2 != *(undefined4 **)(param_1 + 0x20));
    return;
  }
  return;
}

