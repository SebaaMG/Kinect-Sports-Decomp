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
extern int fn_826323F8();


void fn_82636398(int param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  *(undefined4 *)(param_1 + 0x4db0) = 1;
  puVar3 = (undefined4 *)(param_1 + 0x26cc);
  uVar2 = 0;
  do {
    fn_826323F8(puVar3 + -0x9af);
    lVar1 = LZCOUNT(uVar2);
    uVar2 = uVar2 + 1;
    *puVar3 = 1;
    puVar3[-1] = (uint)lVar1 >> 5;
    puVar3 = puVar3 + 0x9b4;
  } while (uVar2 < 2);
  *(undefined4 *)(param_1 + 0x4dbc) = 0;
  iVar4 = param_1 + 0x10;
  *(undefined4 *)(param_1 + 0x4db4) = 0;
  lVar1 = 2;
  do {
    fn_826323F8(iVar4);
    *(undefined4 *)(iVar4 + 0x26bc) = 1;
    lVar1 = lVar1 + -1;
    iVar4 = iVar4 + 0x26d0;
  } while (lVar1 != 0);
  if (*(int **)(param_1 + 0x4db8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x4db8) + 4))();
    *(undefined4 *)(param_1 + 0x4db8) = 0;
  }
  *(undefined4 *)(param_1 + 0x4dc0) = 0;
  *(undefined4 *)(param_1 + 0x4ddc) = 0;
  *(undefined4 *)(param_1 + 0x4de0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4de8) = 0;
  *(undefined4 *)(param_1 + 0x4df0) = 0;
  return;
}

