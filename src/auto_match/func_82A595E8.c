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
extern int fn_82A3FF60();
extern int fn_82A4F4E0();


undefined8 fn_82A595E8(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  iVar2 = *(int *)(param_1 + 0x210);
  puVar4 = (undefined4 *)(param_1 + 0x20);
  uVar3 = 0;
  do {
    piVar5 = (int *)*puVar4;
    while (piVar5 != (int *)0x0) {
      if (piVar5 == (int *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *piVar5;
        piVar5 = (int *)piVar5[1];
      }
      iVar2 = iVar2 + -1;
      *(undefined4 *)(iVar1 + 0x3c) = 0;
    }
    if (iVar2 == 0) break;
    uVar3 = uVar3 + 1;
    puVar4 = puVar4 + 10;
  } while (uVar3 < 0xd);
  iVar2 = *(int *)(param_1 + 0x21c);
  uVar3 = *(uint *)(param_1 + 0x228);
  if (iVar2 != *(int *)(param_1 + 0x218)) {
    if (*(int *)(param_1 + 0x214) != 0) {
      fn_82A4F4E0();
      *(undefined4 *)(param_1 + 0x214) = 0;
    }
    iVar1 = fn_82A3FF60(0xffffffff83219d50,iVar2,0x20970006,0x20);
    *(int *)(param_1 + 0x214) = iVar1;
    if (iVar1 == 0) {
      return 0xffffffff8007000e;
    }
    *(int *)(param_1 + 0x218) = iVar2;
  }
  if (uVar3 <= *(uint *)(param_1 + 0x224)) {
    return 0;
  }
  if (*(int *)(param_1 + 0x220) != 0) {
    fn_82A4F4E0();
    *(undefined4 *)(param_1 + 0x220) = 0;
  }
  iVar2 = fn_82A3FF60(0xffffffff83219d50,uVar3,0x20970006,0x20);
  *(int *)(param_1 + 0x220) = iVar2;
  if (iVar2 == 0) {
    return 0xffffffff8007000e;
  }
  *(uint *)(param_1 + 0x224) = uVar3;
  return 0;
}

