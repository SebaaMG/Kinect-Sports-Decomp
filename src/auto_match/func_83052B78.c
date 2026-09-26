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
extern int fn_83052500();


undefined8 fn_83052B78(int *param_1,ulonglong param_2,uint param_3,ulonglong *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_4 != (ulonglong *)0x0) {
    *param_4 = 0;
  }
  if (param_3 != 0) {
    if (param_3 == 1) {
      lVar1 = (**(code **)(*param_1 + 0x24))(param_1,0);
      param_2 = lVar1 + param_2;
    }
    else {
      if (param_3 != 2) {
        return 0x1f;
      }
      param_2 = *(longlong *)(param_1 + -0x18) + param_2;
    }
  }
  if ((longlong)param_2 < 0) {
    return 0x1f;
  }
  uVar2 = (ulonglong)(uint)param_1[-3];
  lVar1 = param_2 - ((longlong)param_2 / (longlong)uVar2) * uVar2;
  trapDoubleWordImmediate(6,uVar2,0);
  trapDoubleWordImmediate(5,uVar2 & ~((param_2 << 1 | param_2 >> 0x3f) - 1),0xffff);
  if (lVar1 != 0) {
    param_2 = param_2 - lVar1;
  }
  if (param_4 != (ulonglong *)0x0) {
    if (param_3 == 0) {
      *param_4 = param_2;
    }
    else if (param_3 == 1) {
      lVar1 = (**(code **)(*param_1 + 0x24))(param_1,0);
      *param_4 = param_2 - lVar1;
    }
    else if (param_3 < 3) {
      *param_4 = param_2 - *(longlong *)(param_1 + -0x18);
    }
  }
  fn_83052500(param_1 + -0x1e,
                    ((longlong)param_1[-3] * (longlong)param_1[-0x16] & 0xffffffffU) + param_2);
  return 1;
}

