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
extern int fn_82A45808();
extern int fn_82A474B0();
extern int fn_82A47590();


void fn_82A47FC0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  
  uVar5 = 0;
  if (*(int **)(param_1 + 0x20c) == (int *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = **(int **)(param_1 + 0x20c);
  }
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  uVar4 = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  if (*(int *)(iVar6 + 0x1c) != 0) {
    uVar1 = *(uint *)(iVar6 + 0x14) >> 7 & 3;
    uVar4 = (ulonglong)(*(uint *)(iVar6 + 0x14) >> 9);
    *(char *)(param_1 + 0x1d1) = (char)uVar1;
    if ((uVar1 == 0) && (uVar4 != 0)) {
      uVar4 = uVar4 - 1;
      *(undefined1 *)(param_1 + 0x1d1) = 4;
    }
    if (*(int *)(iVar6 + 0x18) == 0) {
      *(undefined1 *)(param_1 + 0x1d0) = 3;
    }
    else {
      *(byte *)(param_1 + 0x1d0) =
           (byte)((*(int *)(iVar6 + 0x18) + *(int *)(iVar6 + 0x14)) - 0x80U >> 7) & 3;
    }
    iVar3 = *(int *)(iVar6 + 0x1c);
    if (iVar3 == 0xff) {
      iVar3 = 0xfe;
    }
    *(char *)(param_1 + 0x1d2) = (char)iVar3;
  }
  if (*(int *)(param_1 + 0x1c0) != 0) {
    do {
      if (*(int *)(iVar6 + 0x1c) != 0) {
        uVar2 = fn_82A474B0(*(undefined4 *)(iVar6 + 8),*(undefined4 *)(iVar6 + 4),uVar5,uVar4);
        *(undefined4 *)(param_1 + 0x1c8) = uVar2;
        if (*(int *)(iVar6 + 0x18) == 0) {
          uVar2 = fn_82A47590(*(undefined4 *)(iVar6 + 8),*(undefined4 *)(iVar6 + 4),uVar5);
        }
        else {
          uVar2 = fn_82A474B0();
        }
        *(undefined4 *)(param_1 + 0x1cc) = uVar2;
      }
      fn_82A45808(*(undefined4 *)(param_1 + 0x1d8),uVar5,(undefined4 *)(param_1 + 0x1c8));
      uVar5 = uVar5 + 1;
    } while ((uVar5 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x1c0));
  }
  return;
}

