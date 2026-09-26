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
extern int fn_8252CBF8();
extern int fn_82552F88();
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_8252B048(double param_1,double param_2,int param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,int param_7,int param_8)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  double dVar4;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  
  iVar1 = *(int *)(param_3 + 0x8c0);
  if (iVar1 != 0) {
    if (param_4 == 0) {
      dVar4 = (double)fn_8252CBF8((double)lbl_821CC160,param_3,0xffffffff82196290,param_5,0);
      if ((double)*(float *)(iVar1 + 0x68) == dVar4) {
        *(float *)(iVar1 + 0x6c) = (float)dVar4;
      }
      *(float *)(iVar1 + 0x68) = (float)dVar4;
      *(float *)(iVar1 + 0x74) = (float)dVar4;
      *(undefined4 *)(iVar1 + 0x70) = 0;
      *(undefined4 *)(iVar1 + 0x78) = 1;
    }
    else {
      fn_82552F88(param_5,&fStack_30);
      fStack_30 = fStack_30 * lbl_8218E8FC;
      fStack_2c = fStack_2c * lbl_8218E8FC;
      fStack_28 = fStack_28 * lbl_8218E8FC;
      fn_8252CBF8((double)lbl_821CA460,param_3,&fStack_30);
      fVar2 = lbl_821CC160;
      if (*(float *)(iVar1 + 0x68) == lbl_821CC160) {
        *(float *)(iVar1 + 0x6c) = lbl_821CC160;
      }
      *(float *)(iVar1 + 0x68) = (float)param_1;
      uVar3 = 1;
      if (param_8 == 0) {
        *(float *)(iVar1 + 0x74) = fVar2;
        *(undefined4 *)(iVar1 + 0x70) = 0;
      }
      else {
        *(float *)(iVar1 + 0x74) = (float)param_2;
        *(undefined4 *)(iVar1 + 0x70) = 1;
      }
      if (param_7 == 0) {
        uVar3 = 0xffffffff;
      }
      *(undefined4 *)(iVar1 + 0x78) = uVar3;
    }
  }
  return;
}

