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


void fn_827C5308(int *param_1,undefined1 param_2)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  
  piVar1 = (int *)param_1[6];
  *(undefined1 *)*piVar1 = param_2;
  uVar2 = piVar1[1];
  piVar1[1] = (int)((ulonglong)uVar2 - 1);
  *piVar1 = *piVar1 + 1;
  if (((ulonglong)uVar2 - 1 == 0) && (cVar3 = (*(code *)piVar1[3])(), cVar3 == '\0')) {
    *(undefined4 *)(*param_1 + 0x14) = 0x18;
    (**(code **)*param_1)(param_1);
  }
  return;
}

