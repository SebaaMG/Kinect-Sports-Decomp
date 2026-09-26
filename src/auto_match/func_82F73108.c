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


undefined4 * fn_82F73108(undefined4 *param_1,ulonglong param_2)

{
  char *pcVar1;
  ulonglong uVar2;
  char acStack_1c [12];
  
  *(undefined1 *)(param_1 + 1) = 0;
  pcVar1 = acStack_1c;
  *param_1 = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  acStack_1c[0] = '\0';
  do {
    uVar2 = param_2 % 10;
    param_2 = param_2 / 10;
    pcVar1 = pcVar1 + -1;
    *pcVar1 = (char)uVar2 + '0';
  } while (param_2 != 0);
  fn_82F72E58(param_1,pcVar1,acStack_1c + -(int)pcVar1);
  return param_1;
}

