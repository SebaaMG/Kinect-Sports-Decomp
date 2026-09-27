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
extern unsigned int fStack_34;
extern unsigned int fStack_38;
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern int fn_8268CCB0();
extern int fn_8268D008();
extern int fn_827A0C20();
extern unsigned int lbl_82005718;
extern unsigned int lbl_82005728;
extern unsigned int uStack_30;


void fn_8272D2A0(int param_1,double *param_2)

{
  float fVar1;
  float *pfVar2;
  double dVar3;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined8 uStack_30;
  
  if ((*(byte *)((int)param_2 + 0x31) & 2) == 0) {
    uStack_30 = (longlong)*(int *)(*(int *)(param_1 + 0x84) + 4);
    dVar3 = (double)uStack_30;
  }
  else {
    dVar3 = param_2[1] * lbl_82005728;
  }
  fStack_3c = (float)dVar3;
  if ((*(byte *)((int)param_2 + 0x31) & 1) == 0) {
    uStack_30 = (longlong)**(int **)(param_1 + 0x84);
    dVar3 = (double)uStack_30;
  }
  else {
    dVar3 = *param_2 * lbl_82005728;
  }
  fStack_40 = (float)dVar3;
  fn_8268D008(param_1 + 0x44,&fStack_38,&fStack_40);
  fStack_40 = fStack_38;
  fStack_3c = fStack_34;
  pfVar2 = (float *)fn_827A0C20(*(undefined4 *)(param_1 + 0xa0));
  fStack_40 = fStack_40 - *pfVar2;
  fStack_3c = fStack_3c - pfVar2[1];
  fn_8268CCB0(param_1 + 0x44,&uStack_30,&fStack_40);
  fVar1 = lbl_82005718;
  if ((*(byte *)((int)param_2 + 0x31) & 1) != 0) {
    *param_2 = (double)((((U64)(uStack_30) >> 0) & 0xFFFFFFFF) * lbl_82005718);
    *(byte *)((int)param_2 + 0x31) = *(byte *)((int)param_2 + 0x31) & 0xfe | 1;
  }
  if ((*(byte *)((int)param_2 + 0x31) & 2) != 0) {
    param_2[1] = (double)((((U64)(uStack_30) >> 32) & 0xFFFFFFFF) * fVar1);
    *(byte *)((int)param_2 + 0x31) = *(byte *)((int)param_2 + 0x31) | 2;
  }
  return;
}

