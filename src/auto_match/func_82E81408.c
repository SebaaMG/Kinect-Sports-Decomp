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
extern int fn_82E810B0();
extern unsigned int lbl_8215F300;


void fn_82E81408(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[3];
  *param_1 = &lbl_8215F300;
  while (iVar1 != 0) {
    iVar2 = param_1[3];
    iVar1 = *(int *)(iVar2 + 0xc);
    if (iVar2 != 0) {
      fn_82E810B0(iVar2,1);
    }
    param_1[3] = iVar1;
  }
  param_1[4] = 0;
  return;
}

