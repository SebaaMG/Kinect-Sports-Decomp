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


void fn_8228A318(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x11f0) + 0x18b8);
  if (uVar1 == 0) {
    if (param_2 != 1) {
code_r0x8228a354:
      if (param_2 != 6) {
        return;
      }
      uVar4 = 0xe;
      goto code_r0x8228a418;
    }
code_r0x8228a40c:
    uVar4 = 1;
code_r0x8228a410:
    *(undefined4 *)(param_1 + 0x6a0) = uVar4;
  }
  else {
    if (uVar1 == 1) {
      if (param_2 == 0) {
        iVar2 = *(int *)(param_1 + 0x728);
        *(undefined4 *)(param_1 + 0x6a0) = 1;
        if ((iVar2 == 1) || (iVar2 == 0)) {
          uVar4 = 6;
        }
        else if ((iVar2 == 3) && (*(int *)(*(int *)(param_1 + 0x11f0) + 0x18c0) == 3)) {
          uVar4 = 0xb;
        }
        else {
          uVar4 = 7;
        }
        goto code_r0x8228a418;
      }
      if (param_2 != 1) goto code_r0x8228a354;
code_r0x8228a3a4:
      uVar4 = 2;
      goto code_r0x8228a410;
    }
    if (2 < uVar1) {
      return;
    }
    if (param_2 == 2) goto code_r0x8228a40c;
    if (param_2 == 3) goto code_r0x8228a3a4;
    if (param_2 == 4) {
      uVar4 = 3;
      goto code_r0x8228a410;
    }
    if (param_2 != 5) goto code_r0x8228a354;
    iVar2 = 0;
    piVar3 = (int *)(param_1 + 0x6a8);
    lVar5 = 4;
    do {
      if (*piVar3 != 4) {
        iVar2 = iVar2 + 1;
      }
      piVar3 = piVar3 + 0x10;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    if (iVar2 != 2) {
      uVar4 = 10;
      goto code_r0x8228a418;
    }
  }
  uVar4 = *(undefined4 *)(param_1 + 0x608);
code_r0x8228a418:
  *(undefined4 *)(param_1 + 0x604) = uVar4;
  return;
}

