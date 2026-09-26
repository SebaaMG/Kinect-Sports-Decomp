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
extern unsigned int *auStack_7a;
extern unsigned int *auStack_7c;
extern int fn_82A6E1C0();
extern int fn_82A6E290();
extern int fn_82C31808();
extern unsigned int uStack_7e;
extern unsigned int uStack_80;


void fn_82A69D38(int param_1,short *param_2,undefined8 param_3,int param_4,undefined8 param_5)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  short *psVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ushort uStack_80;
  ushort uStack_7e;
  undefined1 auStack_7c [2];
  undefined1 auStack_7a [122];
  
  uVar6 = 0x7fff;
  if (*(int *)(param_1 + 0x48) == 3) {
    fn_82C31808(param_1,param_5);
  }
  iVar7 = 0;
  if (*(short *)(param_1 + 0x22) != 0) {
    iVar9 = 0;
    iVar8 = 0;
    do {
      iVar11 = iVar8 + *(int *)(param_1 + 0x140);
      uVar13 = *(uint *)(iVar9 + *(int *)(param_1 + 0x164)) & 0xffff;
      if (param_4 == 0) {
        if ((*(int *)(param_1 + 0xb0) == 0) && (*(short *)(iVar11 + 0x70) != 0x7fff)) {
          if (*(int *)(param_1 + 0x3c) < 3) {
            uVar13 = ((uint)*(ushort *)(iVar11 + 0x84) - (uint)*(ushort *)(iVar11 + 0x80)) + uVar13
                     & 0xffff;
          }
          else {
            uVar2 = (int)*(short *)(iVar11 + 0x7c) + (int)*(short *)(iVar11 + 0x7a);
            uVar13 = ((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0) + uVar13 &
                     0xffff;
          }
        }
        uVar2 = *(uint *)(iVar9 + *(int *)(param_1 + 0x168));
        if (0 < (int)uVar2) {
          uVar3 = uVar13;
          if ((int)uVar2 <= (int)uVar13) {
            uVar3 = uVar2;
          }
          uVar13 = uVar13 - (uVar3 & 0xffff) & 0xffff;
          *(uint *)(iVar9 + *(int *)(param_1 + 0x168)) =
               *(int *)(iVar9 + *(int *)(param_1 + 0x168)) - (uVar3 & 0xffff);
        }
        *(uint *)(iVar9 + *(int *)(param_1 + 0x164)) = uVar13;
      }
      else {
        lVar10 = 0;
        iVar12 = 0;
        do {
          psVar4 = (short *)(*(int *)(*(int *)(iVar11 + 0x1a8) + 8) + iVar12);
          sVar1 = *psVar4;
          fn_82A6E1C0(param_1,1,psVar4[-1],sVar1,&uStack_7e,auStack_7c);
          fn_82A6E290(param_1,1,sVar1,
                       *(undefined2 *)(*(int *)(*(int *)(iVar11 + 0x1a8) + 8) + iVar12 + 2),
                       (longlong)sVar1,&uStack_80,auStack_7a);
          if (*(int *)(param_1 + 0x3c) < 3) {
            iVar5 = (uint)uStack_80 - (uint)uStack_7e;
          }
          else {
            uVar2 = (int)*(short *)(*(int *)(*(int *)(iVar11 + 0x1a8) + 8) + iVar12 + -2) +
                    (int)sVar1;
            iVar5 = ((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0);
          }
          uVar13 = iVar5 + uVar13 & 0xffff;
          lVar10 = sVar1 + lVar10;
          iVar12 = iVar12 + 2;
        } while ((int)lVar10 < *(int *)(param_1 + 0x100));
        uVar2 = *(uint *)(iVar9 + *(int *)(param_1 + 0x168));
        if (0 < (int)uVar2) {
          if ((int)uVar13 < (int)uVar2) {
            uVar2 = uVar13;
          }
          uVar13 = uVar13 - uVar2 & 0xffff;
        }
      }
      if (uVar13 < uVar6) {
        uVar6 = uVar13;
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 0x6f0;
      iVar9 = iVar9 + 4;
    } while (iVar7 < (int)(uint)*(ushort *)(param_1 + 0x22));
  }
  if (*(int *)(param_1 + 0xb0) == 0) {
    *param_2 = (short)uVar6;
  }
  else {
    if (param_4 != 0) {
      uVar6 = *(uint *)(param_1 + 0x100) & 0xffff;
    }
    uVar13 = *(uint *)(param_1 + 0x180);
    if (uVar6 < *(uint *)(param_1 + 0x180)) {
      uVar13 = uVar6;
    }
    if (param_4 == 0) {
      *param_2 = (short)uVar13 - *(short *)(param_1 + 0xd2);
    }
    else {
      *param_2 = (short)uVar13;
    }
  }
  return;
}

