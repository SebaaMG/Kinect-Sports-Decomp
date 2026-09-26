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
extern unsigned int *auStack_340;
extern unsigned int *auStack_350;
extern unsigned int *auStack_360;
extern int fn_82E9AC18();
extern int fn_82E9B140();
extern int fn_82EAA320();
extern int fn_82EB71E8();
extern int fn_82EBF358();
extern int fn_82F261D8();
extern int fn_82F26F98();
extern unsigned int iStack_368;
extern unsigned int iStack_370;
extern unsigned int iStack_378;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;
extern unsigned int uStack00000044;
extern unsigned int uStack_364;
extern unsigned int uStack_36c;
extern unsigned int uStack_374;
extern unsigned int uStack_37c;
extern unsigned int uStack_380;


void fn_82EC96A8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5
                  ,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined4 uStack0000001c;
  undefined4 uStack00000024;
  undefined4 uStack0000002c;
  uint uStack00000034;
  undefined4 uStack0000003c;
  undefined4 uStack00000044;
  int *in_stack_00000054;
  int in_stack_0000005c;
  undefined4 in_stack_00000064;
  undefined4 in_stack_0000006c;
  int in_stack_00000074;
  int in_stack_0000007c;
  int in_stack_0000009c;
  int in_stack_000000a4;
  uint *in_stack_000000c4;
  uint *in_stack_000000cc;
  int *in_stack_000000d4;
  uint uStack_380;
  uint uStack_37c;
  int iStack_378;
  uint uStack_374;
  int iStack_370;
  uint uStack_36c;
  int iStack_368;
  uint uStack_364;
  uint auStack_360 [4];
  uint auStack_350 [4];
  undefined1 auStack_340 [832];
  
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  uStack00000034 = param_5;
  uStack0000003c = param_6;
  uStack00000044 = param_7;
  if (in_stack_0000009c == 0) {
    fn_82EB71E8();
  }
  else {
    iStack_378 = in_stack_0000007c;
    iStack_370 = in_stack_00000074;
    fn_82EBF358();
  }
  uVar8 = uStack_37c;
  uVar7 = uStack_380;
  uVar14 = (ulonglong)uStack_37c;
  uVar13 = (ulonglong)uStack_380;
  if ((*(int *)(param_1 + 0x6d74) != 0) && (*(int *)(param_1 + 0x6d84) == 0)) {
    uStack_36c = uStack_380;
    uStack_374 = uStack_37c;
    fn_82F261D8(param_1,&uStack_36c,&uStack_374,in_stack_00000064,in_stack_0000006c);
    lVar11 = (longlong)((int)uStack_374 >> 2) * (longlong)*(int *)(param_1 + 0x564);
    if (in_stack_000000a4 == 1) {
      (**(code **)(param_1 + 0x9b8))(lVar11 + ((int)uStack_36c >> 2) + (ulonglong)uStack00000034);
    }
    else {
      (**(code **)(param_1 + 0x9c0))
                (lVar11 + ((int)uStack_36c >> 2) + (ulonglong)uStack00000034,
                 *(int *)(param_1 + 0x564),auStack_340,0x10,uStack_36c,uStack_374,in_stack_000000a4,
                 *(undefined4 *)(param_1 + 0x618));
    }
    fn_82E9AC18(param_1,uStack0000001c,0x10,auStack_340,0x10,0x10,0x10,in_stack_0000005c);
    auStack_350[0] = uStack_36c;
    auStack_360[0] = uStack_374;
    fn_82EAA320(param_1,auStack_350,auStack_360,&uStack_380,&uStack_37c,1);
    uVar3 = uStack_37c;
    uVar2 = uStack_380;
    iVar15 = iStack_370;
    uVar6 = uStack_364;
    iVar17 = iStack_378;
    if ((*(uint *)(param_1 + 0x6dc4) & 1) != 0) {
      fn_82F26F98(param_1,uStack0000003c,*(undefined4 *)(param_1 + 0x568),auStack_340,8,
                        uStack_380,uStack_37c,0);
      fn_82E9AC18(param_1,uStack00000024,8,auStack_340,8,8,8,in_stack_0000005c);
      iVar15 = uStack_380 + iStack_370;
      uVar6 = uStack_37c | uStack_364;
      iVar17 = iStack_368 + iStack_378;
    }
    if ((*(uint *)(param_1 + 0x6dc4) & 2) != 0) {
      fn_82F26F98(param_1,uStack00000044,*(undefined4 *)(param_1 + 0x568),auStack_340,8,uVar2,
                        uVar3,0);
      fn_82E9AC18(param_1,uStack0000002c,8,auStack_340,8,8,8,in_stack_0000005c);
      iVar17 = iStack_368 + iVar17;
      iVar15 = uStack_380 + iVar15;
      uVar6 = uStack_37c | uVar6;
    }
    iVar1 = *in_stack_00000054;
    uVar19 = (ulonglong)(uint)in_stack_00000054[3];
    uVar18 = (ulonglong)(uint)in_stack_00000054[2];
    if (iVar1 != 0) {
      uVar16 = (ulonglong)*(uint *)(param_1 + 0xa30);
      uVar12 = (ulonglong)*(uint *)(param_1 + 0xa2c);
      uVar2 = *(uint *)(param_1 + 0xa38);
      uVar3 = *(uint *)(param_1 + 0xa34);
      uVar4 = in_stack_00000054[5];
      uVar5 = in_stack_00000054[4];
      iVar9 = fn_82E9B140(param_1,((uVar12 - uVar18) + uVar13 & (ulonglong)uVar3) - uVar12,
                            ((uVar16 - uVar19) + uVar14 & (ulonglong)uVar2) - uVar16,uVar6,0);
      iVar10 = fn_82E9B140(param_1,((uVar12 - uVar5) + uVar13 & (ulonglong)uVar3) - uVar12,
                             ((uVar16 - uVar4) + uVar14 & (ulonglong)uVar2) - uVar16,uVar6,0);
      if (iVar10 <= iVar9) {
        uVar18 = (ulonglong)uVar5;
        uVar19 = (ulonglong)uVar4;
      }
    }
    iVar9 = fn_82E9B140(param_1,((*(uint *)(param_1 + 0xa2c) - uVar18) + uVar13 &
                                  (ulonglong)*(uint *)(param_1 + 0xa34)) -
                                  (ulonglong)*(uint *)(param_1 + 0xa2c),
                          ((*(uint *)(param_1 + 0xa30) - uVar19) + uVar14 &
                          (ulonglong)*(uint *)(param_1 + 0xa38)) -
                          (ulonglong)*(uint *)(param_1 + 0xa30),uVar6,in_stack_0000009c);
    iVar9 = iVar9 + iVar17;
    if (iVar1 != 0) {
      iVar9 = iVar9 + 1;
    }
    iStack_378 = *(int *)(in_stack_0000005c + 0x6c) * iVar9 + iVar15;
  }
  *in_stack_000000c4 = uVar7;
  *in_stack_000000cc = uVar8;
  *in_stack_000000d4 = iStack_378;
  return;
}

