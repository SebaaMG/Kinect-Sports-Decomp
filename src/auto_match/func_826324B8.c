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
extern int fn_826323F8();
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82F68CC0();


void fn_826324B8(int *param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int *piVar4;
  
  fn_826323F8();
  *param_1 = param_2;
  piVar4 = param_1 + 0x18;
  param_1[0x19] = 0;
  if ((uint)param_1[0x1a] < 100) {
    uVar3 = ((ulonglong)(uint)param_1[0x1a] & 0x7fffffff) << 1;
    if (uVar3 < 100) {
      uVar3 = 100;
    }
    lVar1 = fn_8265C940(uVar3 * 0xc,0x64800000);
    if (lVar1 == 0) {
      param_1[0x14] = -0x7ff8fff2;
    }
    else {
      param_1[0x1a] = (int)uVar3;
      if (*piVar4 != 0) {
        fn_82F68CC0(lVar1,*piVar4,(ulonglong)(uint)param_1[0x19] * 0xc);
        fn_8265C990(*piVar4,0x24800000);
      }
      *piVar4 = (int)lVar1;
    }
  }
  piVar4 = param_1 + 0x1b;
  param_1[0x1c] = 0;
  if ((uint)param_1[0x1d] < 0x32) {
    uVar3 = ((ulonglong)(uint)param_1[0x1d] & 0x7fffffff) << 1;
    if (uVar3 < 0x32) {
      uVar3 = 0x32;
    }
    lVar1 = fn_8265C940((uVar3 & 0x1fffffff) << 3,0x64800000);
    if (lVar1 == 0) {
      param_1[0x14] = -0x7ff8fff2;
    }
    else {
      param_1[0x1d] = (int)uVar3;
      if (*piVar4 != 0) {
        fn_82F68CC0(lVar1,*piVar4,param_1[0x1c] << 3);
        fn_8265C990(*piVar4,0x24800000);
      }
      *piVar4 = (int)lVar1;
    }
  }
  if ((*(uint *)(*param_1 + 0x4db4) >> 2 & 1) == 0) {
    piVar4 = param_1 + 0x46;
    param_1[0x47] = 0;
    if ((uint)param_1[0x48] < 2) {
      uVar3 = ((ulonglong)(uint)param_1[0x48] & 0x7fffffff) << 1;
      if (uVar3 < 2) {
        uVar3 = 2;
      }
      lVar1 = fn_8265C940((uVar3 & 0x3fffffff) << 2,0x64800000);
      if (lVar1 == 0) {
        param_1[0x14] = -0x7ff8fff2;
      }
      else {
        param_1[0x48] = (int)uVar3;
        if (*piVar4 != 0) {
          fn_82F68CC0(lVar1,*piVar4,param_1[0x47] << 2);
          fn_8265C990(*piVar4,0x24800000);
        }
        *piVar4 = (int)lVar1;
      }
    }
    piVar4 = param_1 + 0x49;
    param_1[0x4a] = 0;
    if ((uint)param_1[0x4b] < 0x10) {
      uVar3 = ((ulonglong)(uint)param_1[0x4b] & 0x7fffffff) << 1;
      if (uVar3 < 0x10) {
        uVar3 = 0x10;
      }
      lVar1 = fn_8265C940((uVar3 & 0x3fffffff) << 2,0x64800000);
      if (lVar1 == 0) {
        param_1[0x14] = -0x7ff8fff2;
      }
      else {
        param_1[0x4b] = (int)uVar3;
        if (*piVar4 != 0) {
          fn_82F68CC0(lVar1,*piVar4,param_1[0x4a] << 2);
          fn_8265C990(*piVar4,0x24800000);
        }
        *piVar4 = (int)lVar1;
      }
    }
    uVar2 = param_1[0x4e];
    piVar4 = param_1 + 0x4c;
    param_1[0x4d] = 0;
  }
  else {
    uVar2 = param_1[0x45];
    piVar4 = param_1 + 0x43;
    param_1[0x44] = 0;
  }
  if (uVar2 < 0x10) {
    uVar3 = ((ulonglong)uVar2 & 0x7fffffff) << 1;
    if (uVar3 < 0x10) {
      uVar3 = 0x10;
    }
    lVar1 = fn_8265C940((uVar3 & 0x3fffffff) << 2,0x64800000);
    if (lVar1 == 0) {
      param_1[0x14] = -0x7ff8fff2;
    }
    else {
      piVar4[2] = (int)uVar3;
      if (*piVar4 != 0) {
        fn_82F68CC0(lVar1,*piVar4,piVar4[1] << 2);
        fn_8265C990(*piVar4,0x24800000);
      }
      *piVar4 = (int)lVar1;
    }
  }
  return;
}

