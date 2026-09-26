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
extern unsigned int *auStack_90;
extern unsigned int *auStack_9c;
extern int fn_82A2CA20();
extern int fn_82A2D260();
extern int fn_82A2DB28();
extern int fn_82A2DDC0();
extern int fn_82A2E158();
extern int fn_82A2E1D0();
extern int fn_82A2E6A8();
extern int fn_82A2F1D0();
extern int fn_82A2F770();
extern unsigned int uStack_a0;


undefined8
fn_82A302E8(int param_1,int param_2,ulonglong param_3,int param_4,uint *param_5,int *param_6,
             int *param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  uint uStack_a0;
  uint auStack_9c [3];
  undefined1 auStack_90 [144];
  
  param_3 = param_3 & 0xfffff000;
  uVar8 = *(uint *)(param_2 + 0x28);
  uVar11 = (ulonglong)uVar8;
  uVar1 = *(uint *)(param_2 + 0x2c);
  uVar2 = *(uint *)(param_2 + 0x30);
  uVar6 = fn_82A2E6A8(param_1,param_2,param_3,&uStack_a0,auStack_9c,0);
  uVar5 = uStack_a0;
  if ((-1 < (int)uVar6) && (uVar6 = fn_82A2DDC0(param_1,uStack_a0,0,0,param_7), -1 < (int)uVar6))
  {
    iVar10 = *param_7;
    iVar12 = (uStack_a0 % 0xaa) * 0x18 + iVar10;
    uVar3 = *(uint *)(iVar12 + 0x14);
    uVar4 = uVar3 >> 0x1e;
    if (param_3 == *(uint *)(param_2 + 0x1c)) {
      if ((uVar4 == 2) || (uVar4 == 3)) {
        uVar6 = fn_82A2DB28(param_1,uStack_a0,0,param_6,auStack_9c);
        if (-1 < (int)uVar6) {
          *(uint *)(iVar12 + 0x14) = *(uint *)(iVar12 + 0x14) | 0xc0000000;
          *param_5 = uStack_a0;
          return 0;
        }
      }
      else {
        fn_82A2D260(param_1,0xffffffffc0000032);
        uVar6 = 0xffffffffc0000032;
      }
    }
    else {
      if (uVar4 != 3) {
        uVar9 = iVar10 - *(int *)(param_1 + 0x34);
        iVar10 = (((int)uVar9 >> 0xc) + (uint)((int)uVar9 < 0 && (uVar9 & 0xfff) != 0)) * 8 +
                 *(int *)(param_1 + 0x30);
        *(char *)(iVar10 + 4) = *(char *)(iVar10 + 4) + -1;
        if (uVar4 != 2) {
          fn_82A2D260(param_1,0xffffffffc0000032);
          return 0xffffffffc0000032;
        }
        uVar7 = 0xffffffffffffffff;
        uStack_a0 = 0xffffffff;
        if (param_3 != 0) {
          uVar7 = param_3 - 0x1000;
          if (((uVar7 & 0xffffffff) < uVar11) ||
             ((uVar1 + uVar11 & 0xffffffff) <= (uVar7 & 0xffffffff))) {
            uVar6 = fn_82A2E6A8(param_1,param_2,uVar7,&uStack_a0,auStack_9c,0);
            if ((int)uVar6 < 0) {
              return uVar6;
            }
            uVar7 = (ulonglong)uStack_a0;
          }
          else {
            uVar7 = ((uVar7 - uVar11 & 0xffffffff) >> 0xc) + (ulonglong)uVar2;
          }
        }
        uVar6 = fn_82A2F1D0(param_1,1,*(byte *)(param_2 + 0x35) >> 1 & 2,uVar7,uVar3 & 0xffffff,
                              auStack_9c,0);
        if ((int)uVar6 < 0) {
          return uVar6;
        }
        uVar7 = (ulonglong)auStack_9c[0];
        if (*(uint *)(param_2 + 0x20) == uVar5) {
          *(uint *)(param_2 + 0x20) = auStack_9c[0];
        }
        if (*(uint *)(param_2 + 0x24) == uVar5) {
          *(uint *)(param_2 + 0x24) = auStack_9c[0];
        }
        if (((uVar1 + uVar11 & 0xffffffff) == param_3) &&
           (((ulonglong)(uVar1 >> 0xc) + (ulonglong)uVar2 & 0xffffffff) == uVar7)) {
          iVar10 = uVar1 + 0x1000;
          *(uint *)(param_2 + 0x28) = uVar8;
          *(uint *)(param_2 + 0x30) = uVar2;
        }
        else {
          iVar10 = 0x1000;
          *(int *)(param_2 + 0x28) = (int)param_3;
          *(uint *)(param_2 + 0x30) = auStack_9c[0];
        }
        *(int *)(param_2 + 0x2c) = iVar10;
        if ((*(byte *)(param_2 + 0x35) & 4) == 0) {
          *(byte *)(param_2 + 0x35) = *(byte *)(param_2 + 0x35) | 0x10;
        }
        else {
          *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + -1;
        }
        uVar6 = fn_82A2F770(param_1,uVar5,0,auStack_90);
        if ((int)uVar6 < 0) {
          return uVar6;
        }
        if (param_4 == 0) {
          uVar6 = fn_82A2E1D0(param_1,uVar7,uVar5,auStack_90,param_6);
        }
        else {
          uVar6 = fn_82A2DB28(param_1,uVar7,0,param_6,auStack_9c);
        }
        if (-1 < (int)uVar6) {
          if ((param_4 == 0) && ((*(byte *)(param_2 + 0x35) & 4) != 0)) {
            fn_82A2CA20(param_1,param_3,*param_6);
          }
          uVar6 = fn_82A2DDC0(param_1,uVar7,0,0,param_7);
          if ((int)uVar6 < 0) {
            uVar8 = *param_6 - *(int *)(param_1 + 0x34);
            iVar10 = (((int)uVar8 >> 0xc) + (uint)((int)uVar8 < 0 && (uVar8 & 0xfff) != 0)) * 8 +
                     *(int *)(param_1 + 0x30);
            *(char *)(iVar10 + 4) = *(char *)(iVar10 + 4) + -1;
          }
        }
        *param_5 = auStack_9c[0];
        return uVar6;
      }
      if (param_4 == 0) {
        uVar6 = fn_82A2E158(param_1,uStack_a0,iVar12,param_6);
      }
      else {
        uVar6 = fn_82A2DB28(param_1,uStack_a0,0,param_6,auStack_9c);
      }
      if (-1 < (int)uVar6) {
        *param_5 = uStack_a0;
        return 0;
      }
    }
    uVar8 = iVar10 - *(int *)(param_1 + 0x34);
    iVar10 = (((int)uVar8 >> 0xc) + (uint)((int)uVar8 < 0 && (uVar8 & 0xfff) != 0)) * 8 +
             *(int *)(param_1 + 0x30);
    *(char *)(iVar10 + 4) = *(char *)(iVar10 + 4) + -1;
  }
  return uVar6;
}

