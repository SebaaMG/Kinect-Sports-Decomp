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
extern int fn_8223C478();
extern int fn_828E9DB8();
extern int fn_828EA268();


void fn_828E3C70(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int *piVar5;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x10) + 0x1c))();
  uVar2 = (**(code **)(*piVar5 + 0xc))();
  lVar3 = uVar2 - 1;
  if ((uVar2 & 0xffffffff) == 0) {
    lVar3 = 0;
  }
  uVar4 = fn_828EA268(lVar3);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  fn_8223C478(param_2,uVar4,0);
  fn_828E9DB8(param_2,uVar1,uVar4);
  return;
}

