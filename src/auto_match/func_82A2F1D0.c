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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define _uStack_60 ((*(U64*)&uStack_60))
extern int fn_82A2DDC0();
extern int fn_82A2EC98();
extern int fn_82A2EEB0();
extern int fn_82A2EFF0();
extern unsigned int iStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


undefined8
fn_82A2F1D0(int param_1,longlong param_2,uint param_3,ulonglong param_4,uint param_5,
             undefined4 *param_6,undefined4 *param_7)

{
  byte *pbVar1;
  int iVar2;
  undefined8 uVar3;
  byte *pbVar4;
  ulonglong uVar5;
  uint uVar6;
  int aiStack_70 [4];
  undefined4 uStack_60;
  uint uStack_5c;
  undefined8 uStack_58;
  int iStack_50;
  
  if (param_5 == 0xffffffff) {
    param_5 = 0xffffff;
  }
  if (param_3 != 0) {
    if (param_3 == 1) {
      uVar5 = (ulonglong)*(uint *)(param_1 + 0xa8) + param_2 + 1;
      goto LAB_82a2f244;
    }
    if (param_3 < 3) {
      uVar5 = ((ulonglong)*(uint *)(param_1 + 0xa8) + param_2) - 1;
      goto LAB_82a2f244;
    }
  }
  uVar5 = (ulonglong)*(uint *)(param_1 + 0xa8) + param_2;
LAB_82a2f244:
  if (((uVar5 & 0xffffffff) <= (ulonglong)*(uint *)(param_1 + 0xa0)) ||
     (uVar3 = fn_82A2EC98(param_1,uVar5 - *(uint *)(param_1 + 0xa0)), -1 < (int)uVar3)) {
    if (param_3 == 3) {
      uVar3 = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0xcc) = 1;
      uStack_58 = 0;
      iStack_50 = 0;
      _uStack_60 = CONCAT44((int)param_2,0xffffffff);
      if (*(char *)(param_1 + 0xca) == '\0') {
        uVar3 = fn_82A2EEB0();
      }
      else {
        uVar3 = fn_82A2EFF0(param_1,0,*(char *)(param_1 + 0xca),
                              *(int *)(param_1 + 0xa0) == *(int *)(param_1 + 0x9c),&uStack_60);
      }
      uVar5 = (ulonglong)*(byte *)(param_1 + 200);
      *(undefined1 *)(param_1 + 0xcc) = 0;
      if (uVar5 != 0) {
        pbVar4 = (byte *)(*(int *)(param_1 + 0x30) + -1);
        do {
          pbVar1 = pbVar4 + 8;
          pbVar4 = pbVar4 + 8;
          *pbVar4 = *pbVar1 & 0xf7;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      if ((((U64)(uStack_58) >> 32) & 0xFFFFFFFF) != 0) {
        *(uint *)((((U64)(uStack_58) >> 32) & 0xFFFFFFFF) + 0x14) =
             *(uint *)((((U64)(uStack_58) >> 32) & 0xFFFFFFFF) + 0x14) & 0xff000000 | param_5 & 0xffffff;
        uVar6 = iStack_50 - *(int *)(param_1 + 0x34);
        iVar2 = (((int)uVar6 >> 0xc) + (uint)((int)uVar6 < 0 && (uVar6 & 0xfff) != 0)) * 8 +
                *(int *)(param_1 + 0x30);
        *(char *)(iVar2 + 4) = *(char *)(iVar2 + 4) + -1;
      }
      if ((int)param_4 != -1) {
        uVar3 = fn_82A2DDC0(param_1,param_4,0,0,aiStack_70);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
        iVar2 = ((int)param_4 + (int)((param_4 & 0xffffffff) / 0xaa) * -0xaa) * 0x18 + aiStack_70[0]
        ;
        *(uint *)(iVar2 + 0x14) = uStack_5c & 0xffffff | *(uint *)(iVar2 + 0x14) & 0xff000000;
        uVar6 = aiStack_70[0] - *(int *)(param_1 + 0x34);
        iVar2 = (((int)uVar6 >> 0xc) + (uint)((int)uVar6 < 0 && (uVar6 & 0xfff) != 0)) * 8 +
                *(int *)(param_1 + 0x30);
        *(char *)(iVar2 + 4) = *(char *)(iVar2 + 4) + -1;
      }
      *param_6 = uStack_5c;
      if (param_7 != (undefined4 *)0x0) {
        *param_7 = (((U64)(uStack_58) >> 0) & 0xFFFFFFFF);
      }
    }
  }
  return uVar3;
}

