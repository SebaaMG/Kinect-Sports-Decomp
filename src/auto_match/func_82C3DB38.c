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
extern int fn_82F691F0();


void fn_82C3DB38(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar2 = 0;
  iVar1 = *param_2;
  iVar4 = 0;
  if (0 < (longlong)(int)((uint)*(ushort *)(param_1 + 0x22) * (uint)*(ushort *)(param_1 + 0x22)) *
          (longlong)iVar1) {
    iVar3 = 0;
    do {
      iVar4 = iVar4 + 1;
      *(undefined2 *)(param_2[7] + iVar3) = 0;
      iVar3 = iVar3 + 2;
    } while (iVar4 < (int)((uint)*(ushort *)(param_1 + 0x22) * (uint)*(ushort *)(param_1 + 0x22) *
                          iVar1));
  }
  iVar4 = 0;
  if ((longlong)(int)(uint)*(ushort *)(param_1 + 0x22) *
      (longlong)(int)(uint)*(ushort *)(param_1 + 0x22) != 0) {
    iVar3 = 0;
    do {
      iVar4 = iVar4 + 1;
      *(undefined2 *)(param_2[9] + iVar3) = 0;
      iVar3 = iVar3 + 2;
    } while (iVar4 < (int)((uint)*(ushort *)(param_1 + 0x22) * (uint)*(ushort *)(param_1 + 0x22)));
  }
  uVar5 = (uint)*(ushort *)(param_1 + 0x22);
  iVar4 = 0;
  if (*(ushort *)(param_1 + 0x22) != 0) {
    do {
      iVar3 = uVar5 * iVar4;
      iVar4 = iVar4 + 1;
      *(undefined2 *)(iVar3 * 2 + param_2[9]) = 0;
      uVar5 = (uint)*(ushort *)(param_1 + 0x22);
    } while (iVar4 < (int)uVar5);
  }
  if (*(int *)(param_1 + 0x294) == 1) {
    iVar4 = 0;
    if (0 < (longlong)(int)(*(int *)(param_1 + 0x298) * (uint)*(ushort *)(param_1 + 0x22)) *
            (longlong)(int)(uint)*(ushort *)(param_1 + 0x22)) {
      iVar3 = 0;
      do {
        iVar4 = iVar4 + 1;
        *(undefined2 *)(iVar3 + *(int *)(param_1 + 0x2b4)) =
             *(undefined2 *)(iVar3 + *(int *)(param_1 + 0x2b8));
        iVar3 = iVar3 + 2;
        uVar5 = (uint)*(ushort *)(param_1 + 0x22);
      } while (iVar4 < (int)(*(int *)(param_1 + 0x298) * uVar5 * uVar5));
    }
    if ((longlong)(int)(uint)*(ushort *)(param_1 + 0x22) *
        (longlong)(int)(uint)*(ushort *)(param_1 + 0x22) != 0) {
      iVar4 = 0;
      do {
        iVar2 = iVar2 + 1;
        *(undefined2 *)(*(int *)(param_1 + 700) + iVar4) =
             *(undefined2 *)(*(int *)(param_1 + 0x2c0) + iVar4);
        iVar4 = iVar4 + 2;
        uVar5 = (uint)*(ushort *)(param_1 + 0x22);
      } while (iVar2 < (int)(uVar5 * uVar5));
    }
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_2[6],0,((longlong)(int)uVar5 * (longlong)iVar1 & 0x1fffffffU) << 3);
}

