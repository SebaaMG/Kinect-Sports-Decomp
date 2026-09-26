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
#define TBLr 0
extern int fn_82CE8AF0();
extern int fn_82CE8E78();
extern int fn_830ABD78();
extern int fn_830B1390();
extern unsigned int iStack_a8;
extern unsigned int lbl_8202CF7C;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_8a;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_ba;
extern unsigned int uStack_bc;
extern unsigned int uStack_be;
extern unsigned int uStack_bf;
extern unsigned int uStack_c0;


void fn_82DC51F0(uint *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined1 uStack_c0;
  undefined1 uStack_bf;
  undefined1 uStack_be;
  undefined2 uStack_bc;
  undefined2 uStack_ba;
  undefined2 uStack_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_90;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar5 = *(undefined4 **)(iVar3 + 4);
  if (puVar5 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar5 = "LtIntegrate";
    puVar5[3] = "StSolve";
    uVar2 = TBLr;
    puVar5[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 4) = puVar5 + 4;
  }
  iVar3 = *(int *)(param_3 + 0x20);
  iVar4 = *(int *)(param_3 + 0x28);
  iVar1 = *(int *)(param_3 + 0x2c);
  uVar6 = (((ulonglong)*(uint *)(param_3 + 0x38) & 0x3fffffff) * 4 + 0xf & 0xffffffff) >> 4;
  if ((int)uVar6 != 0) {
    puVar5 = (undefined4 *)(*(int *)(param_3 + 0x30) + iVar3 + -4);
    do {
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5 = puVar5 + 4;
      *puVar5 = 0;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  fn_830ABD78((ulonglong)*param_1 + 0x1e0,iVar1 + iVar3,iVar4 + iVar3);
  uStack_b0 = *(undefined2 *)(param_3 + 0x10);
  uStack_c0 = 0xb;
  uStack_ac = *(undefined4 *)(param_3 + 0x14);
  uStack_bf = 0;
  uStack_be = 2;
  uStack_bc = 0x40;
  uStack_ba = 0xffff;
  iVar3 = *(int *)(param_3 + 0x18);
  uStack_a4 = *(undefined4 *)(param_3 + 0x1c);
  uStack_a0 = *(undefined4 *)(iVar3 + 0x78);
  uStack_8a = 0;
  uStack_8c = *(undefined2 *)(iVar3 + 0x54);
  uStack_90 = *(undefined4 *)(iVar3 + 0x14);
  iStack_a8 = iVar3;
  fn_82CE8AF0(param_2,&uStack_c0,0);
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar5 = *(undefined4 **)(iVar4 + 4);
  if (puVar5 < *(undefined4 **)(iVar4 + 0xc)) {
    *puVar5 = "StSolverExport";
    uVar2 = TBLr;
    puVar5[1] = (int)uVar2;
    *(undefined4 **)(iVar4 + 4) = puVar5 + 3;
  }
  fn_830B1390((ulonglong)*param_1 + 0x1e0,*(undefined4 *)(iVar3 + 0x40),
                  *(undefined4 *)(iVar3 + 0x3c),*(undefined4 *)(iVar3 + 0x30));
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar5 = *(undefined4 **)(iVar3 + 4);
  if (puVar5 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar5 = &lbl_8202CF7C;
    uVar2 = TBLr;
    puVar5[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 4) = puVar5 + 3;
  }
  fn_82CE8E78(param_2,param_3,param_3,0);
  return;
}

