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
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9FF8();


void fn_828A9070(int param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  
  iVar1 = *(int *)(param_1 + 0x5c);
  iVar2 = fn_828E9DA8(param_3);
  iVar3 = fn_828E9D90(param_3);
  if (iVar2 - iVar3 < iVar1) {
    cVar4 = '\0';
  }
  else {
    cVar4 = fn_828E9FF8(param_3,iVar1);
  }
  if (param_4 != 0) {
    *(undefined4 *)(param_4 + 4) = 2;
    *(char *)(param_4 + 8) = *(char *)(param_1 + 0x58) + cVar4;
  }
  return;
}

