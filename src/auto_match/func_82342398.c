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
extern int fn_82F68B7C();
extern unsigned int lbl_821917D4;
extern unsigned int lbl_821CA460;


void fn_82342398(double param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  piVar1 = *(int **)(param_2 + 0xc);
  uVar7 = 0;
  if ((double)lbl_821917D4 <= param_1) {
    if (((double)lbl_821917D4 <= param_1) && (param_1 < (double)lbl_821CA460)) {
      uVar7 = 1;
    }
  }
  else {
    uVar7 = 2;
  }
  uVar8 = piVar1[0xb];
  if ((int)uVar8 <= (int)uVar7) {
    piVar1[0xb] = uVar7;
    uVar8 = uVar7;
  }
  uVar5 = 0;
  if (uVar8 == 0) {
    uVar5 = 0;
  }
  else if (uVar8 == 1) {
    uVar5 = 1;
  }
  else if (uVar8 < 3) {
    uVar5 = 2;
  }
  iVar2 = *(int *)(*(int *)(*(int *)(*piVar1 + 0x1a0) + 0xc) + 0x174);
  if (*(int *)(*(int *)(iVar2 + 0x5c) + 0x1d4) == -1) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(*(int *)(*(int *)(iVar2 + 0x5c) + 0x1d4) * 4 +
                    *(int *)(*(int *)(iVar2 + 0x5c) + 0x1c4));
  }
  if (*(int *)(*(int *)(iVar6 + 0x40) + 0x114) == 5) {
    uVar3 = *(undefined4 *)(iVar2 + 0xa0);
    uVar4 = 7;
  }
  else {
    if (*(int *)(*(int *)(iVar2 + 0x5c) + 0x1d4) == -1) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(*(int *)(iVar2 + 0x5c) + 0x1d4) * 4 +
                      *(int *)(*(int *)(iVar2 + 0x5c) + 0x1c4));
    }
    if (*(int *)(*(int *)(iVar6 + 0x40) + 0x114) != 3) {
      return;
    }
    uVar3 = *(undefined4 *)(iVar2 + 0xa0);
    uVar4 = 6;
  }
  fn_82F68B7C(uVar3,uVar4,uVar5);
  return;
}

