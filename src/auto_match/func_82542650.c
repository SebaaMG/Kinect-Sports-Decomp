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
extern unsigned int *auStack_20;
extern int fn_825207D0();
extern int fn_826312F0();
extern int fn_82A1DD38();
extern unsigned int lbl_821CC160;


void fn_82542650(double param_1,longlong param_2,int param_3,int param_4,undefined8 param_5,
                  int param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  double dVar5;
  undefined4 auStack_20 [4];
  
  dVar5 = (double)lbl_821CC160;
  if (((param_6 == 0) && (param_1 <= dVar5)) || ((param_4 != 0 && (param_3 == 8)))) {
    auStack_20[0] = 0;
  }
  else {
    auStack_20[0] = 1;
  }
  lVar4 = param_2 + 0xa064;
  iVar2 = fn_825207D0(lVar4,auStack_20,4);
  piVar3 = (int *)param_2;
  if (iVar2 != 0) {
    fn_82A1DD38(lVar4,auStack_20);
    fn_826312F0(*piVar3,1,auStack_20,1);
  }
  iVar1 = *piVar3;
  iVar2 = piVar3[0x2aef];
  *(float *)(iVar1 + 0x1bd4) = (float)dVar5;
  *(float *)(iVar1 + 0x1bd8) = (float)dVar5;
  *(float *)(iVar1 + 0x1bdc) = (float)dVar5;
  *(int *)(iVar1 + 0x1bd0) = iVar2;
  *(ulonglong *)(iVar1 + 8) = *(ulonglong *)(iVar1 + 8) | 0x400000000000;
  return;
}

