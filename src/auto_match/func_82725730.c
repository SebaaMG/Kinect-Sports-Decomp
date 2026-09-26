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
extern int fn_827A0A18();
extern int fn_827A0A60();
extern int fn_827A3440();
extern unsigned int lbl_821AAD20;


float * fn_82725730(float *param_1,int param_2,undefined8 param_3,float *param_4,float *param_5)

{
  int iVar1;
  char cVar3;
  uint uVar2;
  double dVar4;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  
  dVar4 = (double)lbl_821AAD20;
  iVar1 = *(int *)(*(int *)(param_2 + 0xa0) + 0x114);
  if (iVar1 != 0) {
    fStack_40 = lbl_821AAD20;
    fStack_3c = lbl_821AAD20;
    fStack_38 = lbl_821AAD20;
    fStack_34 = lbl_821AAD20;
    cVar3 = fn_827A3440(iVar1,param_3,&fStack_40,0,0,0,0);
    if (cVar3 != '\0') {
      if (param_4 != (float *)0x0) {
        uVar2 = fn_827A0A18(*(undefined4 *)(param_2 + 0xa0));
        *param_4 = (float)uVar2;
      }
      if (param_5 != (float *)0x0) {
        uVar2 = fn_827A0A60(*(undefined4 *)(param_2 + 0xa0));
        *param_5 = (float)uVar2;
      }
      *param_1 = fStack_40;
      param_1[1] = fStack_3c;
      param_1[2] = fStack_38;
      param_1[3] = fStack_34;
      return param_1;
    }
  }
  if (param_4 != (float *)0x0) {
    *param_4 = (float)dVar4;
  }
  if (param_5 != (float *)0x0) {
    *param_5 = (float)dVar4;
  }
  *param_1 = (float)dVar4;
  param_1[1] = (float)dVar4;
  param_1[2] = (float)dVar4;
  param_1[3] = (float)dVar4;
  return param_1;
}

