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
#define NAN(x) ((x) != (x))
extern unsigned int *auStack_58;
extern unsigned int iStack_5c;
extern unsigned int lbl_82005748;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_60;


/* WARNING: Removing unreachable block (ram,0x824a5404) */
/* WARNING: Removing unreachable block (ram,0x824a5418) */
/* WARNING: Removing unreachable block (ram,0x824a541c) */
/* WARNING: Removing unreachable block (ram,0x824a547c) */
/* WARNING: Removing unreachable block (ram,0x824a5488) */
/* WARNING: Removing unreachable block (ram,0x824a5498) */

void fn_824A5348(int param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  float *pfVar7;
  int in_r0;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uStack_60;
  int iStack_5c;
  undefined1 auStack_58 [8];
  float afStack_50 [20];
  
  (**(code **)*param_2)(param_2,auStack_58,&uStack_60);
  (**(code **)(*param_2 + 4))(param_2,uStack_60,&iStack_5c);
  iVar2 = *(int *)(iStack_5c + 0x40);
  iVar3 = ((-(uint)(*(char *)(param_1 + 0x38) != '\0') & 5) + 10) * 0x40;
  puVar4 = (undefined4 *)(iVar2 + 0x140U & 0xfffffff0);
  uVar10 = puVar4[1];
  uVar11 = puVar4[2];
  uVar12 = puVar4[3];
  puVar5 = (undefined4 *)((int)afStack_50 + in_r0 & 0xfffffff0);
  *puVar5 = *puVar4;
  puVar5[1] = uVar10;
  puVar5[2] = uVar11;
  puVar5[3] = uVar12;
  puVar4 = (undefined4 *)(iVar3 + iVar2 & 0xfffffff0);
  uVar10 = puVar4[1];
  uVar11 = puVar4[2];
  uVar12 = puVar4[3];
  puVar5 = (undefined4 *)((int)afStack_50 + in_r0 & 0xfffffff0);
  *puVar5 = *puVar4;
  puVar5[1] = uVar10;
  puVar5[2] = uVar11;
  puVar5[3] = uVar12;
  *(undefined1 *)(param_1 + 0x74) = 0;
  if (*(char *)(param_1 + 0x74) != '\0') {
    fVar1 = *(float *)(param_1 + 0x6c);
    puVar4 = (undefined4 *)(iVar3 + iVar2 + 0x10U & 0xfffffff0);
    uVar10 = puVar4[1];
    uVar11 = puVar4[2];
    uVar12 = puVar4[3];
    puVar5 = (undefined4 *)((int)afStack_50 + in_r0 & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar10;
    puVar5[2] = uVar11;
    puVar5[3] = uVar12;
    uVar6 = (int)afStack_50 + in_r0 & 0xfffffff0;
    fVar8 = *(float *)(uVar6 + 4);
    fVar9 = *(float *)(uVar6 + 8);
    fVar8 = fVar8 * fVar8 + 0.0 + fVar9 * fVar9;
    pfVar7 = (float *)((int)afStack_50 + in_r0 & 0xfffffff0);
    *pfVar7 = fVar8;
    pfVar7[1] = fVar8;
    pfVar7[2] = fVar8;
    pfVar7[3] = fVar8;
    if (fVar1 < afStack_50[0]) {
      *(float *)(param_1 + 0x6c) = afStack_50[0];
    }
    if (*(float *)(param_1 + 0x6c) < *(float *)(param_1 + 0x40)) {
      *(undefined1 *)(param_1 + 0x74) = 0;
    }
  }
  if (*(char *)(param_1 + 0x74) == '\0') {
    fVar1 = *(float *)(param_1 + 0x48);
  }
  else {
    fVar1 = *(float *)(param_1 + 0x44);
  }
  fVar1 = *(float *)(param_1 + 0x6c) - fVar1;
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((fVar1 < lbl_821CC160) << 2) |
                (uint)(NAN(fVar1) || NAN(lbl_821CC160)) << 2)) < 0.0) {
    fVar1 = lbl_821CC160;
  }
  fVar8 = lbl_82005748;
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((fVar1 - lbl_82005748 < lbl_821CC160) << 2) |
                (uint)(NAN(fVar1 - lbl_82005748) || NAN(lbl_821CC160)) << 2)) < 0.0) {
    fVar8 = fVar1;
  }
  *(float *)(param_1 + 0x6c) = fVar8;
  if (*(char *)(param_1 + 0x74) == '\0') {
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined1 *)(param_1 + 0x74) = 0;
  }
  return;
}

