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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern int fn_82E9AC18();
extern int fn_82F26110();
extern unsigned int *iStack_a8;
extern unsigned int iStack_ac;
extern unsigned int lbl_82005730;
extern unsigned int stack0x00000064;
extern unsigned int stack0x0000006c;
extern unsigned int stack0x00000074;
extern unsigned int stack0x0000007c;


void fn_82EA9D68(int param_1,int param_2,longlong param_3,longlong param_4,int param_5,int param_6
                  ,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  code *pcVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  byte *pbVar25;
  byte *pbVar26;
  byte *pbVar27;
  byte *pbVar28;
  byte *pbVar29;
  byte *pbVar30;
  byte *pbVar31;
  byte *pbVar32;
  int iVar33;
  byte *pbVar34;
  longlong lVar35;
  byte *pbVar36;
  int in_stack_00000054;
  undefined4 in_stack_0000005c;
  int in_stack_00000064;
  int in_stack_0000006c;
  int in_stack_00000074;
  int in_stack_0000007c;
  int in_stack_00000084;
  int *in_stack_0000008c;
  int iStack_ac;
  int iStack_a8;
  
  pcVar2 = *(code **)(in_stack_00000084 + 8);
  iStack_ac = 0;
  fn_82F26110(param_1,&stack0x00000064,&stack0x0000006c,param_7,param_8);
  lVar35 = (longlong)(in_stack_0000006c >> 2) * (longlong)*(int *)(param_1 + 0x564) +
           (longlong)(in_stack_00000064 >> 2);
  if (in_stack_00000054 == 1) {
    (**(code **)(param_1 + 0x9b8))(lVar35 + param_3);
  }
  else {
    (**(code **)(param_1 + 0x9c0))
              (lVar35 + param_3,*(int *)(param_1 + 0x564),param_5,0x10,in_stack_00000064,
               in_stack_0000006c,0,*(undefined4 *)(param_1 + 0x618));
  }
  fn_82F26110(param_1,&stack0x00000074,&stack0x0000007c,param_7,param_8);
  iVar33 = *(int *)(param_1 + 0x564);
  if (in_stack_00000054 == 1) {
    (**(code **)(param_1 + 0x9b8))
              ((longlong)(in_stack_0000007c >> 2) * (longlong)iVar33 +
               (longlong)(in_stack_00000074 >> 2) + param_4);
  }
  else {
    (**(code **)(param_1 + 0x9c0))
              ((longlong)(in_stack_0000007c >> 2) * (longlong)iVar33 +
               (longlong)(in_stack_00000074 >> 2) + param_4,iVar33,param_5 + 0x100,0x10,
               in_stack_00000074,in_stack_0000007c,0,*(undefined4 *)(param_1 + 0x618));
  }
  (**(code **)(param_1 + 0xb1c))(param_5,0x10,param_5 + 0x100,0x10,param_5,0x10,0x10,0x10);
  if (*(int *)(param_1 + 0x6d74) == 0) {
    if (*(int *)(param_1 + 0x6d78) == 0) {
      iVar33 = (*pcVar2)(param_2,0x10,param_5,0x10,in_stack_0000005c);
      *in_stack_0000008c = iVar33;
    }
    else {
      lVar35 = 0x10;
      pbVar34 = (byte *)(param_5 + -0x10);
      pbVar36 = (byte *)(param_2 + 0xe);
      do {
        pbVar3 = pbVar34 + 0x15;
        pbVar4 = pbVar36 + -9;
        pbVar5 = pbVar34 + 0x14;
        pbVar6 = pbVar36 + -10;
        pbVar7 = pbVar34 + 0x17;
        pbVar8 = pbVar34 + 0x18;
        pbVar9 = pbVar34 + 0x19;
        pbVar10 = pbVar34 + 0x1a;
        pbVar11 = pbVar34 + 0x16;
        pbVar12 = pbVar34 + 0x1b;
        pbVar13 = pbVar34 + 0x1c;
        pbVar14 = pbVar34 + 0x1d;
        pbVar15 = pbVar34 + 0x1f;
        pbVar16 = pbVar34 + 0x13;
        pbVar17 = pbVar34 + 0x12;
        pbVar18 = pbVar34 + 0x11;
        pbVar34 = pbVar34 + 0x10;
        pbVar19 = pbVar36 + -8;
        pbVar20 = pbVar36 + -7;
        pbVar21 = pbVar36 + -6;
        pbVar22 = pbVar36 + -5;
        pbVar23 = pbVar36 + -4;
        pbVar24 = pbVar36 + -3;
        pbVar25 = pbVar36 + -2;
        pbVar26 = pbVar36 + -1;
        pbVar27 = pbVar36 + (param_5 - param_2);
        bVar1 = *pbVar36;
        pbVar28 = pbVar36 + 1;
        pbVar29 = pbVar36 + -0xb;
        pbVar30 = pbVar36 + -0xc;
        pbVar31 = pbVar36 + -0xd;
        pbVar32 = pbVar36 + -0xe;
        pbVar36 = pbVar36 + 0x10;
        iStack_ac = ((uint)*pbVar5 - (uint)*pbVar6) * ((uint)*pbVar5 - (uint)*pbVar6) +
                    ((uint)*pbVar3 - (uint)*pbVar4) * ((uint)*pbVar3 - (uint)*pbVar4) +
                    ((uint)*pbVar11 - (uint)*pbVar19) * ((uint)*pbVar11 - (uint)*pbVar19) +
                    ((uint)*pbVar7 - (uint)*pbVar20) * ((uint)*pbVar7 - (uint)*pbVar20) +
                    ((uint)*pbVar8 - (uint)*pbVar21) * ((uint)*pbVar8 - (uint)*pbVar21) +
                    ((uint)*pbVar9 - (uint)*pbVar22) * ((uint)*pbVar9 - (uint)*pbVar22) +
                    ((uint)*pbVar10 - (uint)*pbVar23) * ((uint)*pbVar10 - (uint)*pbVar23) +
                    ((uint)*pbVar12 - (uint)*pbVar24) * ((uint)*pbVar12 - (uint)*pbVar24) +
                    ((uint)*pbVar13 - (uint)*pbVar25) * ((uint)*pbVar13 - (uint)*pbVar25) +
                    ((uint)*pbVar14 - (uint)*pbVar26) * ((uint)*pbVar14 - (uint)*pbVar26) +
                    ((uint)*pbVar27 - (uint)bVar1) * ((uint)*pbVar27 - (uint)bVar1) +
                    ((uint)*pbVar15 - (uint)*pbVar28) * ((uint)*pbVar15 - (uint)*pbVar28) +
                    ((uint)*pbVar34 - (uint)*pbVar32) * ((uint)*pbVar34 - (uint)*pbVar32) +
                    ((uint)*pbVar18 - (uint)*pbVar31) * ((uint)*pbVar18 - (uint)*pbVar31) +
                    ((uint)*pbVar17 - (uint)*pbVar30) * ((uint)*pbVar17 - (uint)*pbVar30) +
                    ((uint)*pbVar16 - (uint)*pbVar29) * ((uint)*pbVar16 - (uint)*pbVar29) +
                    iStack_ac;
        lVar35 = lVar35 + -1;
      } while (lVar35 != 0);
      *in_stack_0000008c = (int)((double)SQRT((float)(longlong)iStack_ac) + lbl_82005730);
    }
  }
  else {
    fn_82E9AC18(param_1,param_2,0x10,param_5,0x10,0x10,0x10,param_6);
    *in_stack_0000008c = *(int *)(param_6 + 0x6c) * iStack_a8;
  }
  return;
}

