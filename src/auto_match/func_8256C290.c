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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_88;
extern unsigned int *auStack_a0;
extern int fn_82230040();
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_8256D528();
extern int fn_82599418();
extern int fn_8259A230();
extern int fn_825BCDA8();
extern int fn_8265C9E0();
extern int fn_827D59F0();
extern int fn_827D7270();
extern int fn_827D9630();
extern int fn_82A1BB18();
extern unsigned int iStack_9c;
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821C5398;
extern unsigned int lbl_8326B7C8;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_ac;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern U64 storeWordConditionalIndexed();


undefined8
fn_8256C290(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,ulonglong param_5
             ,int param_6,undefined8 param_7)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  uint *puVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  char in_RESERVE;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 *puStack_b4;
  undefined **ppuStack_b0;
  undefined4 uStack_ac;
  undefined1 auStack_a0 [4];
  int iStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined1 auStack_88 [24];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  
  uVar11 = lbl_8326B7C8;
  iStack_9c = *(int *)(param_2 + 0x2c4) + 4;
  if (*(int *)(param_2 + 0x2c4) == 0) {
    iStack_9c = 0;
  }
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = 2;
  fn_827D9630(auStack_88,param_1);
  uStack_70 = uVar11;
  uStack_6c = 0;
  uStack_68 = (undefined4)param_7;
  lVar5 = fn_8265C9E0(0x268);
  if (lVar5 != 0) {
    uVar10 = lVar5 + 0x10;
    puVar4 = (undefined4 *)lVar5;
    puVar4[1] = 1;
    puVar4[2] = 1;
    *puVar4 = &lbl_821C5398;
    if (uVar10 != 0) {
      fn_825BCDA8(uVar10,auStack_a0);
    }
    bVar1 = (uVar10 & 0xffffffff) == 0;
    uVar11 = (undefined4)uVar10;
    uStack_b8 = uVar11;
    puStack_b4 = puVar4;
    if (!bVar1) {
      do {
        puVar9 = (uint *)(lVar5 + 8);
        if (in_RESERVE != '\0') {
          uVar3 = storeWordConditionalIndexed((ulonglong)*puVar9 + 1,0,lVar5 + 8);
          *puVar9 = uVar3;
          bVar1 = true;
        }
      } while (!bVar1);
      piVar2 = (int *)puVar4[6];
      if (ZEXT48(piVar2) != 0) {
        lVar7 = ZEXT48(piVar2) + 8;
        do {
          puVar9 = (uint *)lVar7;
          lVar8 = (ulonglong)*puVar9 - 1;
          if (in_RESERVE != '\0') {
            uVar3 = storeWordConditionalIndexed(lVar8,0,lVar7);
            *puVar9 = uVar3;
            bVar1 = true;
          }
        } while (!bVar1);
        if ((int)lVar8 == 0) {
          (**(code **)(*piVar2 + 4))();
        }
      }
      puVar4[6] = puVar4;
      puVar4[5] = uVar11;
    }
    fn_82A1BB18();
    iVar6 = fn_8259A230();
    uStack_c0 = 0;
    uStack_bc = 0;
    if (iVar6 == 1) {
      fn_82517978(&uStack_c0,uVar10,lVar5,0);
      fn_827D7270(param_2,&uStack_c0,param_7,param_3,param_4,0);
    }
    else {
      fn_82517978(&uStack_c0,uVar10,lVar5,0);
      fn_827D59F0(param_2,&uStack_c0,param_7,param_3,param_4,0);
    }
    fn_82599418();
    if ((param_5 & 0xffffffff) != 0) {
      fn_8256D528(param_5,&uStack_b8);
    }
    fn_822315A0(lVar5);
    if (*(int *)(param_6 + 4) != 0) {
      fn_822315A0();
    }
    return 1;
  }
  uStack_ac = 0;
  ppuStack_b0 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_b0);
}

