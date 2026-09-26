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
extern int fn_82A20370();
extern unsigned int iStack00000014;
extern unsigned int iStack0000001c;
extern unsigned int stack0x00000014;
extern unsigned int stack0x0000001c;


void fn_82A204C8(int param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  int iStack00000014;
  int iStack0000001c;
  
  iStack00000014 = param_1;
  iStack0000001c = param_2;
  fn_82A20370(&stack0x00000014,&stack0x0000001c,0x3a);
  *(int *)param_3 = iStack00000014;
  do {
    iVar1 = fn_82A20370(&stack0x00000014,&stack0x0000001c,0x5c);
    piVar2 = (int *)param_3;
  } while (iVar1 != 0);
  piVar2[2] = iStack00000014;
  piVar2[3] = iStack0000001c;
  piVar2[1] = iStack00000014 - *piVar2;
  iVar1 = fn_82A20370(&stack0x00000014,&stack0x0000001c,0x2e);
  if (iVar1 == 0) {
    iStack00000014 = 0;
    piVar2[5] = 0;
  }
  else {
    piVar2[5] = iStack0000001c;
  }
  piVar2[4] = iStack00000014;
  return;
}

