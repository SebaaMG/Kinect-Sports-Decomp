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
extern int fn_8240E9B8();
extern int fn_82416D20();
extern int fn_8252AF80();
extern int fn_82573988();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_82411788(double param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  double dVar6;
  
  fVar1 = (float)((double)*(float *)(param_2 + 0x94) - param_1);
  *(float *)(param_2 + 0x94) = fVar1;
  if (lbl_821CC160 <= fVar1) {
    iVar3 = **(int **)(param_2 + 0x24);
    if (*(int *)(iVar3 + 0xcb8) == 0) {
      fVar2 = *(float *)(iVar3 + 0x2b8);
    }
    else {
      fVar2 = *(float *)(iVar3 + 0x2b4);
    }
    dVar6 = (double)(fVar1 / fVar2);
    fn_8252AF80(dVar6,*(undefined4 *)(param_2 + 0x28),0);
    uVar5 = *(uint *)(*(int *)(param_2 + 0x28) + 0x1e0);
    if ((double)lbl_821CA460 <= dVar6) {
      uVar5 = uVar5 & 0xffffffdf;
    }
    else {
      uVar5 = uVar5 | 0x20;
    }
    *(uint *)(*(int *)(param_2 + 0x28) + 0x1e0) = uVar5;
    if (*(int *)(param_2 + 600) != 0) {
      fn_82573988(*(undefined4 *)(param_2 + 0x28),param_2 + 0x1f0);
    }
  }
  else {
    fn_8252AF80((double)lbl_821CA460,*(undefined4 *)(param_2 + 0x28),0);
    *(uint *)(*(int *)(param_2 + 0x28) + 0x1e0) =
         *(uint *)(*(int *)(param_2 + 0x28) + 0x1e0) & 0xffffffdf;
    fn_8240E9B8(param_2);
    lVar4 = (ulonglong)*(uint *)(param_2 + 0x24) + 0xa0;
    if (*(int *)(param_2 + 0x30) != 0) {
      lVar4 = (ulonglong)*(uint *)(param_2 + 0x24) + 0x110;
    }
    fn_82416D20(lVar4,param_2);
  }
  return;
}

