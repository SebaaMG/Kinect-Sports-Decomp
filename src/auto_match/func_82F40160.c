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
extern unsigned int *auStack_50;
extern int fn_82E57620();
extern int fn_82E576A8();
extern int fn_82E57738();
extern int fn_82E59EC8();


longlong fn_82F40160(int *param_1,uint *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  longlong lVar4;
  int *piVar5;
  uint auStack_50 [20];
  
  if (param_1[3] == 0) {
    lVar4 = -0x3ff2c94a;
  }
  else if (param_2 == (uint *)0x0) {
    lVar4 = -0x7ff8ffa9;
  }
  else {
    *param_2 = 0;
    uVar1 = param_1[0x10];
    if (uVar1 < 0x2e) {
      *param_2 = 0x2e;
      lVar4 = -0x3ff2c94f;
    }
    else {
      piVar5 = param_1 + 10;
      fn_82E57620(param_1 + 4,piVar5);
      puVar3 = (ulonglong *)(param_1 + 8);
      fn_82E576A8(puVar3,piVar5);
      lVar4 = fn_82E57620(param_1 + 0x12,piVar5);
      if ((-1 < lVar4) && (lVar4 = fn_82E57738(param_1 + 0x16,piVar5), -1 < lVar4)) {
        auStack_50[0] = 0;
        lVar4 = fn_82E59EC8(auStack_50,piVar5);
        if (-1 < lVar4) {
          uVar2 = *puVar3;
          if ((0x2d < uVar2) && ((ulonglong)auStack_50[0] == uVar2 - 0x2e)) {
            *puVar3 = uVar2 - auStack_50[0];
            *param_2 = uVar1 - param_1[0x10];
            uVar2 = (**(code **)(*param_1 + 0x2c))(param_1);
            if (uVar2 == *param_2) {
              return lVar4;
            }
          }
          lVar4 = -0x3ff2c566;
        }
      }
    }
  }
  return lVar4;
}

