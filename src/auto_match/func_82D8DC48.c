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
extern int fn_82CE4338();
extern int fn_82D8E318();


void fn_82D8DC48(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 0x2c);
  if (uVar1 != 0) {
    if (1 < (int)uVar1) {
      fn_82D8E318(*(undefined4 *)(param_1 + 0x28),0,(ulonglong)uVar1 - 1,0xffffffff82d8dbb8);
    }
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x2c)) {
      iVar3 = 0;
      do {
        (**(code **)(*(int *)(param_1 + -0x10) + 0xc))
                  ((int *)(param_1 + -0x10),*(undefined4 *)(*(int *)(param_1 + 0x28) + iVar3));
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar2 < *(int *)(param_1 + 0x2c));
    }
    fn_82CE4338(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),4);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}

