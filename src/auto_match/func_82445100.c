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
extern unsigned int fStack_18;
extern unsigned int fStack_1c;
extern unsigned int fStack_20;
extern unsigned int fStack_28;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern int fn_82444F08();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CA460;
extern unsigned int uStack00000038;
extern V16 vectorSubtractFloatingPoint();


void fn_82445100(double param_1,int param_2,undefined8 param_3,ulonglong param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  float fVar5;
  int in_r0;
  undefined1 in_vs32 [16];
  undefined1 in_vs33 [16];
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  ulonglong uStack00000038;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  iVar3 = **(int **)(param_2 + 4);
  puVar4 = (undefined4 *)((int)&fStack_30 + in_r0 & 0xfffffff0);
  *puVar4 = in_register_000104d0;
  puVar4[1] = in_register_000104d4;
  puVar4[2] = in_register_000104d8;
  puVar4[3] = in_vr77;
  fVar5 = lbl_8218E8E8;
  if (iVar3 != 0) {
    puVar4 = (undefined4 *)(iVar3 + 0x50U & 0xfffffff0);
    in_register_000104d0 = *puVar4;
    in_register_000104d4 = puVar4[1];
    in_register_000104d8 = puVar4[2];
    in_vr77 = puVar4[3];
  }
  vectorSubtractFloatingPoint(in_vs33,in_vs32);
  fVar2 = *(float *)(*(int *)(param_2 + 0x14) + 0x30);
  fVar1 = (float)((double)lbl_821CA460 / param_1);
  puVar4 = (undefined4 *)((int)&fStack_20 + in_r0 & 0xfffffff0);
  *puVar4 = in_register_000104d0;
  puVar4[1] = in_register_000104d4;
  puVar4[2] = in_register_000104d8;
  puVar4[3] = in_vr77;
  fStack_30 = fVar1 * fStack_20;
  fStack_28 = fVar1 * fStack_18;
  fStack_2c = fVar1 * fStack_1c - -(float)((double)fVar2 * param_1) * fVar5;
  uStack00000038 = param_4;
  fn_82444F08(param_2,param_3,param_4 & 0xffffffff00000000,1);
  return;
}

