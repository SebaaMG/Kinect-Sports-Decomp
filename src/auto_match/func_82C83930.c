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
extern unsigned int *auStack_6c;
extern unsigned int *auStack_80;
extern unsigned int *auStack_8c;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern int (*lbl_8329F144)();
extern int (*lbl_8329F148)();
extern unsigned int uStack_70;


/* WARNING: Type propagation algorithm not settling */

void fn_82C83930(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                  ulonglong param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint auStack_a0 [4];
  undefined1 auStack_90 [4];
  undefined1 auStack_8c [12];
  undefined4 auStack_80 [4];
  undefined4 uStack_70;
  undefined4 auStack_6c [27];
  
  (*lbl_8329F144)(param_1,auStack_80,auStack_a0,param_5);
  (*lbl_8329F144)(param_1 + 8,auStack_80 + 1,auStack_a0 + 1,param_5);
  lVar5 = (param_5 & 0x1fffffff) * 8 + param_1;
  (*lbl_8329F144)(lVar5,auStack_80 + 2,auStack_a0 + 2,param_5);
  (*lbl_8329F144)(lVar5 + 8,auStack_80 + 3,auStack_a0 + 3,param_5);
  (*lbl_8329F144)(param_2,&uStack_70,auStack_90,param_6);
  (*lbl_8329F144)(param_3,auStack_6c,auStack_8c,param_7);
  uVar3 = (ulonglong)(auStack_a0[0] >> 0x1f) + (longlong)((int)auStack_a0[1] >> 0x1f) +
          (ulonglong)(auStack_a0[0] <= auStack_a0[1]);
  if (*(int *)((int)auStack_a0 + (int)((uVar3 & 0xffffffff) << 2)) <= (int)auStack_a0[2]) {
    uVar3 = 2;
  }
  if (*(int *)((int)auStack_a0 + (int)((uVar3 & 0xffffffff) << 2)) <= (int)auStack_a0[3]) {
    uVar3 = 3;
  }
  iVar2 = (int)((uVar3 & 0xffffffff) << 2);
  iVar4 = 0;
  iVar1 = *(int *)((int)auStack_a0 + iVar2);
  lVar6 = 4;
  do {
    if ((*(int *)((int)auStack_a0 + iVar4) < 0x20) && (0x3f < iVar1)) {
      *(undefined4 *)((int)auStack_80 + iVar4) = *(undefined4 *)((int)auStack_80 + iVar2);
    }
    if (iVar1 < 0x10) {
      *(undefined4 *)((int)auStack_80 + iVar4) = 0;
    }
    iVar4 = iVar4 + 4;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  lVar6 = (param_4 & 0x7fffffff) << 1;
  (*lbl_8329F148)(param_1,param_5,lVar6,auStack_80[0]);
  (*lbl_8329F148)(param_1 + 8,param_5,lVar6,auStack_80[1]);
  (*lbl_8329F148)(lVar5,param_5,lVar6,auStack_80[2]);
  (*lbl_8329F148)(lVar5 + 8,param_5,lVar6,auStack_80[3]);
  (*lbl_8329F148)(param_2,param_6,lVar6,uStack_70);
  (*lbl_8329F148)(param_3,param_7,lVar6,auStack_6c[0]);
  return;
}

