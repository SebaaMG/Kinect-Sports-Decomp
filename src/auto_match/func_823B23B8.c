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
extern int fn_823B3FE0();
extern int fn_8255AE78();
extern unsigned int lbl_82193E50;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831CA0B0;
extern unsigned int lbl_831CA0B4;
extern V16 loadVectorLeftIndexed128();


void fn_823B23B8(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  float *pfVar3;
  uint *puVar4;
  int in_r0;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float in_register_000100d0;
  float in_register_000100d4;
  float in_register_000100d8;
  float in_vr13;
  uint in_register_00010430;
  uint in_register_00010434;
  uint in_register_00010438;
  uint in_vr67;
  uint in_register_000104d0;
  uint in_register_000104d4;
  uint in_register_000104d8;
  uint in_vr77;
  undefined4 auStack_60 [24];
  
  iVar5 = param_1 + 0x20;
  iVar1 = *(int *)(param_1 + 0x1e4);
  puVar2 = (undefined4 *)(in_r0 + iVar5 & 0xfffffff0);
  uVar6 = *puVar2;
  uVar7 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  *(undefined4 *)(param_1 + 0x1a0) = 1;
  *(undefined4 *)(param_1 + 0x2a4) = 1;
  puVar2 = (undefined4 *)(param_1 + 0x1b0U & 0xfffffff0);
  *puVar2 = uVar6;
  puVar2[1] = uVar7;
  puVar2[2] = uVar8;
  puVar2[3] = uVar9;
  if (iVar1 != 0) {
    auStack_60[0] = 1;
    fn_823B3FE0(iVar1,auStack_60);
  }
  uVar6 = lbl_821CC160;
  *(undefined4 *)(param_1 + 0x168) = lbl_831CA0B0;
  uVar7 = lbl_831CA0B4;
  *(undefined4 *)(param_1 + 0x1a4) = 1;
  *(undefined4 *)(param_1 + 0x160) = uVar7;
  *(undefined4 *)(param_1 + 0x14c) = uVar6;
  if (param_2 == 0) {
    pfVar3 = (float *)(in_r0 + iVar5 & 0xfffffff0);
    loadVectorLeftIndexed128(0xffffffff831c9ce0,0x3f8);
    fVar10 = *pfVar3 * in_register_000100d0;
    fVar11 = pfVar3[1] * in_register_000100d4;
    fVar12 = pfVar3[2] * in_register_000100d8;
    fVar13 = pfVar3[3] * in_vr13;
    fn_8255AE78((double)lbl_82193E50);
    puVar4 = (uint *)(in_r0 + iVar5 & 0xfffffff0);
    *puVar4 = (uint)fVar10 & ~in_register_00010430 | in_register_000104d0 & in_register_00010430;
    puVar4[1] = (uint)fVar11 & ~in_register_00010434 | in_register_000104d4 & in_register_00010434;
    puVar4[2] = (uint)fVar12 & ~in_register_00010438 | in_register_000104d8 & in_register_00010438;
    puVar4[3] = (uint)fVar13 & ~in_vr67 | in_vr77 & in_vr67;
  }
  return;
}

