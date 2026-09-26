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
extern unsigned int *auStack_30;
extern unsigned int fStack00000024;
extern unsigned int fStack_2c;
extern unsigned int lbl_821CC160;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();


undefined8 fn_82430F70(double param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  undefined8 in_r0;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float in_register_000100d0;
  float in_register_000100d4;
  float in_register_000100d8;
  float in_vr13;
  float in_register_000104d0;
  float in_register_000104d4;
  float in_register_000104d8;
  float in_vr77;
  float fStack00000024;
  undefined1 auStack_30 [4];
  float fStack_2c;
  
  fStack00000024 = (float)param_1;
  iVar1 = **(int **)(*(int *)(*(int *)(param_3 + 0x244) + 0x38) + 4);
  if (iVar1 != 0) {
    pfVar2 = (float *)(iVar1 + 0x50U & 0xfffffff0);
    in_register_000104d0 = *pfVar2;
    in_register_000104d4 = pfVar2[1];
    in_register_000104d8 = pfVar2[2];
    in_vr77 = pfVar2[3];
  }
  (**(code **)(**(int **)(*(int *)(param_3 + 0x244) + 0x38) + 0xc))(ZEXT48(&stack0x00000000) - 0x30)
  ;
  fVar3 = lbl_821CC160;
  loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) + 0x24);
  iVar1 = (int)in_r0;
  pfVar2 = (float *)((uint)(auStack_30 + iVar1) & 0xfffffff0);
  fVar4 = in_register_000100d0 * *pfVar2 + in_register_000104d0;
  fVar5 = in_register_000100d4 * pfVar2[1] + in_register_000104d4;
  fVar6 = in_register_000100d8 * pfVar2[2] + in_register_000104d8;
  fVar7 = in_vr13 * pfVar2[3] + in_vr77;
  pfVar2 = (float *)((uint)(auStack_30 + iVar1) & 0xfffffff0);
  *pfVar2 = fVar4;
  pfVar2[1] = fVar5;
  pfVar2[2] = fVar6;
  pfVar2[3] = fVar7;
  if (fStack_2c < fVar3) {
    fVar7 = in_vr77;
    fVar6 = in_register_000104d8;
    fVar5 = in_register_000104d4;
    fVar4 = in_register_000104d0;
  }
  pfVar2 = (float *)(iVar1 + (int)param_2 & 0xfffffff0);
  *pfVar2 = fVar4;
  pfVar2[1] = fVar5;
  pfVar2[2] = fVar6;
  pfVar2[3] = fVar7;
  return param_2;
}

