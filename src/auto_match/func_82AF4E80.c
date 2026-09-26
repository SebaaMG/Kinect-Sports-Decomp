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


ulonglong fn_82AF4E80(undefined8 param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  
  uVar3 = 0;
  if (param_2 == 0) {
    uVar3 = (ulonglong)(*(uint *)(param_3 + 8) >> 0xe) & 7;
  }
  else {
    uVar2 = *(uint *)(param_2 + 8) >> 0x13 & 7;
    piVar9 = (int *)(param_2 + 0x2c);
    for (uVar8 = 0; uVar8 < uVar2; uVar8 = uVar8 + 1) {
      iVar1 = *piVar9;
      piVar5 = (int *)(param_2 + 0x2c);
      for (uVar4 = 0; uVar4 < uVar2; uVar4 = uVar4 + 1) {
        iVar6 = *piVar5;
        if (iVar1 == iVar6) goto LAB_82af4ef8;
        if (*(int *)(iVar6 + 0xc) == *(int *)(iVar1 + 0xc)) goto LAB_82af4ef0;
        piVar5 = piVar5 + 1;
      }
      iVar6 = 0;
LAB_82af4ef0:
      if (iVar1 == iVar6) {
LAB_82af4ef8:
        uVar3 = ((ulonglong)(*(uint *)(*(int *)(iVar1 + 0xc) + 8) >> 0xe) & 7) + uVar3;
      }
      piVar9 = piVar9 + 1;
    }
  }
  if (param_4 == 0) {
    if (param_5 != 0) {
      uVar3 = ((ulonglong)(*(uint *)(param_5 + 8) >> 0xe) & 7) + uVar3;
    }
  }
  else {
    uVar2 = *(uint *)(param_4 + 8) >> 0x13 & 7;
    piVar9 = (int *)(param_4 + 0x2c);
    for (uVar8 = 0; uVar8 < uVar2; uVar8 = uVar8 + 1) {
      iVar1 = *piVar9;
      iVar6 = *(int *)(iVar1 + 0xc);
      if (iVar6 != param_3) {
        piVar5 = (int *)(param_4 + 0x2c);
        for (uVar4 = 0; uVar4 < uVar2; uVar4 = uVar4 + 1) {
          iVar7 = *piVar5;
          if (iVar1 == iVar7) goto LAB_82af4f8c;
          if (*(int *)(iVar7 + 0xc) == iVar6) goto LAB_82af4f84;
          piVar5 = piVar5 + 1;
        }
        iVar7 = 0;
LAB_82af4f84:
        if (iVar1 == iVar7) {
LAB_82af4f8c:
          if (param_2 != 0) {
            piVar5 = (int *)(param_2 + 0x2c);
            for (uVar4 = 0; uVar4 < (*(uint *)(param_2 + 8) >> 0x13 & 7); uVar4 = uVar4 + 1) {
              if (*(int *)(*piVar5 + 0xc) == iVar6) goto LAB_82af4fd4;
              piVar5 = piVar5 + 1;
            }
          }
          uVar3 = ((ulonglong)(*(uint *)(iVar6 + 8) >> 0xe) & 7) + uVar3;
        }
      }
LAB_82af4fd4:
      piVar9 = piVar9 + 1;
    }
  }
  return uVar3;
}

