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
extern unsigned int *auStack_68;
extern int fn_82A2D260();
extern int fn_82A2DC18();
extern int fn_82A2E6A8();
extern int fn_82A2EC98();
extern unsigned int iStack_6c;
extern unsigned int uStack_70;


undefined8 fn_82A300B8(int param_1,int param_2,longlong param_3,ulonglong param_4)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uStack_70;
  int iStack_6c;
  undefined1 auStack_68 [104];
  
  uVar4 = (ulonglong)*(uint *)(param_2 + 0x14);
  uVar10 = param_3 + param_4 + 0xfff & 0xfffff000;
  uVar7 = 0;
  if (uVar4 < uVar10) {
    uVar7 = (uVar10 - uVar4 & 0xffffffff) >> 0xc;
    uVar10 = uVar4;
  }
  if (*(uint *)(param_2 + 0x1c) < uVar10) {
    uVar10 = (ulonglong)*(uint *)(param_2 + 0x1c);
  }
  uVar4 = param_4 & 0xfffff000;
  if (uVar10 < (param_4 & 0xfffff000)) {
    uVar4 = uVar10;
  }
  if (((uVar7 != 0) || ((uVar10 - uVar4 & 0xffffffff) != 0x1000)) &&
     ((ulonglong)*(uint *)(param_1 + 0xa0) <
      (((uVar10 - uVar4 & 0xffffffff) >> 0xc) + uVar7 + (ulonglong)*(uint *)(param_1 + 0xa8) &
      0xffffffff))) {
    uVar6 = *(uint *)(param_2 + 0x28);
    uVar9 = *(undefined4 *)(param_2 + 0x2c);
    uVar8 = *(undefined4 *)(param_2 + 0x30);
    for (uVar11 = uVar4; (uVar11 & 0xffffffff) < uVar10; uVar11 = uVar11 + 0x1000) {
      uVar1 = fn_82A2E6A8(param_1,param_2,uVar11,&uStack_70,auStack_68,0);
      uVar5 = uStack_70;
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      uVar1 = fn_82A2DC18(param_1,uStack_70,0,&iStack_6c);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      uVar2 = iStack_6c - *(int *)(param_1 + 0x34);
      iVar3 = (((int)uVar2 >> 0xc) + (uint)((int)uVar2 < 0 && (uVar2 & 0xfff) != 0)) * 8 +
              *(int *)(param_1 + 0x30);
      uVar5 = *(uint *)((uVar5 % 0xaa) * 0x18 + iStack_6c + 0x14) >> 0x1e;
      if (((*(byte *)(iVar3 + 7) & 4) == 0) && (uVar5 == 3)) {
        uVar5 = 2;
      }
      if (uVar5 == 2) {
        uVar7 = uVar7 + 1;
        if (((uVar11 & 0xffffffff) == uVar4) && (uVar4 < uVar6)) {
LAB_82a30228:
          uVar8 = *(undefined4 *)(param_2 + 0x30);
          uVar9 = *(undefined4 *)(param_2 + 0x2c);
          uVar6 = *(uint *)(param_2 + 0x28);
        }
      }
      else {
        if (uVar5 != 3) {
          fn_82A2D260(param_1,0xffffffffc0000032);
          uVar6 = iStack_6c - *(int *)(param_1 + 0x34);
          iVar3 = (((int)uVar6 >> 0xc) + (uint)((int)uVar6 < 0 && (uVar6 & 0xfff) != 0)) * 8 +
                  *(int *)(param_1 + 0x30);
          *(char *)(iVar3 + 4) = *(char *)(iVar3 + 4) + -1;
          return 0xffffffffc0000032;
        }
        if ((uVar11 & 0xffffffff) == uVar4) goto LAB_82a30228;
      }
      *(char *)(iVar3 + 4) = *(char *)(iVar3 + 4) + -1;
    }
    if (uVar6 != *(uint *)(param_2 + 0x28)) {
      *(uint *)(param_2 + 0x28) = uVar6;
      *(undefined4 *)(param_2 + 0x2c) = uVar9;
      *(undefined4 *)(param_2 + 0x30) = uVar8;
    }
    if ((uVar7 & 0xffffffff) != 0) {
      uVar7 = uVar7 + *(uint *)(param_1 + 0xa8);
      if (((ulonglong)*(uint *)(param_1 + 0xa0) < (uVar7 & 0xffffffff)) &&
         (uVar1 = fn_82A2EC98(param_1,uVar7 - *(uint *)(param_1 + 0xa0)), (int)uVar1 < 0)) {
        return uVar1;
      }
    }
  }
  return 0;
}

