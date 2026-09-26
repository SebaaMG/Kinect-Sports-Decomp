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
extern int fn_82822368();
extern int fn_828223C8();
extern int fn_828252D8();
extern int fn_82825378();
extern int fn_82825428();
extern int fn_82827850();
extern int fn_82827980();
extern int fn_828295A8();
extern int fn_8282D760();
extern int fn_82830328();
extern int fn_82830520();
extern int fn_82833CC8();
extern int fn_82835800();
extern unsigned int iStack_60;


/* WARNING: Removing unreachable block (ram,0x82830794) */

void fn_828308B0(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iStack_60;
  int aiStack_5c [23];
  
  fn_82830328();
  fn_82830520(param_1,param_2);
  *param_3 = 0;
  cVar3 = fn_82827980(param_2,0xffffffff8201f07c,0);
  iVar1 = *(int *)(param_1 + 0x308);
  fn_828223C8(param_2 + 0x2fc,&iStack_60);
  iVar4 = iVar1;
  while (iVar2 = iStack_60, iStack_60 != 0) {
    if ((*param_3 == 0) && (*(char *)(iStack_60 + 0x28) == cVar3)) {
      fn_828295A8(iStack_60,param_3);
      *param_4 = *(int *)(*(int *)(iVar2 + 0x10) * 4 + *(int *)(param_1 + 0x3d0) + -4) + -1;
    }
    *(undefined4 *)(iVar2 + 0x10) =
         *(undefined4 *)(*(int *)(iVar2 + 0x10) * 4 + *(int *)(param_1 + 0x3d0) + -4);
    *(undefined1 *)(iVar2 + 0x28) =
         *(undefined1 *)((uint)*(byte *)(iVar2 + 0x28) + *(int *)(param_1 + 0x3cc) + -1);
    fn_828223C8(iStack_60,aiStack_5c);
    if (*(int *)(*(int *)(iVar2 + 0xc) * 4 + *(int *)(param_1 + 0x3d4) + -4) != 0) {
      fn_82822368(iStack_60);
      fn_82827850(iVar2,param_1,iVar4);
      iVar4 = iVar2;
    }
    iStack_60 = aiStack_5c[0];
  }
  if ((*(char *)(param_2 + 0x3f6) != '\0') || (*(char *)(param_2 + 0x3f3) != '\0')) {
    fn_82835800(param_1,param_2,iVar1);
  }
  fn_8282D760(param_1,param_2 + 0x36c,0xffffffff82829f90);
  fn_82833CC8(param_1,param_2,iVar1);
  fn_8282D760(param_1,param_2 + 0x318,0xffffffff8282bb58);
  fn_8282D760(param_1,param_2 + 0x344,0xffffffff8282b470);
  fn_82825378(param_1,param_2);
  fn_828252D8(*(undefined4 *)(param_1 + 0x3cc));
  fn_828252D8(*(undefined4 *)(param_1 + 0x3d0));
  fn_828252D8(*(undefined4 *)(param_1 + 0x3d4));
  fn_82825428(param_2);
  return;
}

