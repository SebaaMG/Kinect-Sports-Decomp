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
extern int fn_82631578();
extern int fn_82631920();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_8320A898;


void fn_82577208(double param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = lbl_8320A898;
  uVar1 = lbl_821CA460;
  *(undefined4 *)(lbl_8320A898 + 0x2380) = lbl_821CA460;
  *(undefined4 *)(iVar2 + 0x2384) = uVar1;
  *(undefined4 *)(iVar2 + 0x2388) = uVar1;
  *(float *)(iVar2 + 0x238c) = (float)param_1;
  *(ulonglong *)(iVar2 + 8) = *(ulonglong *)(iVar2 + 8) | 0x8000;
  iVar2 = lbl_8320A898;
  *(undefined4 *)(lbl_8320A898 + 0x2ed8) = 0;
  *(ulonglong *)(iVar2 + 0x10) = *(ulonglong *)(iVar2 + 0x10) | 0x80000;
  fn_82631920(lbl_8320A898,*(undefined4 *)(param_2 + 0x58));
                    /* WARNING: Subroutine does not return */
  fn_82631578(lbl_8320A898,*(undefined4 *)(param_2 + 0x5c));
}

