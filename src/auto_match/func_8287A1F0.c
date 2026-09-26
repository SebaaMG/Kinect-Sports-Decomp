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
extern int fn_82809CB0();
extern int fn_82879EB0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82005344;


void fn_8287A1F0(undefined8 param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  double dVar5;
  undefined8 extraout_f1;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  
  iVar3 = fn_82F6A548();
  dVar9 = (double)(*(float *)(iVar3 + 8) - *(float *)(iVar3 + 4));
  pfVar4 = (float *)(iVar3 + 4);
  uVar7 = extraout_f1;
  if (*(char *)(iVar3 + 0x1c) == '\x01') {
    dVar5 = (double)*(float *)(iVar3 + 0x18);
    if ((dVar9 < dVar5) || (dVar5 = (double)*(float *)(iVar3 + 0x14), dVar8 = dVar9, dVar5 < dVar9))
    {
      dVar8 = dVar5;
    }
    dVar5 = (double)fn_82809CB0(dVar8);
    dVar6 = (double)fn_82809CB0(dVar9);
    if (dVar5 < dVar6) {
      *pfVar4 = (float)(dVar9 - dVar8) + *pfVar4;
    }
  }
  if (*(char *)(iVar3 + 0x28) == '\x01') {
    fVar1 = *(float *)(iVar3 + 8);
    fVar2 = *(float *)(iVar3 + 0x20);
    if ((fVar1 < *(float *)(iVar3 + 0x20)) ||
       (fVar2 = *(float *)(iVar3 + 0x24), *(float *)(iVar3 + 0x24) < fVar1)) {
      fVar1 = fVar2;
    }
    *(float *)(iVar3 + 8) = fVar1;
  }
  dVar9 = (double)*pfVar4;
  fn_82879EB0((double)*(float *)(iVar3 + 8),(double)*(float *)(iVar3 + 0x10),
                (double)(float)((double)*(float *)(iVar3 + 0x10) * (double)lbl_82005344),uVar7,
                (double)*(float *)(iVar3 + 0x30),pfVar4,param_2,iVar3 + 0xc);
  *(float *)(iVar3 + 0x2c) = (float)((double)*pfVar4 - dVar9);
  fn_82F6A594();
  return;
}

