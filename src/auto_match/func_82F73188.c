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
extern int fn_82F72E58();


undefined4 * fn_82F73188(undefined4 *param_1,ulonglong param_2)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  ulonglong uVar4;
  char acStack_1b [11];
  
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  bVar1 = (longlong)param_2 < 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  acStack_1b[0] = '\0';
  pcVar3 = acStack_1b;
  if (bVar1) {
    param_2 = -param_2;
  }
  do {
    pcVar2 = pcVar3;
    uVar4 = param_2 % 10;
    param_2 = param_2 / 10;
    pcVar3 = pcVar2 + -1;
    *pcVar3 = (char)uVar4 + '0';
  } while (param_2 != 0);
  if (bVar1) {
    pcVar3 = pcVar2 + -2;
    *pcVar3 = '-';
  }
  fn_82F72E58(param_1,pcVar3,acStack_1b + -(int)pcVar3);
  return param_1;
}

