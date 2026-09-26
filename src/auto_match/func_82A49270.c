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
extern int fn_82A40BA8();
extern int fn_82A44008();
extern int fn_82A45C40();
extern int fn_82A48EE8();
extern int fn_82A4F4E0();


void fn_82A49270(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  fn_82A44008();
  if (*(int *)(param_1 + 0x1d4) != 0) {
    fn_82A45C40();
    *(undefined4 *)(param_1 + 0x1d4) = 0;
  }
  uVar1 = *(uint *)(param_1 + 0x1c0);
  if (uVar1 != 0) {
    piVar3 = *(int **)(*(int *)(param_1 + 0x30) + 0x3f74);
    do {
      if (piVar3 == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *piVar3;
        piVar3 = (int *)piVar3[1];
      }
    } while ((uVar1 < *(uint *)(iVar2 + 0xfc)) ||
            (*(int *)(iVar2 + 0x100) + *(uint *)(iVar2 + 0xfc) <= uVar1));
    fn_82A48EE8();
  }
  while (iVar2 = fn_82A40BA8(param_1 + 0x1f0), iVar2 != 0) {
    if (iVar2 != 0) {
      fn_82A4F4E0();
    }
  }
  while (iVar2 = fn_82A40BA8(param_1 + 0x218), iVar2 != 0) {
    if (iVar2 != 0) {
      fn_82A4F4E0();
    }
  }
  if (*(int *)(param_1 + 0x1dc) != 0) {
    fn_82A4F4E0();
    *(undefined4 *)(param_1 + 0x1dc) = 0;
  }
  return;
}

