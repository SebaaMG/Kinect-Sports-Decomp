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


void fn_8269AE08(int param_1,int param_2)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x8c) >> 0x13 & 1) == 0) {
    return;
  }
  if ((*(uint *)(param_2 + 0xb00) >> 0x13 & 1) == 0) {
    iVar1 = *(int *)(param_1 + 0x74);
    if (iVar1 != 0) {
      do {
        if ((*(uint *)(iVar1 + 0x8c) >> 0x13 & 1) != 0) break;
        iVar1 = *(int *)(iVar1 + 0x74);
      } while (iVar1 != 0);
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0x78) = *(undefined4 *)(param_1 + 0x78);
        goto LAB_8269ae60;
      }
    }
    *(undefined4 *)(param_2 + 0xaf8) = *(undefined4 *)(param_1 + 0x78);
  }
LAB_8269ae60:
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(uint *)(param_1 + 0x8c) = *(uint *)(param_1 + 0x8c) & 0xfff7ffff;
  *(uint *)(param_2 + 0xb00) = *(uint *)(param_2 + 0xb00) | 0x400;
  return;
}

