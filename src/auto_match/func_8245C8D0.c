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
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern int fn_82230110();
extern int fn_82230218();
extern int fn_82230300();
extern int fn_82230360();
extern int fn_8245C548();
extern int fn_82522FF0();
extern int fn_82579DB0();
extern int fn_82579EF0();
extern int fn_8257A028();
extern int fn_8257A0B0();
extern unsigned int lbl_821922D0;
extern unsigned int lbl_82192480;
extern unsigned int lbl_82195518;
extern unsigned int lbl_82195A80;
extern unsigned int lbl_82195AD0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8245C8D0(int param_1)

{
  char cVar1;
  undefined4 uVar3;
  char *pcVar4;
  undefined8 uVar2;
  int iVar5;
  char *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [112];
  
  iVar5 = param_1 + 0x6c8;
  uVar3 = fn_82579EF0(iVar5,0xffffffff821bad6c,0);
  *(undefined4 *)(param_1 + 0x63c) = uVar3;
  pcVar4 = (char *)fn_82579DB0(iVar5,0xffffffff821bad78);
  pcVar6 = pcVar4;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  fn_82230360(param_1 + 0x640,pcVar4,pcVar6 + (-1 - (int)pcVar4));
  uVar2 = fn_82579DB0(iVar5,0xffffffff821bad88);
  fn_82230110(auStack_70,uVar2);
  uVar2 = fn_82579DB0(iVar5,0xffffffff821bada4);
  fn_82230110(auStack_90,uVar2);
  uVar3 = fn_82579EF0(iVar5,0xffffffff821badb4,0x50);
  fn_82230218(param_1 + 0x5dc,auStack_70,0,0xffffffffffffffff);
  fn_82230218(param_1 + 0x5f8,auStack_90,0,0xffffffffffffffff);
  *(undefined4 *)(param_1 + 0x614) = uVar3;
  *(undefined4 *)(param_1 + 0x638) = 0;
  dVar9 = (double)lbl_821922D0;
  dVar7 = (double)fn_8257A028(dVar9,iVar5,0xffffffff821badbc);
  if (dVar7 < lbl_82195518) {
    dVar7 = lbl_82195518;
  }
  dVar10 = lbl_82195518;
  dVar8 = (double)fn_8257A028((double)lbl_82192480,iVar5,0xffffffff821baddc);
  *(double *)(param_1 + 0x680) = dVar8;
  if (dVar8 < dVar10) {
    *(double *)(param_1 + 0x680) = dVar10;
  }
  dVar8 = (double)fn_82522FF0();
  *(double *)(param_1 + 0x688) = dVar8 - *(double *)(param_1 + 0x680);
  dVar9 = (double)fn_8257A028(dVar9,iVar5,0xffffffff821bae00);
  *(int *)(param_1 + 0x69c) = (int)dVar9;
  if ((int)dVar9 < 0) {
    *(undefined4 *)(param_1 + 0x69c) = 0;
  }
  dVar9 = lbl_82195AD0;
  *(double *)(param_1 + 0x120) = (double)((longlong)dVar7 & 0xffffffff);
  *(int *)(param_1 + 0x55c) = param_1;
  *(code **)(param_1 + 0x558) = fn_8245C548;
  dVar7 = (double)fn_8257A0B0(dVar9,iVar5,0xffffffff821bae20);
  *(double *)(param_1 + 0x670) = dVar7;
  if (dVar7 < dVar10) {
    *(double *)(param_1 + 0x670) = dVar9;
  }
  *(double *)(param_1 + 0x678) = -*(double *)(param_1 + 0x670);
  dVar7 = (double)fn_8257A0B0(dVar9,iVar5,0xffffffff821bae44);
  if (dVar7 < dVar10) {
    dVar7 = dVar9;
  }
  *(double *)(param_1 + 0x58) = dVar7;
  dVar9 = lbl_82195A80;
  dVar7 = (double)fn_8257A0B0(lbl_82195A80,iVar5,0xffffffff821bae60);
  if (dVar7 < dVar10) {
    dVar7 = dVar9;
  }
  *(double *)(param_1 + 0x48) = dVar7;
  iVar5 = fn_82579EF0(iVar5,0xffffffff821bae7c,3);
  *(int *)(param_1 + 0x6ac) = iVar5;
  if (iVar5 < 0) {
    *(undefined4 *)(param_1 + 0x6ac) = 0;
  }
  fn_82230300(auStack_90,1,0);
  fn_82230300(auStack_70,1,0);
  return;
}

