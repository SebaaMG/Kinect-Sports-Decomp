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
extern int fn_82EFFE90();
extern unsigned int lbl_82005730;
extern float lbl_82160740;
extern unsigned int lbl_82160790;


void fn_82F00008(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  double dVar3;
  
  if (*(int *)(param_1 + 0x7898) != 0) {
    *(undefined4 *)(param_1 + 0x1d94) = *(undefined4 *)(param_1 + 0x78d0);
    fn_82EFFE90();
    return;
  }
  dVar3 = -((double)(longlong)*(int *)(param_1 + 0x1ee0) * lbl_82160740 - lbl_82160790);
  iVar1 = (int)dVar3;
  *(int *)(param_1 + 0x1d94) = iVar1;
  if (iVar1 < 9) {
    uVar2 = 1;
    if (lbl_82005730 < dVar3 - (double)(longlong)iVar1) goto LAB_82f000a8;
  }
  uVar2 = 0;
LAB_82f000a8:
  *(undefined4 *)(param_1 + 0x590) = uVar2;
  fn_82EFFE90();
  return;
}

