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
extern int fn_8262FEC8();
extern int fn_8265C990();


void fn_82A10AF8(int param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = (int *)(param_1 + 0x1db0);
  lVar2 = 4;
  do {
    if (*piVar4 != 0) {
      fn_8265C990(*piVar4,(~(ulonglong)((uint)piVar4[-0xd] >> 0x15) & 1) << 0x1c |
                                0xffffffffac9c0000);
      *piVar4 = 0;
    }
    if (piVar4[1] != 0) {
      fn_8262FEC8();
      piVar4[1] = 0;
    }
    lVar2 = lVar2 + -1;
    piVar4 = piVar4 + 0xf;
  } while (lVar2 != 0);
  if (*(int *)(param_1 + 0x1d30) != 0) {
    uVar3 = 0;
    if (*(int *)(param_1 + 0x1d34) != 0) {
      iVar5 = 0;
      do {
        iVar1 = *(int *)(iVar5 + *(int *)(param_1 + 0x1d30));
        if (iVar1 != 0) {
          fn_8265C990(*(undefined4 *)(iVar1 + -4),0x249c0000);
        }
        uVar3 = uVar3 + 1;
        iVar5 = iVar5 + 8;
      } while (uVar3 < *(uint *)(param_1 + 0x1d34));
    }
    if (*(int *)(param_1 + 0x1d30) != 0) {
      fn_8265C990(*(undefined4 *)(*(int *)(param_1 + 0x1d30) + -4),0x249c0000);
    }
    *(undefined4 *)(param_1 + 0x1d30) = 0;
  }
  if (*(int *)(param_1 + 0x1d2c) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x1d2c),0xffffffffbc9c0000);
    *(undefined4 *)(param_1 + 0x1d2c) = 0;
  }
  return;
}

