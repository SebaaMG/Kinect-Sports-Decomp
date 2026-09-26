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
extern unsigned int *auStack_40;
extern int fn_82E57620();
extern int fn_82E576A8();
extern int fn_82E57738();


longlong fn_82F3DDE0(int *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int *piVar4;
  undefined2 auStack_40 [32];
  
  if (param_1[3] == 0) {
    lVar2 = -0x3ff2c94a;
  }
  else if (param_2 == (uint *)0x0) {
    lVar2 = -0x7ff8ffa9;
  }
  else {
    *param_2 = 0;
    uVar1 = param_1[0x10];
    if (uVar1 < 0x32) {
      *param_2 = 0x32;
      lVar2 = -0x3ff2c94f;
    }
    else {
      piVar4 = param_1 + 10;
      fn_82E57620(param_1 + 4,piVar4);
      fn_82E576A8(param_1 + 8,piVar4);
      lVar2 = fn_82E57620(param_1 + 0x14,piVar4);
      if ((-1 < (int)lVar2) && (lVar2 = fn_82E576A8(param_1 + 0x18,piVar4), -1 < (int)lVar2))
      {
        auStack_40[0] = 0;
        lVar2 = fn_82E57738(auStack_40,piVar4);
        if (-1 < lVar2) {
          *param_2 = uVar1 - param_1[0x10];
          uVar3 = (**(code **)(*param_1 + 0x44))(param_1);
          if (uVar3 != *param_2) {
            lVar2 = -0x3ff2c566;
          }
        }
      }
    }
  }
  return lVar2;
}

