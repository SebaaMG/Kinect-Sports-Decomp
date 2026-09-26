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


void fn_8252CC80(int param_1,char param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (param_1 + 0x8bc != 0) {
    if (param_3 == -1) {
      iVar5 = 0;
      lVar7 = 2;
      do {
        *(char *)(param_1 + 0x930 + iVar5) = param_2;
        iVar5 = iVar5 + 1;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    else {
      *(char *)(param_1 + 0x8bc + param_3 + 0x74) = param_2;
    }
  }
  piVar1 = *(int **)(param_1 + 0x8c0);
  if (piVar1 != (int *)0x0) {
    iVar5 = param_1 + 0x1d0;
    if (param_3 == -1) {
      puVar4 = (uint *)(param_1 + 0x1dc);
      lVar7 = 2;
      if (param_2 == '\0') {
        do {
          puVar3 = puVar4 + 1;
          puVar4 = puVar4 + 1;
          *puVar4 = *puVar3 & 0xffffffdf;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
        puVar4 = (uint *)(param_1 + 0x1dc);
        lVar7 = 2;
        do {
          puVar3 = puVar4 + 1;
          puVar4 = puVar4 + 1;
          *puVar4 = *puVar3 & 0xfffffff7;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      else {
        do {
          puVar3 = puVar4 + 1;
          puVar4 = puVar4 + 1;
          *puVar4 = *puVar3 | 0x20;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
        puVar4 = (uint *)(param_1 + 0x1dc);
        lVar7 = 2;
        do {
          puVar3 = puVar4 + 1;
          puVar4 = puVar4 + 1;
          *puVar4 = *puVar3 | 8;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
        *(undefined4 *)(param_1 + 0x224) = 1;
      }
    }
    else {
      iVar6 = (param_3 + 4) * 4;
      if (param_2 == '\0') {
        uVar2 = *(uint *)(iVar6 + iVar5);
        *(uint *)(iVar6 + iVar5) = uVar2 & 0xffffffdf;
        *(uint *)(iVar6 + iVar5) = uVar2 & 0xffffffd7;
      }
      else {
        uVar2 = *(uint *)(iVar6 + iVar5);
        *(uint *)(iVar6 + iVar5) = uVar2 | 0x20;
        *(uint *)(iVar6 + iVar5) = uVar2 | 0x28;
        *(int *)(param_1 + 0x224) = param_3 + 1;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x8252cdb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 0x78))((double)*(float *)(*(int *)(param_1 + 0x4c) + 0x82c));
    return;
  }
  return;
}

