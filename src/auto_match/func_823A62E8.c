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
extern unsigned int *auStack_4f;
extern int fn_82552720();
extern int fn_825529B0();
extern int fn_82F691F0();
extern unsigned int lbl_821CC160;


void fn_823A62E8(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 auStack_4f [79];
  
  iVar3 = param_2 + 0x4c;
  uVar4 = (ulonglong)*(uint *)(*(int *)(*(int *)(param_2 + 8) + 0x2e0) + 0x98);
  iVar2 = fn_825529B0(iVar3);
  if (((*(uint *)(param_2 + 0x1c) < uVar4) && (uVar4 == (uVar4 / 10) * 10)) && (uVar4 < 0x12d)) {
    *(undefined4 *)(param_2 + 0x28) = 1;
  }
  if ((*(int *)(param_2 + 0x28) != 0) && (iVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(auStack_4f,0,0xf);
  }
  if (*(int *)(param_2 + 0x24) == 0) {
    return;
  }
  fVar1 = (float)((double)*(float *)(param_2 + 0x2c) - param_1);
  *(float *)(param_2 + 0x2c) = fVar1;
  if (lbl_821CC160 < fVar1) {
    if (*(int *)(param_2 + 0x28) != 0) {
      return;
    }
    if (iVar2 != 0) {
      return;
    }
    iVar2 = fn_825529B0(iVar3);
    if (iVar2 != 0) {
      return;
    }
    fn_82552720((ulonglong)*(uint *)(*(int *)(param_2 + 8) + 0x174) + 0x84c,iVar3,
                      param_2 + 0x14,0,1,0,0);
  }
  *(undefined4 *)(param_2 + 0x24) = 0;
  return;
}

