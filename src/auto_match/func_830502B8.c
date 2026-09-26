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


undefined8 fn_830502B8(int param_1,ulonglong param_2,uint param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if (param_4 != (ulonglong *)0x0) {
    *param_4 = 0;
  }
  if ((*(uint *)(param_1 + 0x24) & 0x1e000000) == 0x4000000) {
    return 2;
  }
  if (param_3 != 0) {
    if (param_3 == 1) {
      lVar2 = *(longlong *)(param_1 + 0x10);
    }
    else {
      if (param_3 != 2) {
        return 0x1f;
      }
      lVar2 = *(longlong *)(param_1 + -0x60);
    }
    param_2 = lVar2 + param_2;
  }
  if (-1 < (longlong)param_2) {
    uVar1 = (ulonglong)*(uint *)(param_1 + -0xc);
    lVar2 = param_2 - ((longlong)param_2 / (longlong)uVar1) * uVar1;
    trapDoubleWordImmediate(6,uVar1,0);
    trapDoubleWordImmediate(5,uVar1 & ~((param_2 << 1 | param_2 >> 0x3f) - 1),0xffff);
    if (lVar2 != 0) {
      param_2 = param_2 - lVar2;
    }
    if (param_4 != (ulonglong *)0x0) {
      if (param_3 == 0) {
        *param_4 = param_2;
      }
      else if (param_3 == 1) {
        *param_4 = param_2 - *(longlong *)(param_1 + 0x10);
      }
      else {
        if (2 < param_3) {
          return 2;
        }
        *param_4 = param_2 - *(longlong *)(param_1 + -0x60);
      }
    }
    *(ulonglong *)(param_1 + 0x10) = param_2;
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 0x1000000;
    return 1;
  }
  return 0x1f;
}

