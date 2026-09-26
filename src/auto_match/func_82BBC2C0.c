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
extern int fn_82B7BBD8();
extern int fn_82BA02A8();


void fn_82BBC2C0(int param_1)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  
  fn_82BA02A8(*(undefined4 *)(param_1 + 0x754),0xffffffff820e0d10);
  lVar1 = 0;
  piVar2 = (int *)(param_1 + 0x390);
  iVar3 = param_1 + 0x650;
  do {
    if ((*piVar2 != 0) && (piVar2[0x10] != 0x12)) {
      fn_82B7BBD8(*(undefined4 *)(param_1 + 0x754),lVar1,piVar2[0x10],piVar2[0x20],
                   *(undefined4 *)(*piVar2 + 0x30),iVar3 + -0x100,iVar3,iVar3 + -0x200);
    }
    lVar1 = lVar1 + 1;
    iVar3 = iVar3 + 0x10;
    piVar2 = piVar2 + 1;
  } while ((int)lVar1 < 0x10);
  return;
}

