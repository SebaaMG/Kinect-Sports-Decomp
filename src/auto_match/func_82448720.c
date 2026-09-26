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
extern unsigned int fStack_28;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern int fn_8252CAF8();
extern int fn_8252CBF8();
extern int fn_82552F88();
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_82191FCC;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_82448720(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  
  if (param_2 < 0) {
    return;
  }
  uVar5 = 0xffffffffffffffff;
  iVar2 = *(int *)(((*(int **)(param_1 + 0x48))[7] * (param_3 & 0xff) + param_2) * 4 +
                  **(int **)(param_1 + 0x48));
  if (param_4 == 0) {
    uVar5 = 0xff00ff;
    fn_8252CAF8(iVar2,0,0);
LAB_824487b0:
    if (param_4 == 0) {
      return;
    }
  }
  else {
    if (param_4 == 1) {
      uVar5 = 0xffffffffff800000;
      uVar4 = 2;
    }
    else {
      if (2 < param_4) goto LAB_824487b0;
      uVar5 = 0xff0000;
      uVar4 = 1;
    }
    uVar5 = uVar5 | 0xff;
    fn_8252CAF8(iVar2,0,uVar4);
  }
  iVar1 = *(int *)(iVar2 + 0x8c0);
  if (iVar1 != 0) {
    fn_82552F88(uVar5,&fStack_30);
    fStack_30 = fStack_30 * lbl_8218E8FC;
    fStack_2c = fStack_2c * lbl_8218E8FC;
    fStack_28 = fStack_28 * lbl_8218E8FC;
    fn_8252CBF8((double)lbl_821CA460,iVar2,&fStack_30);
    fVar3 = lbl_821CC160;
    if (*(float *)(iVar1 + 0x68) == lbl_821CC160) {
      *(float *)(iVar1 + 0x6c) = lbl_821CC160;
    }
    *(float *)(iVar1 + 0x74) = fVar3;
    *(undefined4 *)(iVar1 + 0x70) = 0;
    *(undefined4 *)(iVar1 + 0x78) = 1;
    *(undefined4 *)(iVar1 + 0x68) = lbl_82191FCC;
  }
  return;
}

