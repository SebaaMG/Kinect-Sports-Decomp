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
extern int fn_82F1B020();
extern int fn_82F1B2D8();
extern int fn_82F2A168();
extern int fn_82F2A338();
extern int fn_82F2A508();
extern int fn_82F2A6D8();
extern int fn_82F2AAD0();


void fn_82F2BD00(int param_1,int param_2,undefined2 *param_3,short *param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  undefined2 *puVar6;
  short *psVar7;
  undefined2 *puVar8;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1ebc);
  lVar5 = 1;
  piVar2 = (int *)(param_2 + 4);
  do {
    psVar7 = param_4;
    piVar4 = piVar2;
    puVar6 = param_3;
    if (*(int *)(param_1 + 0x6f98) != 0) {
      fn_82F1B020(param_1,puVar6,psVar7,param_2,lVar5 + -1,1);
    }
    if (*(int *)(param_1 + 0x6f90) != 0) {
      iVar3 = fn_82F1B2D8(param_1,puVar6,psVar7,lVar5);
      *(int *)(param_1 + 0x75f8) = iVar3 + *(int *)(param_1 + 0x75f8);
    }
    fn_82F2AAD0(param_1,uVar1,*puVar6,*(undefined4 *)(param_1 + 0x4e50),0x77,param_2);
    if (*piVar4 == 1) {
      iVar3 = 2;
      puVar8 = puVar6;
      if (2 < *psVar7 + -2) {
        do {
          fn_82F2A508(param_1,uVar1,puVar8[3],puVar8[2]);
          iVar3 = iVar3 + 2;
          puVar8 = puVar8 + 2;
        } while (iVar3 < *psVar7 + -2);
      }
      fn_82F2A6D8(param_1,uVar1,(puVar6 + iVar3)[1],puVar6[iVar3]);
    }
    lVar5 = lVar5 + 1;
    param_3 = puVar6 + 0x80;
    param_4 = psVar7 + 1;
    piVar2 = piVar4 + 1;
  } while ((int)lVar5 < 5);
  if (*(int *)(param_1 + 0x6f98) != 0) {
    fn_82F1B020(param_1,param_3,param_4,param_2,4,1);
  }
  if (*(int *)(param_1 + 0x6f90) != 0) {
    iVar3 = fn_82F1B2D8(param_1,param_3,param_4,4);
    *(int *)(param_1 + 0x75f8) = iVar3 + *(int *)(param_1 + 0x75f8);
  }
  fn_82F2AAD0(param_1,uVar1,*param_3,*(undefined4 *)(param_1 + 0x4e54),0x77,param_2);
  if (piVar4[1] == 1) {
    iVar3 = 2;
    puVar8 = param_3;
    if (2 < *param_4 + -2) {
      do {
        fn_82F2A168(param_1,uVar1,puVar8[3],puVar8[2]);
        iVar3 = iVar3 + 2;
        puVar8 = puVar8 + 2;
      } while (iVar3 < *param_4 + -2);
    }
    fn_82F2A338(param_1,uVar1,(param_3 + iVar3)[1],param_3[iVar3]);
  }
  puVar6 = puVar6 + 0x100;
  psVar7 = psVar7 + 2;
  if (*(int *)(param_1 + 0x6f98) != 0) {
    fn_82F1B020(param_1,puVar6,psVar7,param_2,5,1);
  }
  if (*(int *)(param_1 + 0x6f90) != 0) {
    iVar3 = fn_82F1B2D8(param_1,puVar6,psVar7,5);
    *(int *)(param_1 + 0x75f8) = iVar3 + *(int *)(param_1 + 0x75f8);
  }
  fn_82F2AAD0(param_1,uVar1,*puVar6,*(undefined4 *)(param_1 + 0x4e54),0x77,param_2);
  if (piVar4[2] == 1) {
    iVar3 = 2;
    puVar8 = puVar6;
    if (2 < *psVar7 + -2) {
      do {
        fn_82F2A168(param_1,uVar1,puVar8[3],puVar8[2]);
        iVar3 = iVar3 + 2;
        puVar8 = puVar8 + 2;
      } while (iVar3 < *psVar7 + -2);
    }
    fn_82F2A338(param_1,uVar1,(puVar6 + iVar3)[1],puVar6[iVar3]);
  }
  return;
}

