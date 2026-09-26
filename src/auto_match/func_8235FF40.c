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
extern int fn_8235FDE8();
extern unsigned int lbl_821CC160;


void fn_8235FF40(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  longlong lVar8;
  
  piVar4 = (int *)(param_1 + 0x2c28);
  *(undefined4 *)(param_1 + 0x2c8c) = 0;
  uVar1 = lbl_821CC160;
  *(undefined4 *)(param_1 + 0x2c98) = lbl_821CC160;
  *(undefined4 *)(param_1 + 0x2c90) = 0;
  *(undefined4 *)(param_1 + 0x2c94) = uVar1;
  *(undefined4 *)(param_1 + 0x2c88) = 0;
  puVar3 = (undefined4 *)(param_1 + 0x2c24);
  lVar8 = 0x18;
  do {
    puVar3 = puVar3 + 1;
    *puVar3 = 0;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  uVar5 = 0;
  piVar6 = (int *)(param_1 + 0x16b4);
  piVar7 = (int *)(param_1 + 0xcb4);
  do {
    if (uVar5 < 0xd) {
      if (*piVar6 == 0) {
        *piVar4 = 0;
      }
      else {
        iVar2 = fn_8235FDE8(param_2,piVar6,0);
        *piVar4 = iVar2;
        *(undefined4 *)(iVar2 + 0x1d0) = 1;
      }
    }
    else {
      if (*piVar7 == 0) {
        return;
      }
      iVar2 = fn_8235FDE8(param_2,piVar7,0);
      *piVar4 = iVar2;
      *(undefined4 *)(iVar2 + 0x1d0) = 1;
      *(int *)(param_1 + 0x2c88) = *(int *)(param_1 + 0x2c88) + 1;
    }
    uVar5 = uVar5 + 1;
    piVar4 = piVar4 + 1;
    piVar6 = piVar6 + 0x1a;
    piVar7 = piVar7 + 1;
  } while (uVar5 < 0x18);
  return;
}

