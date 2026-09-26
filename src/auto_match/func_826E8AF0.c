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
extern int fn_8268CC00();
extern int fn_826E8488();
extern int fn_826E8560();
extern int fn_826E8610();
extern unsigned int lbl_82054148;


void fn_826E8AF0(int param_1,float *param_2)

{
  int iVar3;
  undefined8 uVar1;
  longlong lVar2;
  double dVar4;
  
  *(undefined1 *)(param_1 + 0x15) = 0;
  fn_8268CC00(param_2);
  iVar3 = fn_826E8560(param_1);
  dVar4 = (double)lbl_82054148;
  if (iVar3 != 0) {
    uVar1 = fn_826E8488(param_1,5);
    iVar3 = fn_826E8610(param_1,uVar1);
    *param_2 = (float)((double)(longlong)iVar3 * dVar4);
    iVar3 = fn_826E8610(param_1,uVar1);
    param_2[4] = (float)((double)(longlong)iVar3 * dVar4);
  }
  iVar3 = fn_826E8560(param_1);
  if (iVar3 != 0) {
    uVar1 = fn_826E8488(param_1,5);
    iVar3 = fn_826E8610(param_1,uVar1);
    param_2[3] = (float)((double)(longlong)iVar3 * dVar4);
    iVar3 = fn_826E8610(param_1,uVar1);
    param_2[1] = (float)((double)(longlong)iVar3 * dVar4);
  }
  lVar2 = fn_826E8488(param_1,5);
  if (0 < lVar2) {
    iVar3 = fn_826E8610(param_1,lVar2);
    param_2[2] = (float)(longlong)iVar3;
    iVar3 = fn_826E8610(param_1,lVar2);
    param_2[5] = (float)(longlong)iVar3;
  }
  return;
}

