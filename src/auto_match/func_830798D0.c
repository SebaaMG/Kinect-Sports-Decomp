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
extern unsigned int *auStack_50;
extern int fn_8306D698();
extern int fn_8306EEF8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82186E68;
extern unsigned int lbl_82186E6C;
extern unsigned int lbl_82196080;
extern unsigned int lbl_821AAD20;


void fn_830798D0(double param_1,int param_2)

{
  float fVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  int in_r0;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 in_vs32 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs41 [16];
  undefined4 in_register_000103e0;
  undefined4 in_register_000103e4;
  undefined4 in_register_000103e8;
  undefined4 in_vr62;
  undefined4 in_register_000103f0;
  undefined4 in_register_000103f4;
  undefined4 in_register_000103f8;
  undefined4 in_vr63;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [64];
  
  fVar1 = (float)((double)*(float *)(param_2 + 0x80) - param_1);
  *(float *)(param_2 + 0x80) = fVar1;
  if (fVar1 <= lbl_821AAD20) {
    fn_8306D698(auStack_50,*(undefined4 *)(param_2 + 0xb0),6);
    fn_8306D698(auStack_40,*(undefined4 *)(param_2 + 0xb0),10);
    dVar6 = (double)fn_8306EEF8();
    dVar7 = (double)fn_8306EEF8();
    fVar4 = lbl_82196080;
    fVar1 = lbl_82186E6C - *(float *)(param_2 + 0x80);
    altv207_13(in_vs32,in_vs41);
    altv207_13(in_vs32,in_vs40);
    *(float *)(param_2 + 0x80) = lbl_82186E6C;
    puVar2 = (undefined4 *)(in_r0 + param_2 + 0x60 & 0xfffffff0);
    *puVar2 = in_register_000103f0;
    puVar2[1] = in_register_000103f4;
    puVar2[2] = in_register_000103f8;
    puVar2[3] = in_vr63;
    puVar2 = (undefined4 *)(in_r0 + param_2 + 0x70 & 0xfffffff0);
    *puVar2 = in_register_000103e0;
    puVar2[1] = in_register_000103e4;
    puVar2[2] = in_register_000103e8;
    puVar2[3] = in_vr62;
    fVar3 = lbl_82186E68;
    if (fVar4 < fVar1) {
      dVar5 = (double)(lbl_82002AE0 / fVar1);
      *(bool *)(param_2 + 0x84) = lbl_82186E68 < (float)(dVar5 * dVar6);
      *(bool *)(param_2 + 0x85) = fVar3 < (float)(dVar5 * dVar7);
    }
  }
  return;
}

