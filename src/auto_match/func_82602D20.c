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
extern int fn_8251F720();
extern int fn_82549960();
extern int fn_825FBDB8();
extern int fn_82602390();
extern int fn_82627DB0();
extern int fn_8265B648();
extern int fn_8265C9E0();
extern unsigned int lbl_821CC160;
extern float lbl_8327F894;


void fn_82602D20(int param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  double dVar6;
  int aiStack_40;
  
  piVar4 = (int *)(param_2 + 0x290);
  if (*(int *)(param_2 + 0x290) != 0) {
    fn_825FBDB8(param_2);
    iVar2 = 0;
    if (0 < *(short *)(param_2 + 6)) {
      iVar5 = param_2 + 0x2a0;
      do {
        if (*(short *)(iVar5 + 0xa2) == -2) {
          fn_82627DB0(param_2,iVar5);
        }
        iVar2 = iVar2 + 1;
        iVar5 = iVar5 + 0x1d0;
      } while (iVar2 < *(short *)(param_2 + 6));
    }
    uVar1 = fn_8265C9E0(0x200);
    if ((uVar1 & 0xffffffff) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = fn_82549960(uVar1,piVar4,0,0,0,0);
    }
    *(int *)(param_2 + 0x274) = iVar2;
    (**(code **)(**(int **)(iVar2 + 0x1a8) + 0xc))(*(int **)(iVar2 + 0x1a8),0);
    aiStack_40 = *piVar4;
    if (aiStack_40 == 0) {
      aiStack_40 = 0;
    }
    else {
      fn_8265B648(&aiStack_40,5);
    }
    uVar3 = fn_8251F720(&aiStack_40,0);
    *(undefined4 *)(param_2 + 0x294) = uVar3;
    *(undefined4 *)(param_2 + 0x254) = 7;
    *piVar4 = 0;
  }
  if (*(int *)(param_2 + 0x254) == 7) {
    dVar6 = (double)lbl_821CC160;
    if ((double)*(float *)(param_1 + 0x838) <= dVar6) {
      dVar6 = (double)(*(float *)(param_1 + 0x820) * lbl_8327F894);
    }
    fn_82602390(dVar6,param_1,param_2);
  }
  return;
}

