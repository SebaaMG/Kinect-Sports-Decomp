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
#define NAN(x) ((x) != (x))
extern int fn_82F68B6C();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;


void fn_82469458(double param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined8 uVar5;
  
  fVar3 = lbl_821CC160;
  iVar4 = *param_2;
  if (iVar4 == 6) {
    if (param_2[5] == 0) {
      return;
    }
    fVar1 = -(float)((double)(float)param_2[5] - param_1);
    fVar2 = lbl_821CC160;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar1 < lbl_821CC160) << 2) |
                  (uint)(NAN(fVar1) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      fVar2 = (float)((double)(float)param_2[5] - param_1);
    }
    param_2[5] = (int)fVar2;
    if (fVar2 != fVar3) {
      return;
    }
    iVar4 = param_2[1];
    uVar5 = 0xffffffff821bc114;
  }
  else if (iVar4 == 7) {
    if (param_2[5] == 0) {
      return;
    }
    fVar1 = -(float)((double)(float)param_2[5] - param_1);
    fVar2 = lbl_821CC160;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar1 < lbl_821CC160) << 2) |
                  (uint)(NAN(fVar1) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      fVar2 = (float)((double)(float)param_2[5] - param_1);
    }
    param_2[5] = (int)fVar2;
    if (fVar2 != fVar3) {
      return;
    }
    iVar4 = param_2[1];
    uVar5 = 0xffffffff821bc12c;
  }
  else {
    if (iVar4 != 8) {
      return;
    }
    if (param_2[5] == 0) {
      return;
    }
    fVar1 = -(float)((double)(float)param_2[5] - param_1);
    fVar2 = lbl_821CC160;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar1 < lbl_821CC160) << 2) |
                  (uint)(NAN(fVar1) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      fVar2 = (float)((double)(float)param_2[5] - param_1);
    }
    param_2[5] = (int)fVar2;
    if (fVar2 != fVar3) {
      return;
    }
    iVar4 = param_2[1];
    uVar5 = 0xffffffff821bc144;
  }
  fn_82F68B6C(iVar4,uVar5,0,0);
  return;
}

