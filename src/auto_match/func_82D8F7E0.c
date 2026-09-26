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
extern int fn_82CE5410();
extern int fn_83082030();


void fn_82D8F7E0(undefined4 *param_1,int *param_2,int param_3,int param_4,int *param_5)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int aiStack_50 [20];
  
  uVar2 = *(uint *)(param_4 + 4);
  uVar11 = (ulonglong)uVar2;
  piVar4 = (int *)fn_82CE5410();
  iVar3 = *piVar4;
  *piVar4 = (uVar2 * 4 + 0x7f & 0xffffff80) + iVar3;
  if (0 < (int)uVar2) {
    iVar7 = 0;
    uVar12 = uVar11;
    do {
      *(undefined4 *)(iVar7 + iVar3) = 0;
      iVar7 = iVar7 + 4;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  iVar5 = 1;
  iVar7 = 0;
  if (0 < param_2[1]) {
    iVar6 = 0;
    do {
      uVar1 = *(ushort *)(*(int *)(*param_2 + iVar6) + 0xec);
      uVar8 = (uint)uVar1;
      if ((uint)*(byte *)(param_3 + 0x306) == (int)(uint)uVar1 >> 0xe) {
        uVar8 = (int)(uint)uVar1 >> 7;
      }
      uVar1 = *(ushort *)(*(int *)(*param_2 + iVar6) + 0xea);
      uVar9 = (uint)uVar1;
      if ((uint)*(byte *)(param_3 + 0x305) == (int)(uint)uVar1 >> 0xe) {
        uVar9 = (int)(uint)uVar1 >> 7;
      }
      uVar10 = uVar8 & 0x7f;
      if ((uVar8 & 0x7f) < (uVar9 & 0x7f)) {
        uVar10 = uVar9 & 0x7f;
      }
      if (uVar10 < 6) {
        *(undefined4 *)(*(int *)(*(int *)*param_1 + iVar6) * 4 + iVar3) = 1;
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar7 < param_2[1]);
  }
  *(undefined1 *)*param_5 = 1;
  if (0 < (int)uVar2) {
    iVar7 = 0;
    do {
      if (*(int *)(iVar7 + iVar3) == 0) {
        *(int *)(iVar7 + iVar3) = iVar5;
        *(undefined1 *)(*param_5 + iVar5) = 0;
        iVar5 = iVar5 + 1;
      }
      else {
        *(undefined4 *)(iVar7 + iVar3) = 0;
      }
      iVar7 = iVar7 + 4;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  aiStack_50[0] = iVar3;
  if ((int)uVar2 < iVar5) {
    *(undefined1 *)*param_5 = 0;
    piVar4 = (int *)fn_82CE5410();
    *piVar4 = iVar3;
  }
  else {
    fn_83082030(param_1,aiStack_50,iVar5,param_4);
    iVar3 = aiStack_50[0];
    piVar4 = (int *)fn_82CE5410();
    *piVar4 = iVar3;
  }
  return;
}

