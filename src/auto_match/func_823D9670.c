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
extern int fn_822AA718();
extern unsigned int lbl_831D1A24;


bool fn_823D9670(int param_1,int *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  float fVar3;
  uint uVar4;
  float *pfVar5;
  bool bVar6;
  float fVar7;
  int in_r0;
  float fVar8;
  float fVar9;
  float in_register_00010014;
  float in_register_00010018;
  float in_register_000107f4;
  float in_register_000107f8;
  float afStack_50 [4];
  float afStack_40 [16];
  
  bVar6 = *(int *)(*(int *)(param_2[4] * 4 + *param_2) + 0x10) == 0;
  puVar2 = *(ushort **)((bVar6 + 0xa1) * 4 + param_1);
  uVar1 = *puVar2;
  if (((uVar1 == 0) || (uVar1 == 1)) || (uVar1 < 3)) {
    uVar4 = (uint)(puVar2 + 0x10) & 0xfffffff0;
    in_register_000107f4 = *(float *)(uVar4 + 4);
    in_register_000107f8 = *(float *)(uVar4 + 8);
  }
  fn_822AA718(afStack_50,*(undefined4 *)(**(int **)(param_1 + 8) + (uint)bVar6 * 4));
  fVar7 = lbl_831D1A24;
  uVar4 = (int)afStack_50 + in_r0 & 0xfffffff0;
  fVar8 = *(float *)(uVar4 + 4);
  fVar9 = *(float *)(uVar4 + 8);
  fVar3 = in_register_000107f4 * fVar8 + 0.0 + in_register_000107f8 * fVar9;
  fVar8 = in_register_00010014 * fVar8 + 0.0 + in_register_00010018 * fVar9;
  pfVar5 = (float *)((int)afStack_50 + in_r0 & 0xfffffff0);
  *pfVar5 = fVar3;
  pfVar5[1] = fVar3;
  pfVar5[2] = fVar3;
  pfVar5[3] = fVar3;
  pfVar5 = (float *)((int)afStack_40 + in_r0 & 0xfffffff0);
  *pfVar5 = fVar8;
  pfVar5[1] = fVar8;
  pfVar5[2] = fVar8;
  pfVar5[3] = fVar8;
  return afStack_40[0] - afStack_50[0] < fVar7;
}

