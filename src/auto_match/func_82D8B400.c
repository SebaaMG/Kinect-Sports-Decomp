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
#define ZEXT48(x) ((U64)((U32)(x)))
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000000;
extern U64 storeVectorElementWordIndexed();
extern V16 vectorSubtractFloatingPoint();


void fn_82D8B400(int param_1,int *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int in_r0;
  ulonglong uVar3;
  undefined1 in_vs32 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs45 [16];
  undefined4 in_register_000100c0;
  undefined4 in_register_000100c4;
  undefined4 in_register_000100c8;
  undefined4 in_vr12;
  float fStack_50;
  float fStack_4c;
  
  uVar3 = ZEXT48(&stack0x00000000);
  (**(code **)(*param_2 + 0x1c))
            ((double)lbl_821AAD20,param_2,0xffffffff8323b1d0,param_3,uVar3 - 0x40);
  vectorSubtractFloatingPoint(in_vs32,in_vs45);
  puVar2 = (undefined4 *)(in_r0 + (int)param_3 & 0xfffffff0);
  *puVar2 = in_register_000100c0;
  puVar2[1] = in_register_000100c4;
  puVar2[2] = in_register_000100c8;
  puVar2[3] = in_vr12;
  vectorSubtractFloatingPoint(in_vs32,in_vs43);
  vectorSubtractFloatingPoint(in_vs45,in_vs43);
  uVar1 = storeVectorElementWordIndexed(in_vs40,0,uVar3 - 0x50);
  *(undefined4 *)(uVar3 - 0x50) = uVar1;
  uVar1 = storeVectorElementWordIndexed(in_vs39,0,uVar3 - 0x4c);
  *(undefined4 *)(uVar3 - 0x4c) = uVar1;
  if (fStack_50 - fStack_4c < 0.0) {
    fStack_50 = fStack_4c;
  }
  *(float *)(param_1 + 400) = SQRT(fStack_50);
  return;
}

