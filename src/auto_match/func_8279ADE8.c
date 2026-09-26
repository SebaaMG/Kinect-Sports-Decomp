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
extern int fn_8279A9F8();
extern int fn_827A8628();


undefined8 fn_8279ADE8(int param_1,ulonglong param_2)

{
  int *piVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  uVar2 = fn_8279A9F8();
  if ((uVar2 & 0xffffffff) < (param_2 & 0xffffffff)) {
    param_2 = uVar2;
  }
  if ((ulonglong)*(uint *)(param_1 + 0x4c) != (param_2 & 0xffffffff)) {
    fn_827A8628(param_1 + 0x24,param_2);
    piVar1 = *(int **)(param_1 + 0x10);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1,param_1,param_2);
    }
    uVar3 = 1;
  }
  return uVar3;
}

