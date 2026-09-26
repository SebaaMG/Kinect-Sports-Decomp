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
extern int fn_8269A1F0();
extern int fn_826C53B0();
extern int fn_8275BB38();


void fn_8275C060(int param_1)

{
  int iVar2;
  undefined8 uVar1;
  
  iVar2 = *(int *)(param_1 + 8) + -0x10;
  if (*(int *)(param_1 + 8) == 0) {
    iVar2 = 0;
  }
  if ((iVar2 != 0) && (iVar2 = fn_8275BB38(), iVar2 != 0)) {
    uVar1 = fn_826C53B0();
    fn_8269A1F0(*(undefined4 *)(param_1 + 4),uVar1);
  }
  return;
}

