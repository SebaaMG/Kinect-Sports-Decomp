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
extern unsigned int *auStack_358;
extern int fn_82E9AC18();
extern int fn_82E9B140();
extern int fn_82EAC2B8();
extern int fn_82EB3118();
extern int fn_82F261D8();
extern unsigned int iStack0000003c;
extern unsigned int iStack_360;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000044;
extern unsigned int uStack0000004c;
extern unsigned int uStack_348;
extern unsigned int uStack_35c;


void fn_82EC8B00(undefined8 param_1,ulonglong param_2,longlong param_3,undefined8 param_4,
                  int *param_5,int param_6,ulonglong param_7,ulonglong param_8)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uStack0000001c;
  int iStack0000003c;
  uint uStack00000044;
  uint uStack0000004c;
  int in_stack_00000054;
  int in_stack_0000007c;
  int in_stack_00000084;
  uint *in_stack_000000a4;
  uint *in_stack_000000ac;
  int *in_stack_000000b4;
  int iStack_360;
  uint uStack_35c;
  uint auStack_358 [2];
  longlong lStack_350;
  undefined8 uStack_348;
  undefined1 auStack_340 [832];
  
  uStack0000001c = (uint)param_2;
  uStack00000044 = (uint)param_7;
  uStack0000004c = (uint)param_8;
  iStack0000003c = param_6;
  if (in_stack_0000007c == 0) {
    lStack_350 = param_3;
    uStack_348 = param_1;
    fn_82EAC2B8();
    param_3 = lStack_350;
    param_1 = uStack_348;
  }
  else {
    iStack_360 = in_stack_00000054;
    fn_82EB3118();
    param_7 = (ulonglong)uStack00000044;
    param_8 = (ulonglong)uStack0000004c;
    param_2 = (ulonglong)uStack0000001c;
  }
  uVar8 = auStack_358[0];
  uVar7 = uStack_35c;
  iVar6 = iStack0000003c;
  iVar11 = (int)param_1;
  uVar14 = (ulonglong)uStack_35c;
  uVar13 = (ulonglong)auStack_358[0];
  if ((*(int *)(iVar11 + 0x6d74) != 0) && (*(int *)(iVar11 + 0x6d84) == 0)) {
    uStack_35c = auStack_358[0];
    auStack_358[0] = uVar7;
    fn_82F261D8(param_1,&uStack_35c,auStack_358,param_7,param_8);
    iVar1 = *(int *)(iVar11 + 0x564);
    if (in_stack_00000084 == 1) {
      (**(code **)(iVar11 + 0x9b8))
                ((longlong)((int)auStack_358[0] >> 2) * (longlong)iVar1 +
                 (longlong)((int)uStack_35c >> 2) + param_3);
    }
    else {
      (**(code **)(iVar11 + 0x9c0))
                ((longlong)((int)auStack_358[0] >> 2) * (longlong)iVar1 +
                 (longlong)((int)uStack_35c >> 2) + param_3,iVar1,auStack_340,0x10,uStack_35c,
                 auStack_358[0],in_stack_00000084,*(undefined4 *)(iVar11 + 0x618));
    }
    fn_82E9AC18(param_1,param_2,0x10,auStack_340,0x10,0x10,0x10,iVar6);
    iVar1 = *param_5;
    uVar17 = (ulonglong)(uint)param_5[3];
    uVar16 = (ulonglong)(uint)param_5[2];
    if (iVar1 != 0) {
      uVar15 = (ulonglong)*(uint *)(iVar11 + 0xa30);
      uVar12 = (ulonglong)*(uint *)(iVar11 + 0xa2c);
      uVar2 = *(uint *)(iVar11 + 0xa38);
      uVar3 = *(uint *)(iVar11 + 0xa34);
      uVar4 = param_5[5];
      uVar5 = param_5[4];
      iVar9 = fn_82E9B140(param_1,((uVar12 - uVar16) + uVar13 & (ulonglong)uVar3) - uVar12,
                            ((uVar15 - uVar17) + uVar14 & (ulonglong)uVar2) - uVar15,iStack_360,0);
      iVar10 = fn_82E9B140(param_1,((uVar12 - uVar5) + uVar13 & (ulonglong)uVar3) - uVar12,
                             ((uVar15 - uVar4) + uVar14 & (ulonglong)uVar2) - uVar15,iStack_360,0);
      if (iVar10 <= iVar9) {
        uVar16 = (ulonglong)uVar5;
        uVar17 = (ulonglong)uVar4;
      }
    }
    iVar11 = fn_82E9B140(param_1,((*(uint *)(iVar11 + 0xa2c) - uVar16) + uVar13 &
                                   (ulonglong)*(uint *)(iVar11 + 0xa34)) -
                                   (ulonglong)*(uint *)(iVar11 + 0xa2c),
                           ((*(uint *)(iVar11 + 0xa30) - uVar17) + uVar14 &
                           (ulonglong)*(uint *)(iVar11 + 0xa38)) -
                           (ulonglong)*(uint *)(iVar11 + 0xa30),iStack_360,in_stack_0000007c);
    iVar11 = iVar11 + (((U64)(lStack_350) >> 0) & 0xFFFFFFFF);
    if (iVar1 != 0) {
      iVar11 = iVar11 + 1;
    }
    iStack_360 = *(int *)(iVar6 + 0x6c) * iVar11 + (((U64)(uStack_348) >> 0) & 0xFFFFFFFF);
  }
  *in_stack_000000a4 = uVar8;
  *in_stack_000000ac = uVar7;
  *in_stack_000000b4 = iStack_360;
  return;
}

