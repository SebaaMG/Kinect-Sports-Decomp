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
extern int fn_8225F160();
extern int fn_822ABA88();
extern int fn_82340CC8();


void fn_8243BA70(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  
  iVar1 = *(int *)(param_1 + 0x40);
  uVar7 = 0;
  iVar6 = 0;
  iVar4 = *(int *)(iVar1 + 0x1d8);
  if (0 < *(int *)(*(int *)(iVar4 + 0x174) + 0xbc)) {
    iVar8 = 0;
    do {
      piVar3 = *(int **)(**(int **)(iVar4 + 8) + iVar8);
      iVar4 = fn_822ABA88(*(undefined4 *)(piVar3[4] * 4 + *piVar3),0);
      uVar5 = fn_82340CC8((ulonglong)*(uint *)(iVar4 + 0x1a0) + 0x194,0x1e);
      if ((int)uVar7 < (int)uVar5) {
        uVar7 = uVar5;
      }
      iVar1 = *(int *)(param_1 + 0x40);
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + 4;
      iVar4 = *(int *)(iVar1 + 0x1d8);
    } while (iVar6 < *(int *)(*(int *)(iVar4 + 0x174) + 0xbc));
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x208);
  if ((*(uint *)(puVar2[4] + 0x10) < uVar7) && (*(uint *)(puVar2[4] + 0x10) != 0)) {
    uVar9 = 3;
  }
  else if ((*(uint *)(puVar2[3] + 0x10) < uVar7) && (*(uint *)(puVar2[3] + 0x10) != 0)) {
    uVar9 = 2;
  }
  else {
    if ((uVar7 <= *(uint *)(puVar2[2] + 0x10)) || (*(uint *)(puVar2[2] + 0x10) == 0)) {
      *puVar2 = 0;
      iVar4 = fn_8225F160();
      *(undefined4 *)(iVar4 + 0x14) = 0;
      *(undefined4 *)(iVar4 + 0x28) = 0;
      goto LAB_8243bb8c;
    }
    uVar9 = 1;
  }
  *puVar2 = uVar9;
  iVar4 = fn_8225F160();
  *(undefined4 *)(iVar4 + 0x14) = uVar9;
  *(undefined4 *)(iVar4 + 0x28) = uVar9;
LAB_8243bb8c:
  *(undefined4 *)(iVar4 + 0x24) = 0;
  *(undefined4 *)(iVar4 + 0x20) = 0;
  *(undefined4 *)(iVar4 + 0x1c) = 0;
  return;
}

