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
extern unsigned int *auStack_1030;
extern unsigned int *auStack_830;
extern int fn_82293E20();
extern int fn_822ABA88();
extern int fn_82358FD8();
extern int fn_82528EE0();
extern unsigned int lbl_82193A18;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8241F6A8(ulonglong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_1030 [2048];
  undefined1 auStack_830 [2096];
  
  piVar1 = (int *)param_1;
  iVar2 = *piVar1;
  piVar1 = *(int **)(*(int *)(piVar1[6] * 0x1ac + piVar1[2]) * 4 + **(int **)(iVar2 + 8));
  fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1),0);
  dVar4 = (double)*(float *)(iVar2 + 0x65c);
  dVar3 = (double)*(float *)(iVar2 + 0x658);
  if ((param_1 & 0xffffffff) == (ulonglong)*(uint *)(iVar2 + 0x2b20)) {
    iVar2 = *(int *)(iVar2 + 0xd4);
    fn_82358FD8(*(undefined4 *)(iVar2 + 0x1c),auStack_1030,0x400,lbl_82193A18);
    fn_82528EE0(auStack_830,0x400,auStack_1030,param_2);
    fn_82293E20(dVar3,dVar4,iVar2);
  }
  return;
}

