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
extern int fn_82681930();
extern int fn_8272DDC8();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int iStack_7c;
extern unsigned int iStack_80;
extern unsigned int lbl_82005720;
extern unsigned int lbl_82005748;


void fn_8272E140(undefined8 param_1,double *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iStack_80;
  int iStack_7c;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  
  piVar1 = (int *)fn_82F6A540();
  fn_82681930(&iStack_80);
  fn_8272DDC8(piVar1,&iStack_80,0);
  dVar5 = (double)((float)piVar1[0xf] * lbl_82005748);
  dVar4 = (double)(longlong)iStack_80 * lbl_82005720;
  dVar3 = (double)(longlong)iStack_7c * lbl_82005720;
  uVar2 = (**(code **)(*piVar1 + 8))(piVar1);
  *param_2 = dVar4;
  param_2[1] = dVar3;
  *(undefined1 *)(param_2 + 6) = uVar2;
  param_2[2] = dStack_68;
  param_2[3] = dStack_78;
  param_2[4] = dStack_70;
  *(byte *)((int)param_2 + 0x31) = *(byte *)((int)param_2 + 0x31) | 0x7f;
  param_2[5] = dVar5;
  fn_82F6A58C();
  return;
}

