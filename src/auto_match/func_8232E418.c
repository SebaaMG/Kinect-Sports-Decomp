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
extern int fn_822C72E0();
extern int fn_8232E628();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;


void fn_8232E418(double param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  
  fVar5 = lbl_821CC160;
  uVar2 = *(uint *)(param_2 + 0x10);
  if (uVar2 == 0) {
    if (*(int *)(param_2 + 0x14) != 0) {
      fn_8232E628(param_2,1);
    }
  }
  else if (uVar2 == 1) {
    if (*(int *)(param_2 + 0x2c) == 0) {
      uVar6 = 0xffffffff821acc50;
    }
    else {
      if (*(int *)(param_2 + 0x34) == 0) {
        return;
      }
      fVar1 = (float)((double)*(float *)(param_2 + 0x34) - param_1);
      fVar3 = -fVar1;
      fVar4 = lbl_821CC160;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((fVar3 < lbl_821CC160) << 2) |
                    (uint)(NAN(fVar3) || NAN(lbl_821CC160)) << 2)) < 0.0) {
        fVar4 = fVar1;
      }
      *(float *)(param_2 + 0x34) = fVar4;
      if (fVar4 != fVar5) {
        return;
      }
      if (*(int *)(param_2 + 0x30) == 0) {
        uVar6 = 0xffffffff821acc28;
      }
      else {
        uVar6 = 0xffffffff821afe68;
      }
    }
    fn_822C72E0(*(undefined4 *)(*(int *)(param_2 + 8) + 0x20),uVar6);
  }
  else if ((uVar2 < 3) && (*(int *)(param_2 + 0x20) == 0)) {
    fn_822C72E0(*(undefined4 *)(*(int *)(*(int *)(param_2 + 0xc) + 0x114) + 0x20),
                      0xffffffff821afe74);
    *(undefined4 *)(param_2 + 0x20) = 1;
  }
  return;
}

