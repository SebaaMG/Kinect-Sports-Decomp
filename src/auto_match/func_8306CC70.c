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
extern int fn_8306D678();
extern int fn_8306D688();
extern int fn_8306D690();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_8315FA80;


undefined8 fn_8306CC70(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  int in_r0;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  undefined1 in_vs32 [16];
  undefined1 in_vs35 [16];
  undefined4 in_register_000103f0;
  undefined4 in_register_000103f4;
  undefined4 in_register_000103f8;
  undefined4 in_vr63;
  undefined1 auStack_40 [64];
  
  uVar2 = 0;
  if (param_2 == 0) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    param_1 = param_1 + 0x78;
    fn_8306D678(auStack_40,param_1);
    altv207_13(in_vs32,in_vs35);
    puVar1 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
    *puVar1 = in_register_000103f0;
    puVar1[1] = in_register_000103f4;
    puVar1[2] = in_register_000103f8;
    puVar1[3] = in_vr63;
    dVar4 = (double)lbl_8200133C;
    if (lbl_8315FA80 == 0) {
      *(float *)(param_2 + 8) = (float)((double)*(float *)(param_2 + 8) * dVar4);
    }
    dVar3 = (double)fn_8306D688(param_1);
    *(float *)(param_2 + 0x10) = (float)dVar3;
    if (lbl_8315FA80 == 0) {
      *(float *)(param_2 + 0x10) = (float)(dVar3 * dVar4);
    }
    dVar4 = (double)fn_8306D690(param_1);
    *(float *)(param_2 + 0x14) = (float)dVar4;
  }
  return uVar2;
}

