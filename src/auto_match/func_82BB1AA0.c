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
#define _uStack00000020 ((*(U64*)&uStack00000020))
#define _uStack00000028 ((*(U64*)&uStack00000028))
#define _uStack00000030 ((*(U64*)&uStack00000030))
#define _uStack00000038 ((*(U64*)&uStack00000038))
extern int fn_82AB15D0();
extern int fn_82BAF560();
extern int fn_82BC0088();
extern int fn_82BC0340();
extern int fn_82BC0400();
extern unsigned int lbl_820E35F8;
extern unsigned int uStack00000020;
extern unsigned int uStack00000024;
extern unsigned int uStack00000028;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000030;
extern unsigned int uStack00000034;
extern unsigned int uStack00000038;
extern unsigned int uStack0000003c;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


/* WARNING: Removing unreachable block (ram,0x82baff70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int fn_82BB1AA0(int *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined4 uStack00000020;
  undefined4 uStack00000024;
  undefined4 uStack00000028;
  undefined4 uStack0000002c;
  undefined4 uStack00000030;
  undefined4 uStack00000034;
  undefined4 uStack00000038;
  undefined4 uStack0000003c;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  _uStack00000030 = lbl_820E35F8;
  _uStack00000038 = lbl_820E35F8;
  _uStack00000020 = param_2;
  _uStack00000028 = param_3;
  if (*(char *)(*param_1 + 0x571) != '\0') {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dfb98,0xffffffff820dfb20,0x157);
  }
  iVar1 = param_1[3];
  iVar4 = 0;
  iVar6 = 0x3a0;
  lVar10 = 4;
  puVar8 = &uStack_90;
  uStack_88 = uStack00000028;
  uStack_90 = uStack00000020;
  uStack_8c = uStack00000024;
  uStack_84 = uStack0000002c;
  uStack_80 = uStack00000030;
  uStack_7c = uStack00000034;
  uStack_78 = uStack00000038;
  uStack_74 = uStack0000003c;
  do {
    if (iVar4 < 2) {
      *(undefined4 *)(iVar6 + param_1[7]) = 1;
      puVar7 = (undefined4 *)((int)puVar8 + param_1[7] + (0x380 - (int)&uStack_90));
      uVar2 = puVar8[1];
      *puVar7 = *puVar8;
      puVar7[1] = uVar2;
    }
    else {
      *(undefined4 *)(iVar6 + param_1[7]) = 0;
    }
    iVar4 = iVar4 + 1;
    iVar6 = iVar6 + 4;
    puVar8 = puVar8 + 2;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  iVar4 = fn_82BC0340(iVar1,param_1[7]);
  if (iVar4 == 0) {
    param_1[9] = param_1[9] + 1;
    iVar4 = fn_82BAF560(param_1,0xb);
    if (*(int *)(*(int *)(iVar4 + 0x28) + 4) != 1) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dfb7c,0xffffffff820dfb20,0x178);
    }
    iVar6 = *(int *)(iVar4 + 0x28);
    if (*(int *)(iVar6 + 4) == 0) {
      piVar5 = (int *)fn_82BC0088(iVar6,0);
    }
    else {
      piVar5 = *(int **)(iVar6 + 8);
    }
    iVar6 = 0;
    puVar7 = &uStack_90;
    puVar9 = (undefined4 *)(*piVar5 + 0x3a0);
    puVar8 = (undefined4 *)(*piVar5 + 0x380);
    lVar10 = 4;
    do {
      if (iVar6 < 2) {
        uVar2 = *puVar7;
        uVar3 = puVar7[1];
        *puVar9 = 1;
        *puVar8 = uVar2;
        puVar8[1] = uVar3;
      }
      else {
        *puVar9 = 0;
      }
      iVar6 = iVar6 + 1;
      puVar9 = puVar9 + 1;
      puVar7 = puVar7 + 2;
      puVar8 = puVar8 + 2;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    fn_82BC0400(iVar1);
  }
  else {
    iVar4 = *(int *)(iVar4 + 0x1c);
  }
  return iVar4;
}

