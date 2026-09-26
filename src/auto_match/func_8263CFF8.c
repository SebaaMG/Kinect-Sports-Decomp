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
extern int fn_8263CD40();
extern unsigned int iStack_a8;
extern unsigned int iStack_ac;
extern unsigned int iStack_b0;
extern unsigned int iStack_bc;
extern unsigned int iStack_c0;
extern unsigned int uStack_a4;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;


void fn_8263CFF8(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  uint param_5,uint param_6,undefined8 param_7,undefined8 param_8,ulonglong param_9)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  undefined4 in_stack_00000054;
  undefined4 in_stack_0000005c;
  int iStack_c0;
  int iStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  uint uStack_a4;
  int aiStack_a0 [40];
  
  uVar5 = (param_9 & 0xffffffff) >> 0x10 & 3;
  iVar11 = 1;
  if (uVar5 == 0) {
    iVar10 = 1;
  }
  else {
    iVar10 = 0;
    if (uVar5 != 1) {
      iVar11 = 0;
    }
  }
  uVar1 = 0x28 << iVar11;
  uVar6 = (ulonglong)uVar1;
  uVar2 = 8 << iVar10;
  uVar4 = (ulonglong)uVar2;
  uVar5 = (uVar6 + param_3) - 1;
  uVar12 = (uVar4 + param_4) - 1;
  iVar14 = ((int)uVar5 / (int)uVar1) * uVar1;
  iVar13 = ((int)param_5 / (int)uVar1) * uVar1;
  trapWord(6,uVar6,0);
  trapWord(6,uVar6,0);
  trapWord(6,uVar4,0);
  trapWord(6,uVar4,0);
  trapWord(5,uVar6 & ~(((uVar5 & 0x7fffffff) << 1 | (uVar5 & 0xffffffff) >> 0x1f) - 1),0xffff);
  trapWord(5,uVar4 & ~(((uVar12 & 0x7fffffff) << 1 | (uVar12 & 0xffffffff) >> 0x1f) - 1),0xffff);
  iVar9 = ((int)uVar12 / (int)uVar2) * uVar2;
  trapWord(5,uVar6 & ~((((ulonglong)param_5 & 0x7fffffff) << 1 | (ulonglong)(param_5 >> 0x1f)) - 1),
           0xffff);
  trapWord(5,uVar4 & ~((((ulonglong)param_6 & 0x7fffffff) << 1 | (ulonglong)(param_6 >> 0x1f)) - 1),
           0xffff);
  iVar8 = ((int)param_6 / (int)uVar2) * uVar2;
  iStack_bc = (int)param_4;
  iStack_c0 = (int)param_3;
  if ((iVar14 < iVar13) && (iVar9 < iVar8)) {
    piVar7 = &iStack_b0;
    if (iStack_c0 < iVar14) {
      piVar7 = aiStack_a0;
      iStack_b0 = iStack_c0;
      iStack_ac = iStack_bc;
      iStack_a8 = iVar14;
      uStack_a4 = param_6;
    }
    if (iVar13 < (int)param_5) {
      *piVar7 = iVar13;
      piVar7[1] = iStack_bc;
      piVar7[2] = param_5;
      piVar7[3] = param_6;
      piVar7 = piVar7 + 4;
    }
    if (iStack_bc < iVar9) {
      *piVar7 = iVar14;
      piVar7[1] = iStack_bc;
      piVar7[2] = iVar13;
      piVar7[3] = iVar9;
      piVar7 = piVar7 + 4;
    }
    if (iVar8 < (int)param_6) {
      *piVar7 = iVar14;
      piVar7[1] = iVar8;
      piVar7[2] = iVar13;
      piVar7[3] = param_6;
      piVar7 = piVar7 + 4;
    }
    iVar3 = (int)piVar7 - (int)&iStack_b0 >> 4;
    if (iVar3 != 0) {
      fn_8263CD40(param_1,param_2,iVar3,&iStack_b0,param_7,param_6,param_9,in_stack_00000054,
                    in_stack_0000005c);
    }
    iStack_c0 = iVar14 >> iVar11;
    iStack_bc = iVar9 >> iVar10;
    uStack_b8 = iVar13 >> iVar11;
    uStack_b4 = iVar8 >> iVar10;
    fn_8263CD40(param_1,param_2,1,&iStack_c0,param_7);
  }
  else {
    uStack_b8 = param_5;
    uStack_b4 = param_6;
    fn_8263CD40(param_1,param_2,1,&iStack_c0,param_7,param_6,param_9,in_stack_00000054,
                  in_stack_0000005c);
  }
  return;
}

