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
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_823AC278();
extern int fn_8255AE78();
extern V16 loadVectorLeftIndexed128();


void fn_822F5D28(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  int in_r0;
  float in_register_00010000;
  float in_ACC;
  float fVar4;
  float in_register_00010008;
  float fVar5;
  float in_vr0;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_80 [16];
  undefined4 auStack_70 [4];
  undefined1 auStack_60 [96];
  
  pfVar2 = (float *)(param_2 + 0x30U & 0xfffffff0);
  fVar11 = *pfVar2;
  fVar12 = pfVar2[1];
  fVar13 = pfVar2[2];
  fVar14 = pfVar2[3];
  if (*(int *)(*(int *)(param_1 + 0xc) + 0x24) == 0) {
    fn_823AC278(auStack_70);
    if (*(int *)(*(int *)(param_1 + 0xc) + 700) != 0) {
      loadVectorLeftIndexed128(0xffffffff831ccda8,0xc);
      pfVar2 = (float *)((int)auStack_70 + in_r0 & 0xfffffff0);
      pfVar3 = (float *)((uint)(auStack_60 + in_r0) & 0xfffffff0);
      fVar4 = *pfVar2 * in_register_00010000;
      fVar5 = pfVar2[1] * in_ACC;
      fVar6 = pfVar2[2] * in_register_00010008;
      fVar7 = pfVar2[3] * in_vr0;
      in_register_00010000 = *pfVar3 * in_register_00010000;
      in_ACC = pfVar3[1] * in_ACC;
      in_register_00010008 = pfVar3[2] * in_register_00010008;
      in_vr0 = pfVar3[3] * in_vr0;
      goto LAB_822f5d84;
    }
  }
  else {
    fn_823AC278(auStack_70);
  }
  pfVar2 = (float *)((uint)(auStack_60 + in_r0) & 0xfffffff0);
  in_register_00010000 = *pfVar2;
  in_ACC = pfVar2[1];
  in_register_00010008 = pfVar2[2];
  in_vr0 = pfVar2[3];
  pfVar2 = (float *)((int)auStack_70 + in_r0 & 0xfffffff0);
  fVar4 = *pfVar2;
  fVar5 = pfVar2[1];
  fVar6 = pfVar2[2];
  fVar7 = pfVar2[3];
LAB_822f5d84:
  piVar1 = *(int **)(*(int *)(param_1 + 0xc) + 0x1c);
  fn_8255AE78((double)*(float *)(*(int *)(piVar1[4] * 4 + *piVar1) + 0x14));
  piVar1 = *(int **)(*(int *)(param_1 + 0xc) + 0x1c);
  pfVar2 = (float *)((uint)(auStack_80 + in_r0) & 0xfffffff0);
  *pfVar2 = fVar4;
  pfVar2[1] = fVar5;
  pfVar2[2] = fVar6;
  pfVar2[3] = fVar7;
  fn_8255AE78((double)*(float *)(*(int *)(piVar1[4] * 4 + *piVar1) + 0x14));
  pfVar2 = (float *)((int)auStack_70 + in_r0 & 0xfffffff0);
  *pfVar2 = in_register_00010000;
  pfVar2[1] = in_ACC;
  pfVar2[2] = in_register_00010008;
  pfVar2[3] = in_vr0;
  pfVar2 = (float *)(in_r0 + param_5 & 0xfffffff0);
  *pfVar2 = fVar11;
  pfVar2[1] = fVar12;
  pfVar2[2] = fVar13;
  pfVar2[3] = fVar14;
  pfVar2 = (float *)((uint)(auStack_80 + in_r0) & 0xfffffff0);
  fVar4 = pfVar2[1];
  fVar5 = pfVar2[2];
  fVar6 = pfVar2[3];
  pfVar3 = (float *)((int)auStack_70 + in_r0 & 0xfffffff0);
  fVar7 = *pfVar3;
  fVar8 = pfVar3[1];
  fVar9 = pfVar3[2];
  fVar10 = pfVar3[3];
  pfVar3 = (float *)(in_r0 + param_3 & 0xfffffff0);
  *pfVar3 = *pfVar2 + fVar11;
  pfVar3[1] = fVar4 + fVar12;
  pfVar3[2] = fVar5 + fVar13;
  pfVar3[3] = fVar6 + fVar14;
  pfVar2 = (float *)(in_r0 + param_4 & 0xfffffff0);
  *pfVar2 = fVar7 + fVar11;
  pfVar2[1] = fVar8 + fVar12;
  pfVar2[2] = fVar9 + fVar13;
  pfVar2[3] = fVar10 + fVar14;
  return;
}

