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
extern unsigned int *auStack_40;
extern unsigned int fStack_38;
extern int fn_8246B178();
extern int fn_8246B320();
extern int fn_8255A070();
extern unsigned int lbl_821917C0;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831C6DF4;
extern unsigned int lbl_831C6DF8;
extern unsigned int lbl_831C6DFC;
extern unsigned int lbl_83265A28;
extern V16 vectorSubtractFloatingPoint();


void fn_8246AFB0(int param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  undefined4 auStack_40 [2];
  float fStack_38;
  
  if (*(int *)(param_1 + 8) != param_2) {
    *(int *)(param_1 + 8) = param_2;
    if (param_2 == 1) {
      dVar4 = (double)lbl_821CC160;
      fn_8246B320(dVar4,(double)lbl_821917C0,param_1,param_1 + 0x34,param_3,param_4,0);
      *(undefined4 *)(param_1 + 200) = 0;
      if (*(int *)(param_1 + 0x30) != 0) {
        fStack_38 = (float)dVar4;
        vectorSubtractFloatingPoint(in_vs45,in_vs32);
        dVar3 = (double)fn_8255A070();
        *(undefined4 *)(param_1 + 0x30) = 0;
        *(float *)(param_1 + 0xb4) = (float)dVar3;
        *(float *)(param_1 + 0xb8) = (float)dVar4;
        *(float *)(param_1 + 0xb0) = fStack_38;
      }
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      *(float *)(param_1 + 0x24) =
           (lbl_831C6DF8 - lbl_831C6DF4) *
           ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) + lbl_831C6DF4;
    }
    else if (param_2 == 2) {
      auStack_40[0] = 0xffffffff;
      uVar2 = fn_8246B178((double)lbl_821CC160,(double)lbl_831C6DFC,param_1 + 0x60,2,
                                auStack_40);
      fn_8246B320(param_1,uVar2);
      *(undefined4 *)(param_1 + 200) = 1;
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    else if (param_2 == 3) {
      fn_8246B320((double)*(float *)(param_1 + 0x8c),(double)*(float *)(param_1 + 0x90),
                        param_1,param_1 + 0x80,param_3,param_4,1);
      *(undefined4 *)(param_1 + 200) = 1;
      fVar1 = lbl_821917C0;
      *(float *)(param_1 + 0x8c) = lbl_821CC160;
      *(float *)(param_1 + 0x90) = fVar1;
    }
  }
  return;
}

