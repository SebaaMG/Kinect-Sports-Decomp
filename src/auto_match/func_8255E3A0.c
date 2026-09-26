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
extern int fn_8255E320();


bool fn_8255E3A0(int param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  int *piVar2;
  undefined8 uVar3;
  
  if ((*(int *)(param_1 + 0x8c0) == 0) ||
     (piVar2 = *(int **)(*(int *)(param_1 + 0x8c0) + 0x1b4), piVar2 == (int *)0x0)) {
    uVar3 = 0xffffffffffffffff;
  }
  else {
    uVar3 = (**(code **)(*piVar2 + 0x14))();
  }
  bVar1 = (int)uVar3 != -1;
  if (bVar1) {
    fn_8255E320(param_1,uVar3,param_3);
  }
  return bVar1;
}

