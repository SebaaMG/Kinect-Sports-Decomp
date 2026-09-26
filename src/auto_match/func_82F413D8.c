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
extern int fn_82E50BE8();
extern int fn_82E7BF78();
extern int fn_82F68CC0();


longlong fn_82F413D8(undefined8 param_1,int param_2,int *param_3,uint *param_4,int *param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint auStack_50 [20];
  
  auStack_50[0] = 0;
  if ((((param_3 == (int *)0x0) || (*param_3 == 0)) || (param_4 == (uint *)0x0)) ||
     ((param_5 == (int *)0x0 || (*param_5 != 0)))) {
    return -0x7fffbffd;
  }
  if (param_2 != 1) {
    return 0;
  }
  uVar3 = (ulonglong)*param_4;
  lVar1 = fn_82E7BF78(*param_3,uVar3,auStack_50);
  if (lVar1 < 0) {
    lVar1 = 0;
    uVar2 = uVar3;
  }
  else {
    uVar2 = (ulonglong)auStack_50[0];
  }
  if (uVar3 < uVar2) {
    uVar2 = uVar3;
  }
  uVar4 = uVar2 + 2;
  if ((uVar4 & 0xffffffff) < uVar2) {
LAB_82f41474:
    lVar1 = -0x7fff0001;
  }
  else {
    if (uVar3 < (uVar4 & 0xffffffff)) {
      if ((0xffffffff < (uVar4 & 0xffffffff)) || ((uVar3 + 2 & 0xffffffff) != (uVar4 & 0xffffffff)))
      goto LAB_82f41474;
      uVar3 = fn_82E50BE8(uVar4,0,0,0,0);
      *param_5 = (int)uVar3;
      if ((uVar3 & 0xffffffff) == 0) {
        return -0x7ff8fff2;
      }
      fn_82F68CC0(uVar3,*param_3,*param_4);
      *(undefined2 *)(((uint)uVar4 & 0xfffffffe) + *param_5 + -2) = 0;
      *param_3 = *param_5;
    }
    *param_4 = (uint)uVar4;
  }
  return lVar1;
}

