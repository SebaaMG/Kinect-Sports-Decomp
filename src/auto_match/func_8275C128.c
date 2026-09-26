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
extern int fn_826957D0();
extern int fn_82697610();
extern int fn_826ADE60();
extern int fn_826D0A40();
extern int fn_8275BB38();


void fn_8275C128(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar4;
  ulonglong uVar3;
  
  if (*(int *)(param_1 + 0x1c) < 1) {
    fn_826ADE60(*(undefined4 *)(param_1 + 0x18),0xffffffff82014728);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    uVar2 = fn_826957D0(param_1,0);
    uVar2 = fn_82697610(uVar2,uVar1);
    iVar4 = *(int *)(param_1 + 8) + -0x10;
    if (*(int *)(param_1 + 8) == 0) {
      iVar4 = 0;
    }
    if ((iVar4 != 0) && (uVar3 = fn_8275BB38(), (uVar3 & 0xffffffff) != 0)) {
      fn_826D0A40(uVar3,uVar2);
    }
  }
  return;
}

