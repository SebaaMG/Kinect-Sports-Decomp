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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define _uStack_50 ((*(U64*)&uStack_50))
extern int fn_826EBDE8();
extern int fn_826EBE48();
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_826EC3A0(double param_1,int *param_2,int param_3,ulonglong param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  int *piVar8;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  uVar3 = param_2[2];
  piVar1 = (int *)(*(int *)(((uint)((param_4 & 0xffffffff) >> 4) & 0xffffffc) +
                           *(int *)(param_3 + 0x24)) + ((uint)param_4 & 0x3f) * 0x18);
  if ((ulonglong)uVar3 == 0) {
    *param_2 = piVar1[5];
  }
  uVar7 = (ulonglong)(uint)piVar1[1];
  piVar8 = param_2 + 1;
  lVar6 = ((ulonglong)(uint)piVar1[1] & 0x7fffffff) * 2;
  fn_826EBDE8(piVar8,lVar6 + (ulonglong)uVar3);
  iVar5 = 0;
  if (uVar7 != 0) {
    iVar4 = uVar3 << 1;
    do {
      uStack_4c = ((((U64)(uStack_4c)) & (~(((U64)0xFFFF) << 16))) | ((((U64)((undefined2)
           (int)((double)*(float *)(*(int *)(((uint)(piVar1[2] + iVar5) >> 6 & 0x3fffffc) +
                                            *(int *)(*piVar1 + 0x14)) +
                                   ((piVar1[2] + iVar5) * 8 & 0x7f8U)) * param_1))) & ((U64)0xFFFF)) << 16));
      *(undefined2 *)(iVar4 + *piVar8) = (((U64)(uStack_4c) >> 16) & 0xFFFF);
      uVar3 = piVar1[2] + iVar5;
      iVar5 = iVar5 + 1;
      iVar2 = iVar4 + *piVar8;
      iVar4 = iVar4 + 4;
      uStack_4c = (int)((double)*(float *)(*(int *)((uVar3 >> 6 & 0x3fffffc) +
                                                   *(int *)(*piVar1 + 0x14)) + (uVar3 * 8 & 0x7f8) +
                                          4) * param_1);
      *(undefined2 *)(iVar2 + 2) = (((U64)(uStack_4c) >> 16) & 0xFFFF);
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  _uStack_50 = CONCAT44((int)lVar6,uStack_4c);
  fn_826EBE48(param_2 + 6,&uStack_50);
  return;
}

