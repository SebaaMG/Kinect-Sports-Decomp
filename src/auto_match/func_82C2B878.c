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
extern int fn_82F65E20();
extern unsigned int lbl_82002C40;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_820ED364;
extern unsigned int lbl_821AAD20;


undefined8
fn_82C2B878(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
             undefined2 param_6,undefined4 param_7,uint param_8)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  undefined4 in_stack_00000054;
  undefined4 in_stack_0000005c;
  int in_stack_00000064;
  ushort in_stack_0000006e;
  ushort in_stack_00000076;
  int in_stack_0000007c;
  undefined4 in_stack_00000084;
  ushort *in_stack_0000008c;
  
  if (in_stack_0000008c == (ushort *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = (uint)*in_stack_0000008c;
  }
  uVar3 = in_stack_00000064 << 3;
  uVar5 = (1 << ((param_8 & 0xffff) - 1 & 0x3f)) - 1;
  *(undefined4 *)(param_1 + 0x58) = param_7;
  uVar7 = (int)uVar3 >> 3;
  *(short *)(param_1 + 0x6e) = (short)param_8;
  *(uint *)(param_1 + 0x74) = uVar5;
  *(undefined4 *)(param_1 + 0x334) = param_3;
  uVar6 = 0;
  *(undefined4 *)(param_1 + 0x100) = param_4;
  *(undefined2 *)(param_1 + 0x22) = param_6;
  *(undefined4 *)(param_1 + 100) = in_stack_00000084;
  *(undefined4 *)(param_1 + 0x68) = in_stack_00000054;
  *(undefined4 *)(param_1 + 0x54) = in_stack_0000005c;
  *(int *)(param_1 + 0x3c) = param_2;
  *(int *)(param_1 + 0x50) = param_5;
  *(uint *)(param_1 + 0x70) = ~uVar5;
  *(uint *)(param_1 + 0xc) = uVar3;
  *(uint *)(param_1 + 0x40) = (uint)in_stack_0000006e;
  *(uint *)(param_1 + 0x44) = (uint)in_stack_00000076;
  *(uint *)(param_1 + 0x26c) = uVar7;
  uVar5 = uVar7;
  while (1 < uVar5) {
    uVar6 = uVar6 + 1;
    uVar5 = uVar7 >> (uVar6 & 0x3f);
  }
  uVar7 = 0;
  *(uint *)(param_1 + 0x264) = uVar6 + 1;
  if (1 < uVar3) {
    do {
      uVar7 = uVar7 + 1;
    } while (1 < *(uint *)(param_1 + 0xc) >> (uVar7 & 0x3f));
  }
  *(uint *)(param_1 + 0x268) = uVar7 + 1;
  if (*(int *)(param_1 + 0xb0) == 1) {
    uVar7 = 0xffffff7f;
  }
  else {
    uVar7 = 0xfffffd75;
    if (2 < param_2) {
      uVar7 = 0xfffffc75;
    }
  }
  if (((uVar7 & 0xffff & uVar8) == 0) && ((&lbl_820ED364)[uVar8 & 0xf] != '\0')) {
    if ((uVar8 & 10) == 10) {
      uVar8 = 0;
    }
    *(int *)(param_1 + 0x1c4) = param_5;
    *(undefined4 *)(param_1 + 0x1c8) = 0;
    if ((uVar8 & 2) == 0) {
      if ((uVar8 & 8) == 0) {
        if (in_stack_0000007c != param_5) {
          dVar9 = (double)fn_82F65E20((double)(longlong)param_5 /
                                       (double)(longlong)in_stack_0000007c);
          dVar10 = (double)fn_82F65E20(lbl_82002C40);
          fVar1 = (float)(dVar9 / dVar10);
          if (lbl_821AAD20 <= fVar1) {
            fVar1 = fVar1 + lbl_82002C5C;
          }
          else {
            fVar1 = fVar1 - lbl_82002C5C;
          }
          uVar8 = (uint)fVar1;
          *(uint *)(param_1 + 0x1c8) = uVar8;
          if ((int)uVar8 < 1) {
            *(int *)(param_1 + 0x1c4) = *(int *)(param_1 + 0x50) << (-uVar8 & 0x3f);
          }
          else {
            *(int *)(param_1 + 0x1c4) = *(int *)(param_1 + 0x50) >> (uVar8 & 0x3f);
          }
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x1c8) = 0xffffffff;
        *(int *)(param_1 + 0x1c4) = param_5 << 1;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x1c8) = 1;
      *(int *)(param_1 + 0x1c4) = param_5 >> 1;
    }
    iVar2 = *(int *)(param_1 + 0x1c8);
    *(undefined4 *)(param_1 + 0x1bc) = 0;
    *(undefined4 *)(param_1 + 0x1c0) = 0;
    *(undefined4 *)(param_1 + 0x1cc) = 0;
    if (iVar2 < 0) {
      *(undefined4 *)(param_1 + 0x1c0) = 1;
      *(int *)(param_1 + 0x1c8) = -iVar2;
    }
    else if (((0 < iVar2) && (*(undefined4 *)(param_1 + 0x1bc) = 1, 2 < *(int *)(param_1 + 0x3c)))
            && (*(int *)(param_1 + 0xb0) == 0)) {
      *(undefined4 *)(param_1 + 0x1cc) = 1;
      return 0;
    }
    uVar4 = 0;
  }
  else {
    uVar4 = 0xffffffff80040000;
  }
  return uVar4;
}

