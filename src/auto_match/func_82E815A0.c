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


undefined8 fn_82E815A0(int param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  
  *param_5 = 0;
  *param_4 = 0;
  *param_3 = 0;
  *param_2 = 0;
  if (((*(int *)(param_1 + 0x1ff0) != 0) && (*(int *)(*(int *)(param_1 + 0x1ff4) + 0xa0) != 0)) &&
     (uVar1 = *(uint *)(*(int *)(param_1 + 0x1ff4) + 0x30), uVar1 != 0xffffffff)) {
    *param_2 = (int)uVar1 >> 0x18 & 0xf;
    *param_3 = (int)uVar1 >> 0x10 & 0xf;
    *param_4 = (int)uVar1 >> 8 & 0xf;
    *param_5 = uVar1 & 0xf;
    uVar1 = *param_2;
    if (8 < (int)uVar1) {
      uVar1 = 8;
    }
    *param_2 = uVar1;
    uVar1 = *param_3;
    if (8 < (int)uVar1) {
      uVar1 = 8;
    }
    *param_3 = uVar1;
    uVar1 = *param_4;
    if (8 < (int)uVar1) {
      uVar1 = 8;
    }
    *param_4 = uVar1;
    uVar1 = *param_5;
    if (8 < (int)uVar1) {
      uVar1 = 8;
    }
    *param_5 = uVar1;
    return 1;
  }
  return 0;
}

