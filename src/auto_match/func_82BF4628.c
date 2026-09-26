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
extern int fn_82F640F0();


void fn_82BF4628(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (((iVar1 != 0) && (uVar2 = (uint)*(ushort *)(param_1 + 0x20), uVar2 != 0)) &&
     (uVar5 = 0, uVar2 != 0)) {
    iVar4 = 0;
    do {
      if (*(int *)(iVar4 + iVar1) == param_2) {
        if (uVar5 == 0xffffffff) {
          return;
        }
        if (uVar5 + 1 < uVar2) {
          iVar1 = uVar5 * 4 + iVar1;
          fn_82F640F0(iVar1,uVar2 - uVar5 & 0x3fffffff,iVar1 + 4,
                            (uVar2 - uVar5) - 1 & 0x3fffffff);
        }
        if (uVar5 < *(uint *)(param_1 + 0x24)) {
          *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) - 1;
        }
        if (*(short *)(param_1 + 0x22) == *(short *)(param_1 + 0x20)) {
          uVar3 = *(short *)(param_1 + 0x22) - 1;
          *(ushort *)(param_1 + 0x22) = uVar3;
          trapWord(6,(ulonglong)uVar3,0);
          *(uint *)(param_1 + 0x24) =
               *(uint *)(param_1 + 0x24) - (*(uint *)(param_1 + 0x24) / (uint)uVar3) * (uint)uVar3;
        }
        *(short *)(param_1 + 0x20) = *(short *)(param_1 + 0x20) + -1;
        return;
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (uVar5 < *(ushort *)(param_1 + 0x20));
  }
  return;
}

