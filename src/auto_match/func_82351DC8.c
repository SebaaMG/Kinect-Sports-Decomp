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
extern int fn_8225F160();
extern unsigned int lbl_821922D0;
extern unsigned int lbl_82192480;
extern unsigned int lbl_831C6E48;
extern unsigned int lbl_832765BC;


double fn_82351DC8(int param_1)

{
  int iVar1;
  int *piVar2;
  double dVar3;
  
  if ((((*(int *)(param_1 + 8) == 0xd) || (*(int *)(param_1 + 8) == 0xe)) &&
      (iVar1 = fn_8225F160(), *(int *)(iVar1 + 0xc) == 1)) &&
     (iVar1 = fn_8225F160(), *(int *)(iVar1 + 0x1c) == 0)) {
    dVar3 = (double)lbl_821922D0;
  }
  else {
    piVar2 = (int *)fn_8225F160();
    if (((*piVar2 == 0) || (piVar2 = (int *)fn_8225F160(), *piVar2 != 1)) ||
       (lbl_832765BC == 0)) {
      dVar3 = (double)lbl_82192480;
    }
    else {
      dVar3 = (double)lbl_831C6E48;
    }
  }
  return dVar3;
}

