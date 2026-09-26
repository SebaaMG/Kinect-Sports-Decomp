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
extern int fn_828B27A8();
extern unsigned int iStack0000001c;
extern unsigned int stack0x0000001c;


void fn_82890F90(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iStack0000001c;
  
  piVar2 = (int *)(param_1 + 0x50);
  piVar1 = (int *)*piVar2;
  piVar3 = (int *)*piVar1;
  if (piVar3 != piVar1) {
    do {
      if (piVar3[2] == param_2) break;
      piVar3 = (int *)*piVar3;
    } while (piVar3 != piVar1);
    if (piVar3 != piVar1) {
      return;
    }
  }
  iStack0000001c = param_2;
  fn_828B27A8(piVar2,*piVar2,&stack0x0000001c);
  return;
}

