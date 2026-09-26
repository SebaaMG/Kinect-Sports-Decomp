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
extern unsigned int fStack_68;
extern unsigned int fStack_78;
extern int fn_823C9098();
extern int fn_823CB830();
extern int fn_82F65018();


void fn_823C6D90(int param_1,int param_2,int param_3,int param_4,undefined8 param_5)

{
  ushort uVar1;
  ushort *puVar2;
  float *pfVar3;
  float *pfVar4;
  int in_r0;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float in_register_000107f0;
  float in_register_000107f4;
  float in_register_000107f8;
  float in_vr127;
  float afStack_80 [2];
  float fStack_78;
  float afStack_70 [2];
  float fStack_68;
  undefined1 auStack_60 [96];
  
  fn_823CB830(param_2,*(undefined4 *)(param_1 + 0x2a0),afStack_70,auStack_60,afStack_80,
                    param_5);
  puVar2 = *(ushort **)(((*(int *)(param_2 + 0x2c) == 0) + 0xa1) * 4 + *(int *)(param_1 + 0x240));
  uVar1 = *puVar2;
  if (((uVar1 == 0) || (uVar1 == 1)) || (uVar1 < 3)) {
    pfVar3 = (float *)((uint)(puVar2 + 0x10) & 0xfffffff0);
    in_register_000107f0 = *pfVar3;
    in_register_000107f4 = pfVar3[1];
    in_register_000107f8 = pfVar3[2];
    in_vr127 = pfVar3[3];
  }
  pfVar3 = (float *)((int)afStack_70 + in_r0 & 0xfffffff0);
  fVar6 = pfVar3[1];
  fVar7 = pfVar3[2];
  fVar8 = pfVar3[3];
  pfVar4 = (float *)((int)afStack_70 + in_r0 & 0xfffffff0);
  *pfVar4 = in_register_000107f0 - *pfVar3;
  pfVar4[1] = in_register_000107f4 - fVar6;
  pfVar4[2] = in_register_000107f8 - fVar7;
  pfVar4[3] = in_vr127 - fVar8;
  dVar5 = (double)fn_82F65018(-(double)afStack_70[0],-(double)fStack_68);
  fn_823C9098((double)afStack_80[0],(double)(float)dVar5,(double)fStack_78);
  if (*(int *)(param_1 + 0x260) == 0) {
    pfVar3 = (float *)(param_1 + 0x1c0U & 0xfffffff0);
    fVar6 = pfVar3[1];
    fVar7 = pfVar3[2];
    fVar8 = pfVar3[3];
    pfVar4 = (float *)((int)afStack_70 + in_r0 & 0xfffffff0);
    *pfVar4 = in_register_000107f0 - *pfVar3;
    pfVar4[1] = in_register_000107f4 - fVar6;
    pfVar4[2] = in_register_000107f8 - fVar7;
    pfVar4[3] = in_vr127 - fVar8;
  }
  else {
    pfVar3 = (float *)(in_r0 + param_3 & 0xfffffff0);
    fVar6 = pfVar3[1];
    fVar7 = pfVar3[2];
    fVar8 = pfVar3[3];
    pfVar4 = (float *)((int)afStack_70 + in_r0 & 0xfffffff0);
    *pfVar4 = in_register_000107f0 - *pfVar3;
    pfVar4[1] = in_register_000107f4 - fVar6;
    pfVar4[2] = in_register_000107f8 - fVar7;
    pfVar4[3] = in_vr127 - fVar8;
  }
  dVar5 = (double)fn_82F65018(-(double)afStack_70[0],-(double)fStack_68);
  *(float *)(param_4 + 4) = (float)dVar5;
  return;
}

