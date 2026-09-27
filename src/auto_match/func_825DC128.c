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
extern int fn_826214A8();
extern int fn_82621500();
extern int fn_82A1DD38();
extern unsigned int lbl_821916FC;
extern float lbl_82195590;
extern float lbl_821955A0;
extern float lbl_82195800;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fn_825DC128(undefined8 param_1,int param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fn_82A1DD38(param_2 + 0x130,param_2 + 0x378,0x124);
  fn_82A1DD38(param_2 + 0x254,param_3 + 0x9c,0x124);
  fVar3 = lbl_821CC160;
  fVar2 = lbl_821916FC;
  fVar1 = *(float *)(param_2 + 0x6e4);
  *(float *)(param_2 + 0xfbc) = lbl_821CC160;
  if (fVar2 < fVar1 - *(float *)(param_2 + 0x104)) {
    *(float *)(param_2 + 0x290) = fVar3;
  }
  fVar2 = *(float *)(param_2 + 0x290);
  *(float *)(param_2 + 0xf78) = fVar3;
  if ((fVar3 < fVar2) && ((float)(longlong)*(int *)(param_2 + 0xf4c) == fVar3)) {
    *(float *)(param_2 + 0xf48) = fVar1;
  }
  if (fVar3 < fVar2) {
    if ((float)(longlong)*(int *)(param_2 + 0xf4c) == fVar3) {
      *(float *)(param_2 + 0xf48) = fVar1;
      fn_826214A8((double)(lbl_821CA460 - fVar2),param_2 + 0xe78);
    }
  }
  *(int *)(param_2 + 0xf4c) = (int)*(float *)(param_2 + 0x290);
  if ((*(int *)(param_2 + 0x35c) != 0) ||
     (*(float *)(param_2 + 0xf88) < *(float *)(param_2 + 0x358))) {
    fVar1 = (*(float *)(param_2 + 0x114) - *(float *)(param_2 + 0x734)) * lbl_82195590;
    fVar1 = ABS((float)(((double)fVar1 - (double)(longlong)fVar1) * lbl_821955A0) * lbl_82195800) *
            *(float *)(param_2 + 0x358);
    *(float *)(param_2 + 0xf8c) = fVar1;
    *(float *)(param_2 + 0xf88) = fVar1;
  }
  fn_82621500((double)*(float *)(param_2 + 800),param_2 + 0xd38);
  fn_82621500((double)*(float *)(param_2 + 700),param_2 + 0xd60);
  return 1;
}

