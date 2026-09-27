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
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_82810280();
extern int fn_82810328();
extern int fn_82810360();
extern int fn_82810558();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_8306AE10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_80 [1];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [96];
  
  uVar1 = fn_82F6A548();
  fn_82810360(param_2,auStack_80);
  fn_82810328(param_4,param_3,auStack_70);
  fn_82810328(uVar1,param_3,auStack_60);
  dVar5 = (double)fn_82810280(auStack_80,auStack_80);
  dVar6 = (double)fn_82810280(auStack_70,auStack_70);
  dVar7 = (double)fn_82810280(auStack_70,auStack_60);
  dVar8 = (double)fn_82810280(auStack_80,auStack_70);
  dVar9 = (double)fn_82810280(auStack_80,auStack_60);
  dVar10 = (double)lbl_821AAD20;
  dVar3 = (double)(float)(dVar6 * dVar5 - (double)(float)(dVar8 * dVar8));
  dVar4 = dVar10;
  if (dVar3 != dVar10) {
    dVar4 = (double)(float)((double)(float)(dVar8 * dVar7 - (double)(float)(dVar9 * dVar6)) / dVar3)
    ;
  }
  dVar3 = (double)(float)((double)(float)(dVar4 * dVar8 + dVar7) / dVar6);
  if (dVar10 <= dVar3) {
    if (dVar3 <= (double)lbl_82002AE0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 1;
      dVar4 = (double)(float)((double)(float)(dVar8 - dVar9) / dVar5);
      dVar3 = (double)lbl_82002AE0;
    }
  }
  else {
    uVar2 = 0;
    dVar4 = -(double)(float)(dVar9 / dVar5);
    dVar3 = dVar10;
  }
  fn_82810558(dVar4,auStack_80,uVar1);
  fn_82810558(dVar3,auStack_70,param_3);
  fn_82F6A594(uVar2);
  return;
}

