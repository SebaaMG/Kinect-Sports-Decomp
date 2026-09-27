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
extern int fn_8229CFB8();
extern int fn_822BC1A0();
extern int fn_82414950();
extern int fn_82528948();
extern int fn_82536070();
extern int fn_82536590();
extern unsigned int lbl_821CC160;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_824199A8(uint *param_1,int param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 in_r0;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  bool bVar7;
  undefined1 in_vr0 [16];
  undefined1 in_vr13 [16];
  undefined1 in_vr77 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];

  iVar6 = (int)param_4;
  if (*(int *)(param_2 + 0x24) != 0) {
    if (iVar6 == 0) {
      uVar5 = 0xffffffff821adae0;
    }
    else {
      uVar5 = 0xffffffff821adae8;
    }
    fn_82536070(0xffffffff821adf08,uVar5);
    fn_82536590((ulonglong)*param_1 + 0x147c,0);
    loadVectorLeftIndexed128(in_r0,0xffffffff821cc160);
    loadVectorLeftIndexed128((ulonglong)*param_1,0x5e8);{ V16 _vt0 = loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x70); memcpy(auVar8, &_vt0, 16); }{ V16 _vt1 = vectorRotateLeftImmediateMaskInsert128(auVar8,in_vr13,4,3); memcpy(auVar9, &_vt1, 16); }
    loadVectorLeftIndexed128((ulonglong)*param_1,0x5ec);{ V16 _vt2 = vectorRotateLeftImmediateMaskInsert128(in_vr13,in_vr0,4,3); memcpy(auVar8, &_vt2, 16); }{ V16 _vt3 = vectorRotateLeftImmediateMaskInsert128(auVar9,auVar8,3,2); memcpy(in_vr77, &_vt3, 16); }
  }
  if ((*(int *)(*param_1 + 0xcb8) != 0) && (param_1[0xc] == 0)) {
    param_1[0xc] = param_3;
  }
  fn_822BC1A0(param_2,*(undefined4 *)(param_3 + 0x28),param_4);
  uVar4 = *(undefined4 *)(param_2 + 0x24);
  iVar3 = *(int *)(param_3 + 0x28);
  *(int *)(param_3 + 0x40) = iVar6;
  uVar1 = (uint)LZCOUNT(uVar4) >> 5;
  *(uint *)(param_3 + 0x44) = uVar1;
  *(undefined4 *)(param_3 + 0x2c) = 2;
  memcpy((void *)((const void *)(iVar3 + 0x70U & 0xfffffff0)), in_vr77, 16);
  memcpy((void *)((const void *)(iVar3 + 0x60U & 0xfffffff0)), in_vr77, 16);
  *(undefined4 *)(iVar3 + 0x170) = 0;
  fn_82528948();
  iVar3 = *(int *)(param_3 + 0x28);
  *(int *)(iVar3 + 0x7d4) = *(int *)(iVar3 + 0x7d4) + -1;
  *(int *)(iVar3 + 0x7d8) = *(int *)(iVar3 + 0x7d8) + 1;
  if (uVar1 == 0) {
    *(undefined4 *)(*(int *)(*(int *)(param_3 + 0x28) + 0x8c0) + 0x90) = 1;
  }
  iVar3 = (**(code **)(*(int *)param_1[1] + 0x3c))();
  if (((((iVar3 != 0) && (*(int *)(param_2 + 0x24) != 0)) &&
       (*(int *)(param_1[6] * 0x1ac + param_1[2] + 0x1c) != 0)) &&
      (uVar1 = *param_1, param_1 == *(uint **)(uVar1 + 0x2b20))) &&
     ((*(int *)(uVar1 + 0x2c9c) == 1 || (*(int *)(uVar1 + 0x2c9c) == 0)))) {
    *(undefined4 *)(uVar1 + 0x2c9c) = 2;
  }
  if ((*(int *)(param_2 + 0x24) != 0) && (uVar1 = *param_1, *(int *)(uVar1 + 0xcb8) != 0)) {
    uVar2 = *(uint *)(param_1[6] * 0x1ac + param_1[2] + 0x14);
    if (uVar2 == 0) {
      uVar5 = 1;
LAB_82419bd0:
      uVar4 = *(undefined4 *)(uVar1 + 0x2b50);
    }
    else {
      if (uVar2 == 1) {
        uVar5 = 2;
        goto LAB_82419bd0;
      }
      uVar4 = *(undefined4 *)(uVar1 + 0x2b50);
      if (uVar2 < 3) {
        uVar5 = 3;
      }
      else {
        uVar5 = 4;
      }
    }
    fn_82414950(uVar4,0,uVar5);
  }
  uVar1 = *param_1;
  param_1[0x8d] = lbl_821CC160;
  if (*(int *)(uVar1 + 0xcb8) == 0) {
    if (param_1 != *(uint **)(uVar1 + 0x2b20)) goto LAB_82419c38;
    iVar3 = *(int *)(uVar1 + 0xd4);
    bVar7 = iVar6 == 0;
  }
  else {
    if (param_1 != *(uint **)(uVar1 + 0x2b20)) goto LAB_82419c38;
    iVar3 = *(int *)(uVar1 + 0xd4);
    bVar7 = iVar6 != 0;
  }
  fn_8229CFB8(*(undefined4 *)(iVar3 + 0x1854),0,bVar7 + '\x01');
LAB_82419c38:
  if (param_1 == *(uint **)(*param_1 + 0x2b20)) {
    *(undefined4 *)(*param_1 + 0x2bb0) = 2;
  }
  if (*(int *)(*param_1 + 0xcb8) != 0) {
    param_1[0x6d] = 0;
  }
  return;
}
