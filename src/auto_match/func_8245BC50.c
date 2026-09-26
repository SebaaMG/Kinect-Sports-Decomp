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
extern unsigned int *auStack_29b;
extern int fn_82230360();
extern int fn_8225C590();
extern int fn_8225D9B8();
extern int fn_82512508();
extern int fn_82522FF0();
extern int fn_828B8F40();
extern int fn_828EA5F8();
extern int fn_828EA610();
extern int fn_82A1BB28();
extern int fn_82A1BB50();
extern int fn_82A1BC70();
extern int fn_82A1DD38();
extern int fn_82F64020();
extern int fn_82F68CC0();
extern unsigned int iStack_272;
extern unsigned int iStack_2c0;
extern unsigned int uStack_265;
extern unsigned int uStack_269;
extern unsigned int uStack_26d;
extern unsigned int uStack_26e;
extern unsigned int uStack_273;
extern unsigned int uStack_29d;
extern unsigned int uStack_29f;
extern unsigned int uStack_2a0;
extern unsigned int uStack_2b0;
extern unsigned int uStack_2b4;
extern unsigned int uStack_2b8;
extern unsigned int uStack_2bc;


void fn_8245BC50(int param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar7;
  undefined8 *puVar5;
  int iVar6;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  char *pcVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  int iStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined1 uStack_2a0;
  undefined2 uStack_29f;
  undefined2 uStack_29d;
  undefined1 auStack_29b [40];
  undefined1 uStack_273;
  int iStack_272;
  undefined1 uStack_26e;
  undefined4 uStack_26d;
  undefined4 uStack_269;
  undefined2 uStack_265;
  char acStack_260 [608];
  
  *(undefined4 *)(param_1 + 0x698) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x560) + 8) = 0;
  puVar14 = (undefined8 *)(param_1 + 0x598);
  lVar13 = 0;
  iStack_2c0 = (*(uint **)(param_1 + 0x560))[1] - 0x3d;
  uVar2 = **(uint **)(param_1 + 0x560);
  uVar12 = (ulonglong)uVar2;
  do {
    uVar3 = fn_8225C590();
    lVar4 = fn_8225D9B8(uVar3,lVar13);
    if ((((lVar4 == 0) || (cVar7 = fn_828EA610(lVar4), cVar7 != '\0')) ||
        (cVar7 = fn_828EA5F8(lVar4), cVar7 == '\0')) ||
       (cVar7 = fn_82512508(lVar4), cVar7 == '\0')) {
      *puVar14 = 0;
    }
    else {
      puVar5 = (undefined8 *)fn_828B8F40(lVar4);
      *puVar14 = *puVar5;
    }
    lVar13 = lVar13 + 1;
    puVar14 = puVar14 + 1;
  } while ((int)lVar13 < 4);
  fn_82F68CC0(auStack_29b,param_1 + 0x590,0x28);
  uStack_29f = *(undefined2 *)(param_1 + 0x65c);
  uStack_29d = *(undefined2 *)(param_1 + 0x65e);
  uStack_265 = *(undefined2 *)(param_1 + 0x690);
  uStack_26d = 0;
  uStack_269 = 0;
  if ((*(int *)(param_1 + 0x660) == 0) || ((int)param_2 == 1)) {
    bVar1 = false;
LAB_8245bdbc:
    if (bVar1) {
      uStack_273 = 1;
      goto LAB_8245bde8;
    }
  }
  else {
    uStack_2b0 = *(undefined4 *)(param_1 + 0x668);
    uStack_2b4 = *(undefined4 *)(param_1 + 0x66c);
    uStack_2b8 = 0;
    uStack_2bc = 0;
    uStack_26d = uStack_2b0;
    uStack_269 = uStack_2b4;
    iVar6 = fn_82A1BB50(1,&uStack_2b8,0,&uStack_2bc);
    if (-1 < iVar6) {
      iVar6 = fn_82A1BB28(uStack_2bc,uVar12 + 0x3d,&iStack_2c0,param_3,param_4);
      bVar1 = -1 < iVar6;
      fn_82A1BC70(uStack_2bc);
      goto LAB_8245bdbc;
    }
  }
  fn_82A1DD38(uVar12 + 0x3d,param_3,param_4);
  iStack_2c0 = (int)param_4;
  uStack_273 = 0;
LAB_8245bde8:
  uStack_26e = (undefined1)param_2;
  iStack_272 = iStack_2c0 + 0x3d;
  uStack_2a0 = 0x80;
  fn_82A1DD38(uVar12,&uStack_2a0,0x3d);
  iVar6 = iStack_272;
  *(int *)(*(int *)(param_1 + 0x560) + 8) = iStack_2c0 + 0x3d;
  *(uint *)(param_1 + 0x53c) = (int)(param_2 + -1) - ((int)param_2 + -2 + (uint)(param_2 + -1 == 0))
  ;
  *(undefined4 *)(param_1 + 0x540) = *(undefined4 *)(param_1 + 0x69c);
  if (*(int *)(param_1 + 0xc4) == 8) {
    puVar10 = (undefined4 *)(param_1 + 100);
    if (0xf < *(uint *)(param_1 + 0x78)) {
      puVar10 = (undefined4 *)*puVar10;
    }
    puVar8 = (undefined4 *)(param_1 + 0x80);
    if (0xf < *(uint *)(param_1 + 0x94)) {
      puVar8 = (undefined4 *)*puVar8;
    }
    fn_82F64020(acStack_260,0x200,0xffffffff821bab18,puVar8,puVar10,0xffffffff821baaf8);
    pcVar11 = acStack_260;
    do {
      cVar7 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar7 != '\0');
    fn_82230360(param_1 + 0xf0,acStack_260,pcVar11 + (-1 - (int)acStack_260));
    *(int *)(param_1 + 200) = iVar6;
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(uint *)(param_1 + 0xd8) = uVar2;
    *(undefined4 *)(param_1 + 0xcc) = 0;
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0x100);
    uVar3 = fn_82522FF0();
    *(undefined8 *)(param_1 + 0x50) = uVar3;
    uVar9 = 3;
  }
  else {
    uVar9 = 0xf;
  }
  *(undefined4 *)(param_1 + 0xc4) = uVar9;
  return;
}

