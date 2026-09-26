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
extern unsigned int *auStack_220;
extern int fn_82E57620();
extern int fn_82E576A8();
extern int fn_82E57738();
extern int fn_82F691F0();
extern unsigned int lbl_82162C1C;
extern unsigned int uStack_150;
extern unsigned int uStack_154;
extern unsigned int uStack_1f6;
extern unsigned int uStack_204;
extern unsigned int uStack_208;
extern unsigned int uStack_230;


longlong fn_82F3AE90(int *param_1,uint *param_2)

{
  uint uVar1;
  short sVar2;
  longlong lVar3;
  ulonglong uVar4;
  int *piVar5;
  undefined4 uStack_230;
  undefined1 auStack_220 [20];
  undefined **ppuStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined1 uStack_1f6;
  undefined4 uStack_154;
  undefined4 uStack_150;
  
  if (param_1[3] == 0) {
    lVar3 = -0x3ff2c94a;
  }
  else if (param_2 == (uint *)0x0) {
    lVar3 = -0x7ff8ffa9;
  }
  else {
    *param_2 = 0;
    uVar1 = param_1[0x10];
    if (uVar1 < 0x1a) {
      *param_2 = 0x1a;
      lVar3 = -0x3ff2c94f;
    }
    else {
      piVar5 = param_1 + 10;
      uStack_230 = (uint)(((U64)(uStack_230) >> 16) & 0xFFFF);
      fn_82E57620(param_1 + 4,piVar5);
      fn_82E576A8(param_1 + 8,piVar5);
      lVar3 = fn_82E57738(&uStack_230,piVar5);
      if (-1 < lVar3) {
        sVar2 = (((U64)(uStack_230) >> 0) & 0xFFFF);
        uStack_230 = 0;
        if (sVar2 != 0) {
          uStack_208 = 0;
          uStack_204 = 0;
          uStack_1f6 = 0;
          uStack_154 = 0;
          ppuStack_20c = &lbl_82162C1C;
          uStack_150 = 0;
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(auStack_220,0,0xdc);
        }
        *param_2 = uVar1 - param_1[0x10];
        uVar4 = (**(code **)(*param_1 + 0x2c))(param_1);
        if (uVar4 != *param_2) {
          lVar3 = -0x3ff2c566;
        }
      }
    }
  }
  return lVar3;
}

