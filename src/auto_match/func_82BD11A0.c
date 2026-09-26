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
extern int fn_82BC0088();


void fn_82BD11A0(int param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (param_2 < *(uint *)(*(int *)(param_1 + 4) + 4)) {
    piVar4 = (int *)(*(int *)(*(int *)(param_1 + 4) + 8) + param_2 * 4);
  }
  else {
    piVar4 = (int *)fn_82BC0088();
  }
  iVar1 = *piVar4;
  iVar8 = -1;
  iVar6 = 0;
  iVar7 = *(int *)(iVar1 + 8);
  if (0 < *(int *)(iVar1 + 4)) {
    do {
      iVar8 = iVar8 + 1;
      if (iVar8 == 7) {
        iVar7 = *(int *)(iVar7 + 0x1c);
        iVar8 = 0;
      }
      iVar2 = *(int *)(param_1 + 4);
      uVar3 = *(uint *)(iVar8 * 4 + iVar7);
      if (uVar3 < *(uint *)(iVar2 + 4)) {
        piVar4 = (int *)(*(int *)(iVar2 + 8) + uVar3 * 4);
      }
      else {
        piVar4 = (int *)fn_82BC0088(iVar2,uVar3);
      }
      if (0 < *(int *)(*piVar4 + 0xc)) {
        iVar2 = *(int *)(param_1 + 4);
        if (uVar3 < *(uint *)(iVar2 + 4)) {
          piVar4 = (int *)(*(int *)(iVar2 + 8) + uVar3 * 4);
        }
        else {
          piVar4 = (int *)fn_82BC0088(iVar2,uVar3);
        }
        *(int *)(*piVar4 + 0xc) = *(int *)(*piVar4 + 0xc) + -1;
        iVar2 = *(int *)(param_1 + 4);
        if (uVar3 < *(uint *)(iVar2 + 4)) {
          piVar4 = (int *)(*(int *)(iVar2 + 8) + uVar3 * 4);
        }
        else {
          piVar4 = (int *)fn_82BC0088(iVar2,uVar3);
        }
        if (*(int *)(*piVar4 + 0xc) == param_4 + -1) {
          puVar5 = (uint *)fn_82BC0088(param_3,*(undefined4 *)(param_3 + 4));
          *puVar5 = uVar3;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(iVar1 + 4));
  }
  return;
}

