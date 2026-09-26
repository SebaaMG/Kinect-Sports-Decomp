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
extern int fn_82E9AC18();
extern int fn_82E9B140();
extern int fn_82EB52E0();
extern int fn_82F261D8();
extern unsigned int iStack0000003c;
extern unsigned int iStack_350;
extern unsigned int iStack_358;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack_354;
extern unsigned int uStack_35c;
extern unsigned int uStack_360;


void fn_82EC93E0(int param_1,undefined4 param_2,uint param_3,undefined8 param_4,int *param_5,
                  int param_6,undefined8 param_7,undefined8 param_8)

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
  ulonglong uVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined4 uStack0000001c;
  uint uStack00000024;
  int iStack0000003c;
  uint *in_stack_00000094;
  uint *in_stack_0000009c;
  int *in_stack_000000a4;
  undefined4 *in_stack_000000ac;
  uint uStack_360;
  uint uStack_35c;
  int iStack_358;
  undefined4 uStack_354;
  int iStack_350;
  undefined1 auStack_340 [832];
  
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  iStack0000003c = param_6;
  fn_82EB52E0();
  uVar8 = uStack_35c;
  uVar7 = uStack_360;
  uVar13 = 0;
  uStack_354 = 0;
  uVar15 = (ulonglong)uStack_360;
  uVar14 = (ulonglong)uStack_35c;
  if ((*(int *)(param_1 + 0x6d74) != 0) && (*(int *)(param_1 + 0x6d84) == 0)) {
    uStack_360 = uStack_35c;
    uStack_35c = uVar7;
    fn_82F261D8(param_1,&uStack_360,&uStack_35c,param_7,param_8);
    (**(code **)(param_1 + 0xa5c))
              ((longlong)((int)uStack_35c >> 2) * (longlong)*(int *)(param_1 + 0x564) +
               (longlong)((int)uStack_360 >> 2) + (ulonglong)uStack00000024,
               *(int *)(param_1 + 0x564),auStack_340,8,uStack_360 & 3,uStack_35c & 3,
               *(undefined4 *)(param_1 + 0x618));
    iVar6 = iStack0000003c;
    fn_82E9AC18(param_1,uStack0000001c,0x10,auStack_340,8,8,8,iStack0000003c);
    uVar13 = uStack_354;
    iVar1 = *param_5;
    uVar17 = (ulonglong)(uint)param_5[3];
    uVar16 = (ulonglong)(uint)param_5[2];
    if (iVar1 != 0) {
      uVar12 = (ulonglong)*(uint *)(param_1 + 0xa30);
      uVar11 = (ulonglong)*(uint *)(param_1 + 0xa2c);
      uVar2 = *(uint *)(param_1 + 0xa38);
      uVar3 = *(uint *)(param_1 + 0xa34);
      uVar4 = param_5[5];
      uVar5 = param_5[4];
      iVar9 = fn_82E9B140(param_1,((uVar11 - uVar16) + uVar14 & (ulonglong)uVar3) - uVar11,
                            ((uVar12 - uVar17) + uVar15 & (ulonglong)uVar2) - uVar12,uStack_354,0);
      iVar10 = fn_82E9B140(param_1,((uVar11 - uVar5) + uVar14 & (ulonglong)uVar3) - uVar11,
                             ((uVar12 - uVar4) + uVar15 & (ulonglong)uVar2) - uVar12,uVar13,0);
      if (iVar10 <= iVar9) {
        uVar16 = (ulonglong)uVar5;
        uVar17 = (ulonglong)uVar4;
      }
    }
    iVar9 = fn_82E9B140(param_1,((*(uint *)(param_1 + 0xa2c) - uVar16) + uVar14 &
                                  (ulonglong)*(uint *)(param_1 + 0xa34)) -
                                  (ulonglong)*(uint *)(param_1 + 0xa2c),
                          ((*(uint *)(param_1 + 0xa30) - uVar17) + uVar15 &
                          (ulonglong)*(uint *)(param_1 + 0xa38)) -
                          (ulonglong)*(uint *)(param_1 + 0xa30),uVar13,0);
    iVar9 = iVar9 + iStack_350;
    if (iVar1 != 0) {
      iVar9 = iVar9 + 1;
    }
    iStack_358 = *(int *)(iVar6 + 0x6c) * iVar9 + iStack_358;
  }
  *in_stack_00000094 = uVar8;
  *in_stack_0000009c = uVar7;
  *in_stack_000000a4 = iStack_358;
  *in_stack_000000ac = uVar13;
  return;
}

