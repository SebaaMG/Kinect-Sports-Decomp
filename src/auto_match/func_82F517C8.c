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
extern unsigned int *auStack_40;
extern unsigned int *auStack_48;
extern int fn_822315A0();
extern int fn_824B4288();
extern int fn_82517978();
extern int fn_82522ED8();
extern int fn_8265C9E0();
extern int fn_82F51408();
extern int fn_82F51598();
extern int fn_82F51710();
extern int fn_82F526B8();
extern int fn_82F53BF0();
extern int fn_82F572C8();
extern int fn_82F58AE8();
extern int fn_82F58BD8();
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int lbl_82165AD0;
extern unsigned int lbl_82165B14;
extern unsigned int lbl_821AAD20;
extern U64 storeWordConditionalIndexed();


undefined4 * fn_82F517C8(undefined4 *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int in_r0;
  undefined4 *puVar6;
  ulonglong uVar5;
  longlong lVar7;
  longlong lVar8;
  uint *puVar9;
  undefined4 *puVar10;
  char in_RESERVE;
  byte bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iStack_50;
  int iStack_4c;
  undefined1 auStack_48 [4];
  int *piStack_44;
  undefined1 auStack_40 [4];
  int *piStack_3c;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar6 = (undefined4 *)fn_8265C9E0(0x38);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    fn_82F53BF0(puVar6);
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    *puVar6 = &lbl_82165B14;
  }
  puVar10 = puVar6;
  if (param_1 + 2 != &iStack_50) {
    puVar10 = (undefined4 *)0x0;
    fn_82F51408(param_1 + 2,puVar6);
  }
  if (puVar10 != (undefined4 *)0x0) {
    (**(code **)*puVar10)(puVar10,1);
  }
  uVar5 = fn_82F526B8(0x1f0);
  if ((uVar5 & 0xffffffff) == 0) {
    iStack_50 = 0;
  }
  else {
    iStack_50 = fn_82F58AE8(uVar5,puVar6);
  }
  fn_82F51598(param_1,&iStack_50);
  iVar4 = iStack_50;
  if (iStack_50 != 0) {
    fn_82F58BD8(iStack_50);
    fn_82522ED8(iVar4);
  }
  uVar5 = fn_82F526B8(0x1f0);
  bVar1 = (uVar5 & 0xffffffff) == 0;
  bVar11 = bVar1 << 1;
  if (bVar1) {
    iStack_50 = 0;
  }
  else {
    iStack_50 = fn_82F58AE8(uVar5,puVar6);
  }
  fn_82F51598(param_1 + 1,&iStack_50);
  iVar4 = iStack_50;
  if (iStack_50 != 0) {
    fn_82F58BD8(iStack_50);
    fn_82522ED8(iVar4);
  }
  puVar6 = (undefined4 *)fn_82F572C8(auStack_40,*param_1);
  iStack_50 = 0;
  iStack_4c = 0;
  fn_82517978(&iStack_50,*puVar6,puVar6[1],0);
  fn_82F51710(auStack_48,iStack_50);
  if (ZEXT48(piStack_44) != 0) {
    lVar8 = ZEXT48(piStack_44) + 8;
    do {
      puVar9 = (uint *)lVar8;
      lVar7 = (ulonglong)*puVar9 - 1;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(lVar7,0,lVar8);
        *puVar9 = uVar2;
        bVar11 = 2;
      }
    } while (!(bool)(bVar11 >> 1 & 1));
    if ((int)lVar7 == 0) {
      (**(code **)(*piStack_44 + 4))();
    }
  }
  if (iStack_4c != 0) {
    fn_822315A0();
  }
  if (ZEXT48(piStack_3c) != 0) {
    lVar8 = ZEXT48(piStack_3c) + 8;
    do {
      puVar9 = (uint *)lVar8;
      lVar7 = (ulonglong)*puVar9 - 1;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(lVar7,0,lVar8);
        *puVar9 = uVar2;
        bVar11 = 2;
      }
    } while (!(bool)(bVar11 >> 1 & 1));
    if ((int)lVar7 == 0) {
      (**(code **)(*piStack_3c + 4))();
    }
  }
  fn_824B4288(param_1 + 4,0x1c0);
  fn_824B4288(param_1 + 0x74,0x140);
  fn_824B4288(param_1 + 0xc4,0x140);
  fn_824B4288(param_1 + 0x114,0x1c0);
  fn_824B4288(param_1 + 0x184,0x1c0);
  *(undefined8 *)(param_1 + 500) = 0;
  uVar3 = lbl_821AAD20;
  param_1[0x1f6] = 0xffffffff;
  puVar6 = (undefined4 *)((uint)(&lbl_82165AD0 + in_r0) & 0xfffffff0);
  uVar12 = *puVar6;
  uVar13 = puVar6[1];
  uVar14 = puVar6[2];
  uVar15 = puVar6[3];
  param_1[0x1fc] = uVar3;
  puVar6 = (undefined4 *)((uint)(param_1 + 0x1f8) & 0xfffffff0);
  *puVar6 = uVar12;
  puVar6[1] = uVar13;
  puVar6[2] = uVar14;
  puVar6[3] = uVar15;
  return param_1;
}

