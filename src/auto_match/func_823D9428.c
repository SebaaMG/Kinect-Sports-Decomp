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
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_822AA718();


/* WARNING: Removing unreachable block (ram,0x823d94c4) */
/* WARNING: Removing unreachable block (ram,0x823d94e8) */
/* WARNING: Removing unreachable block (ram,0x823d94f4) */
/* WARNING: Removing unreachable block (ram,0x823d9504) */

undefined8 fn_823D9428(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float *pfVar6;
  uint uVar7;
  int in_r0;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [32];
  
  piVar3 = *(int **)(*(int *)(param_2 + 0x2c) * 4 + *(int *)(param_1 + 0x20));
  if ((piVar3[1] - *piVar3 & 0xfffffffcU) != 0) {
    uVar1 = *(undefined4 *)(param_2 + 0x1c);
    puVar4 = (undefined4 *)(param_2 + 0x80U & 0xfffffff0);
    fVar10 = (float)puVar4[1];
    fVar11 = (float)puVar4[2];
    uVar12 = puVar4[3];
    puVar5 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = fVar10;
    puVar5[2] = fVar11;
    puVar5[3] = uVar12;
    fn_822AA718(auStack_30,uVar1);
    fVar8 = *(float *)(((uint)(auStack_30 + in_r0) & 0xfffffff0) + 4);
    fVar9 = *(float *)(((uint)(auStack_30 + in_r0) & 0xfffffff0) + 8);
    fVar10 = fVar10 * fVar8 + 0.0 + fVar11 * fVar9;
    iVar2 = *(int *)(param_1 + 0x1c);
    pfVar6 = (float *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
    *pfVar6 = fVar10;
    pfVar6[1] = fVar10;
    pfVar6[2] = fVar10;
    pfVar6[3] = fVar10;
    uVar7 = in_r0 + *(int *)(iVar2 + 4) & 0xfffffff0;
    fVar10 = *(float *)(uVar7 + 4) * fVar8 + 0.0 + *(float *)(uVar7 + 8) * fVar9;
    pfVar6 = (float *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
    *pfVar6 = fVar10;
    pfVar6[1] = fVar10;
    pfVar6[2] = fVar10;
    pfVar6[3] = fVar10;
  }
  return 0;
}

