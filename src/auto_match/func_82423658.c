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
extern int fn_8229FDA0();
extern int fn_8229FF28();
extern int fn_82417F58();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;


void fn_82423658(double param_1,int param_2,int param_3)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  
  fVar5 = lbl_821CC160;
  if (*(int *)(*(int *)(param_2 + 4) + 0x1b4) == 4) {
    fVar1 = (float)((double)*(float *)(param_2 + 0x5c) - param_1);
    fVar3 = -fVar1;
    fVar4 = lbl_821CC160;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar3 < lbl_821CC160) << 2) |
                  (uint)(NAN(fVar3) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      fVar4 = fVar1;
    }
    *(float *)(param_2 + 0x5c) = fVar4;
    if (fVar4 != fVar5) {
      return;
    }
  }
  else {
    iVar6 = fn_82417F58();
    if ((*(int *)(iVar6 + 0x1a0) == 0) && (*(int *)(iVar6 + 0x1e0) == 0)) {
      return;
    }
  }
  uVar2 = *(undefined4 *)(param_3 + 0x3c);
  iVar6 = *(int *)(*(int *)(param_2 + 8) + 0xd4);
  fn_8229FF28(*(undefined4 *)(iVar6 + 0xc),*(undefined4 *)(param_3 + 0x30));
  fn_8229FDA0(*(undefined4 *)(iVar6 + 0xc),uVar2);
  return;
}

