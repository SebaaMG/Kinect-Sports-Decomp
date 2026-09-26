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
extern int fn_82F691F0();


void fn_82A16E18(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  
  piVar2 = (int *)(param_1 + 0xc5c);
  uVar3 = 0;
  do {
    uVar4 = 0;
    do {
      if (uVar4 == 0) {
        if (*piVar2 != 0) {
          fn_8265C990(*piVar2,(~(ulonglong)((uint)piVar2[-0xd] >> 0x15) & 1) << 0x1c |
                                    0xffffffffac9c0000);
          *piVar2 = 0;
        }
      }
      else {
        iVar1 = (uVar3 + uVar4) * 0x38 + param_1;
        if (*(int *)(iVar1 + 0xd04) != 0) {
          fn_8265C990(*(int *)(iVar1 + 0xd04),
                            (~(ulonglong)(*(uint *)(iVar1 + 0xcd0) >> 0x15) & 1) << 0x1c |
                            0xffffffffac9c0000);
          *(undefined4 *)(iVar1 + 0xd04) = 0;
        }
      }
      iVar1 = (uVar3 + uVar4) * 0x38 + param_1;
      if (*(int *)(iVar1 + 0x12c4) != 0) {
        fn_8265C990(*(int *)(iVar1 + 0x12c4),
                          (~(ulonglong)(*(uint *)(iVar1 + 0x1290) >> 0x15) & 1) << 0x1c |
                          0xffffffffac9c0000);
        *(undefined4 *)(iVar1 + 0x12c4) = 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 8);
    uVar3 = uVar3 + 8;
    piVar2 = piVar2 + 0xe;
  } while (uVar3 < 0x18);
  iVar1 = *(int *)(param_1 + 0x1804);
  if (iVar1 != 0) {
    fn_8265C990(iVar1,(~(ulonglong)(*(uint *)(param_1 + 0x17d0) >> 0x15) & 1) << 0x1c |
                            0xffffffffac9c0000);
    *(int *)(param_1 + 0x1804) = 0;
  }
  if (*(int *)(param_1 + 0x1990) != 0) {
    fn_8262FEC8();
    *(undefined4 *)(param_1 + 0x1990) = 0;
  }
  if (*(int *)(param_1 + 0x19b0) != 0) {
    fn_8262FEC8();
    *(int *)(param_1 + 0x19b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x4c0);
  if (iVar1 != 0) {
    fn_8265C990(iVar1,(~(ulonglong)(*(uint *)(param_1 + 0x48c) >> 0x15) & 1) << 0x1c |
                            0xffffffffac9c0000);
    *(int *)(param_1 + 0x4c0) = 0;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1 + 0x80c,0,0x34);
}

