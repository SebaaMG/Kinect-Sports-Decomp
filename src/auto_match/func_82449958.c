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
extern unsigned int *auStack_40;
extern int fn_8242C1B8();
extern int fn_82435FA8();
extern unsigned int lbl_821CC160;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();


undefined8 fn_82449958(undefined8 param_1,int param_2,undefined8 param_3)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 in_r0;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float in_register_000100d0;
  float in_register_000100d4;
  float in_register_000100d8;
  float in_vr13;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_40 [40];
  
  pfVar1 = (float *)(*(int *)(*(int *)(**(int **)(param_2 + 0x40) + 0x174) + 4) + 0x40U & 0xfffffff0
                    );
  fVar7 = *pfVar1;
  fVar8 = pfVar1[1];
  fVar9 = pfVar1[2];
  fVar10 = pfVar1[3];
  iVar3 = fn_8242C1B8();
  fn_82435FA8((double)lbl_821CC160,ZEXT48(&stack0x00000000) - 0x40,param_2,param_3,
                    *(undefined1 *)(*(int *)(iVar3 + 0x1a0) + 0x44));
  pfVar1 = (float *)((uint)(auStack_40 + (int)in_r0) & 0xfffffff0);
  fVar4 = pfVar1[1];
  fVar5 = pfVar1[2];
  fVar6 = pfVar1[3];
  loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x50);
  pfVar2 = (float *)((int)in_r0 + (int)param_1 & 0xfffffff0);
  *pfVar2 = in_register_000100d0 * *pfVar1 + fVar7;
  pfVar2[1] = in_register_000100d4 * fVar4 + fVar8;
  pfVar2[2] = in_register_000100d8 * fVar5 + fVar9;
  pfVar2[3] = in_vr13 * fVar6 + fVar10;
  return param_1;
}

