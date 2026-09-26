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
extern int fn_8266F628();
extern int fn_8266F640();


void fn_822A1178(undefined4 *param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)*param_2;
  uVar2 = 0x68;
  if (uVar3 == 0x68) {
    iVar1 = (int)"hasReachedEnd" - (int)param_2;
    uVar3 = 0x68;
    do {
      param_2 = param_2 + 1;
      if (uVar3 == 0) goto LAB_822a11d8;
      param_5 = (ulonglong)param_2[iVar1];
      uVar3 = (ulonglong)*param_2;
      uVar2 = param_5;
    } while (uVar3 == param_5);
  }
  if (uVar3 == uVar2) {
LAB_822a11d8:
    fn_8266F640(*param_1,1,param_3,param_4,param_5);
    fn_8266F628(*param_1,1);
    *(undefined1 *)(param_1 + 2) = 0;
    *(undefined1 *)((int)param_1 + 9) = 0;
  }
  return;
}

