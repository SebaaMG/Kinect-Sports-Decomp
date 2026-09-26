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


undefined8 fn_82ABDBE8(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_1[3] != param_2[3]) {
    if ((*(uint *)(param_1[3] + 8) & 0x3f80) != 0x3c00) {
      return 0;
    }
    if ((*(uint *)(param_2[3] + 8) & 0x3f80) != 0x3c00) {
      return 0;
    }
    uVar1 = *param_1 >> 0x1e & 1;
    if (uVar1 != (*param_2 >> 0x1e & 1)) {
      return 0;
    }
    if ((uVar1 != 0) && (((*param_1 ^ *param_2) & 0x1ffe000) != 0)) {
      return 0;
    }
  }
  uVar1 = *param_2;
  uVar2 = *param_1;
  if (((uVar2 ^ uVar1) & 0x1f) == 0) {
    uVar4 = (ulonglong)(uVar1 >> 0x19) & 7;
    uVar3 = (ulonglong)(uVar2 >> 0x19) & 7;
    if ((uVar3 == uVar4) &&
       ((((1 << (int)(uVar3 << 1)) - 1U & uVar2 >> 5 ^ (1 << (int)(uVar4 << 1)) - 1U & uVar1 >> 5) &
        0xff) == 0)) {
      return 1;
    }
  }
  return 0;
}

