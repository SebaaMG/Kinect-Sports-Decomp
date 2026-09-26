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
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_82810208();
extern int fn_828102A8();
extern int fn_82810328();
extern int fn_82810360();
extern int fn_82810B40();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82002C5C;


void fn_82812188(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [80];
  
  iVar1 = fn_82F6A548();
  fn_82810360(iVar1,auStack_80);
  fn_82810360(param_2,auStack_70);
  dVar6 = (double)*(float *)(iVar1 + 0xc);
  dVar4 = (double)*(float *)((int)param_2 + 0xc);
  dVar3 = (double)fn_82810B40(auStack_80,auStack_70);
  dVar5 = (double)(float)(dVar3 + dVar4);
  iVar1 = (int)param_3;
  if (dVar6 < dVar5) {
    puVar2 = auStack_70;
    if (dVar4 < (double)(float)(dVar3 + dVar6)) {
      fn_82810328(puVar2,auStack_80,auStack_50);
      dVar4 = (double)lbl_82002C5C;
      fn_828102A8((double)(float)((double)(float)((double)(float)(dVar5 - dVar6) * dVar4) / dVar3)
                    ,auStack_50,auStack_60);
      fn_82810208(auStack_80,auStack_60,auStack_60);
      puVar2 = auStack_60;
      *(float *)(iVar1 + 0xc) = (float)((double)(float)(dVar5 + dVar6) * dVar4);
    }
    else {
      *(float *)(iVar1 + 0xc) = (float)dVar4;
    }
  }
  else {
    *(float *)(iVar1 + 0xc) = (float)dVar6;
    puVar2 = auStack_80;
  }
  fn_82810360(puVar2,param_3);
  fn_82F6A594();
  return;
}

