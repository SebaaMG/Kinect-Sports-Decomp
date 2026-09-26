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
extern unsigned int *auStack_368;
extern int fn_82E9AC18();
extern int fn_82E9B140();
extern int fn_82EAA320();
extern int fn_82EBBDA0();
extern int fn_82F261D8();
extern int fn_82F26F98();
extern unsigned int iStack_37c;
extern unsigned int iStack_390;
extern unsigned int iStack_398;
extern unsigned int iStack_39c;
extern unsigned int iStack_3a0;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;
extern unsigned int uStack00000044;
extern unsigned int uStack_36c;
extern unsigned int uStack_370;
extern unsigned int uStack_374;
extern unsigned int uStack_378;
extern unsigned int uStack_380;
extern unsigned int uStack_384;
extern unsigned int uStack_388;
extern unsigned int uStack_38c;
extern unsigned int uStack_394;


void fn_82ECA110(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5
                  ,undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  undefined4 uStack0000001c;
  undefined4 uStack00000024;
  undefined4 uStack0000002c;
  uint uStack00000034;
  undefined4 uStack0000003c;
  undefined4 uStack00000044;
  int *in_stack_00000054;
  int *in_stack_0000005c;
  int in_stack_00000064;
  undefined4 in_stack_0000006c;
  undefined4 in_stack_00000074;
  uint in_stack_0000007c;
  uint *in_stack_000000bc;
  undefined4 *in_stack_000000c4;
  int *in_stack_000000cc;
  undefined4 *in_stack_000000d4;
  undefined4 *in_stack_000000dc;
  int *in_stack_000000e4;
  int iStack_3a0;
  int iStack_39c;
  int iStack_398;
  uint uStack_394;
  int iStack_390;
  uint uStack_38c;
  uint uStack_388;
  uint uStack_384;
  uint uStack_380;
  int iStack_37c;
  uint uStack_378;
  uint uStack_374;
  uint uStack_370;
  uint uStack_36c;
  undefined4 auStack_368 [2];
  uint auStack_360 [4];
  uint auStack_350 [4];
  undefined1 auStack_340 [832];
  
  uStack_374 = in_stack_0000007c;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  uStack00000034 = param_5;
  uStack0000003c = param_6;
  uStack00000044 = param_7;
  fn_82EBBDA0(param_1);
  uVar14 = (ulonglong)uStack_370;
  uVar13 = (ulonglong)uStack_36c;
  uVar12 = (ulonglong)uStack_374;
  uVar11 = (ulonglong)uStack_378;
  if ((*(int *)(param_1 + 0x6d74) != 0) && (*(int *)(param_1 + 0x6d84) == 0)) {
    uStack_384 = uStack_378;
    uStack_38c = uStack_374;
    fn_82F261D8(param_1,&uStack_384,&uStack_38c,in_stack_0000006c,in_stack_00000074);
    (**(code **)(param_1 + 0x9b8))
              ((longlong)((int)uStack_38c >> 2) * (longlong)*(int *)(param_1 + 0x564) +
               (longlong)((int)uStack_384 >> 2) + (ulonglong)uStack00000034,
               *(int *)(param_1 + 0x564),auStack_340,0x10,uStack_384,uStack_38c,1,
               *(undefined4 *)(param_1 + 0x618));
    fn_82E9AC18(param_1,uStack0000001c,0x10,auStack_340,0x10,0x10,0x10,in_stack_00000064);
    auStack_360[0] = uStack_384;
    auStack_350[0] = uStack_38c;
    fn_82EAA320(param_1,auStack_360,auStack_350,&iStack_37c,auStack_368,1);
    uVar7 = auStack_368[0];
    iVar17 = iStack_37c;
    if ((*(uint *)(param_1 + 0x6dc4) & 1) != 0) {
      fn_82F26F98(param_1,uStack0000003c,*(undefined4 *)(param_1 + 0x568),auStack_340,8,
                        iStack_37c,auStack_368[0],0);
      fn_82E9AC18(param_1,uStack00000024,8,auStack_340,8,8,8,in_stack_00000064);
      iStack_3a0 = iStack_39c + iStack_3a0;
      iStack_390 = iStack_398 + iStack_390;
      uStack_388 = uStack_394 | uStack_388;
    }
    uVar6 = uStack_388;
    if ((*(uint *)(param_1 + 0x6dc4) & 2) != 0) {
      fn_82F26F98(param_1,uStack00000044,*(undefined4 *)(param_1 + 0x568),auStack_340,8,iVar17
                        ,uVar7,0);
      fn_82E9AC18(param_1,uStack0000002c,8,auStack_340,8,8,8,in_stack_00000064);
      iStack_390 = iStack_398 + iStack_390;
      uStack_388 = uStack_394 | uVar6;
      iStack_3a0 = iStack_39c + iStack_3a0;
    }
    uVar6 = uStack_388;
    iVar17 = *in_stack_00000054;
    uVar18 = (ulonglong)(uint)in_stack_00000054[3];
    uVar16 = (ulonglong)(uint)in_stack_00000054[2];
    if (iVar17 != 0) {
      uVar1 = *(uint *)(param_1 + 0xa38);
      uVar15 = (ulonglong)*(uint *)(param_1 + 0xa30);
      uVar14 = (ulonglong)*(uint *)(param_1 + 0xa2c);
      uStack_380 = *(uint *)(param_1 + 0xa34);
      uVar2 = in_stack_00000054[5];
      uVar3 = in_stack_00000054[4];
      iVar8 = fn_82E9B140(param_1,((uVar14 - uVar16) + uVar11 & (ulonglong)uStack_380) - uVar14,
                            ((uVar15 - uVar18) + uVar12 & (ulonglong)uVar1) - uVar15,uStack_388,0);
      uVar12 = (ulonglong)uStack_374;
      uVar11 = (ulonglong)uStack_378;
      uVar13 = (ulonglong)uStack_380;
      uStack_380 = iVar8;
      iVar8 = fn_82E9B140(param_1,((uVar14 - uVar3) + uVar11 & uVar13) - uVar14,
                            ((uVar15 - uVar2) + uVar12 & (ulonglong)uVar1) - uVar15,uVar6,0);
      uVar13 = (ulonglong)uStack_36c;
      uVar14 = (ulonglong)uStack_370;
      if (iVar8 <= (int)uStack_380) {
        uVar16 = (ulonglong)uVar3;
        uVar18 = (ulonglong)uVar2;
      }
    }
    iVar8 = fn_82E9B140(param_1,((*(uint *)(param_1 + 0xa2c) - uVar16) + uVar11 &
                                  (ulonglong)*(uint *)(param_1 + 0xa34)) -
                                  (ulonglong)*(uint *)(param_1 + 0xa2c),
                          ((*(uint *)(param_1 + 0xa30) - uVar18) + uVar12 &
                          (ulonglong)*(uint *)(param_1 + 0xa38)) -
                          (ulonglong)*(uint *)(param_1 + 0xa30),uVar6,0);
    iVar8 = iVar8 + iStack_3a0;
    if (iVar17 != 0) {
      iVar8 = iVar8 + 1;
    }
    uStack_384 = (uint)uVar13;
    uStack_38c = (uint)uVar14;
    iVar8 = *(int *)(in_stack_00000064 + 0x6c) * iVar8 + iStack_390;
    fn_82F261D8(param_1,&uStack_384,&uStack_38c,in_stack_0000006c,in_stack_00000074);
    (**(code **)(param_1 + 0x9b8))
              ((longlong)((int)uStack_38c >> 2) * (longlong)*(int *)(param_1 + 0x564) +
               (longlong)((int)uStack_384 >> 2) + (ulonglong)uStack00000034,
               *(int *)(param_1 + 0x564),auStack_340,0x10,uStack_384,uStack_38c,1,
               *(undefined4 *)(param_1 + 0x618));
    fn_82E9AC18(param_1,uStack0000001c,0x10,auStack_340,0x10,0x10,0x10,in_stack_00000064);
    auStack_360[0] = uStack_384;
    auStack_350[0] = uStack_38c;
    fn_82EAA320(param_1,auStack_360,auStack_350,&iStack_37c,auStack_368,1);
    uVar6 = uStack_388;
    iVar17 = iVar8;
    if ((*(uint *)(param_1 + 0x6dc4) & 1) != 0) {
      fn_82F26F98(param_1,uStack0000003c,*(undefined4 *)(param_1 + 0x568),auStack_340,8,
                        iStack_37c,auStack_368[0],0);
      fn_82E9AC18(param_1,uStack00000024,8,auStack_340,8,8,8,in_stack_00000064);
      iStack_390 = iStack_398 + iStack_390;
      uVar6 = uStack_394 | uStack_388;
      iVar17 = iStack_39c + iVar8;
    }
    if ((*(uint *)(param_1 + 0x6dc4) & 2) != 0) {
      fn_82F26F98(param_1,uStack00000044,*(undefined4 *)(param_1 + 0x568),auStack_340,8,
                        iStack_37c,auStack_368[0],0);
      fn_82E9AC18(param_1,uStack0000002c,8,auStack_340,8,8,8,in_stack_00000064);
      iVar17 = iStack_39c + iVar17;
      iStack_390 = iStack_398 + iStack_390;
      uVar6 = uStack_394 | uVar6;
    }
    iVar4 = *in_stack_0000005c;
    uVar18 = (ulonglong)(uint)in_stack_0000005c[3];
    uVar16 = (ulonglong)(uint)in_stack_0000005c[2];
    if (iVar4 != 0) {
      uVar15 = (ulonglong)*(uint *)(param_1 + 0xa30);
      uVar11 = (ulonglong)*(uint *)(param_1 + 0xa2c);
      uVar1 = *(uint *)(param_1 + 0xa38);
      uVar2 = *(uint *)(param_1 + 0xa34);
      uVar3 = in_stack_0000005c[5];
      uVar5 = in_stack_0000005c[4];
      iVar9 = fn_82E9B140(param_1,((uVar11 - uVar16) + uVar13 & (ulonglong)uVar2) - uVar11,
                            ((uVar15 - uVar18) + uVar14 & (ulonglong)uVar1) - uVar15,uVar6,0);
      iVar10 = fn_82E9B140(param_1,((uVar11 - uVar5) + uVar13 & (ulonglong)uVar2) - uVar11,
                             ((uVar15 - uVar3) + uVar14 & (ulonglong)uVar1) - uVar15,uVar6,0);
      uVar11 = (ulonglong)uStack_378;
      if (iVar10 <= iVar9) {
        uVar16 = (ulonglong)uVar5;
        uVar18 = (ulonglong)uVar3;
      }
    }
    iVar9 = fn_82E9B140(param_1,((*(uint *)(param_1 + 0xa2c) - uVar16) + uVar13 &
                                  (ulonglong)*(uint *)(param_1 + 0xa34)) -
                                  (ulonglong)*(uint *)(param_1 + 0xa2c),
                          ((*(uint *)(param_1 + 0xa30) - uVar18) + uVar14 &
                          (ulonglong)*(uint *)(param_1 + 0xa38)) -
                          (ulonglong)*(uint *)(param_1 + 0xa30),uVar6,0);
    iVar9 = iVar9 + iVar17;
    if (iVar4 != 0) {
      iVar9 = iVar9 + 1;
    }
    uStack_380 = *(int *)(in_stack_00000064 + 0x6c) * iVar9 + iStack_390;
    iStack_37c = iVar8;
    uStack_378 = (uint)uVar11;
  }
  *in_stack_000000bc = uStack_378;
  *in_stack_000000c4 = (int)uVar12;
  *in_stack_000000cc = iStack_37c;
  *in_stack_000000d4 = (int)uVar13;
  *in_stack_000000dc = (int)uVar14;
  *in_stack_000000e4 = uStack_380;
  return;
}

