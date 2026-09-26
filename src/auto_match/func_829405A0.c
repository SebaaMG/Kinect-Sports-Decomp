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


undefined8 fn_829405A0(int param_1,uint *param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_2 & 0xfff00000;
  if (*(int *)(*(int *)(*(int *)((*param_2 & 0xfffff) * param_3 * 4 + param_2[2]) * 4 +
                       *(int *)(param_1 + 0x14)) + 0x6c) == 0x11) {
    if (uVar2 == 0x30000000) {
      bVar1 = param_3 == 0;
    }
    else {
      if (uVar2 < 0x73800001) {
        if (uVar2 == 0x73800000) {
          return 1;
        }
        if (uVar2 == 0x10f00000) {
          return 1;
        }
        if (uVar2 == 0x73500000) {
          return 1;
        }
        if (uVar2 == 0x73600000) {
          return 1;
        }
        uVar3 = 0x73700000;
      }
      else {
        if (uVar2 == 0x74400000) {
          return 1;
        }
        if (uVar2 == 0x74500000) {
          return 1;
        }
        if (uVar2 == 0x74600000) {
          return 1;
        }
        uVar3 = 0x74700000;
      }
      bVar1 = uVar2 == uVar3;
    }
    if (bVar1) {
      return 1;
    }
  }
  return 0;
}

