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
extern unsigned int lbl_83274932;
extern unsigned int lbl_832749B0;


void fn_8261BBE0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  short *psVar12;
  
  iVar11 = 0;
  if (0 < lbl_832749B0) {
    psVar12 = &lbl_83274932;
    iVar7 = lbl_832749B0;
    do {
      uVar6 = *param_1;
      uVar9 = 0;
      if (uVar6 != 0) {
        puVar8 = param_1 + 2;
        do {
          if (*(short *)((int)puVar8 + 6) == psVar12[-1]) goto LAB_8261bc44;
          uVar9 = uVar9 + 1;
          puVar8 = (uint *)(*puVar8 + (int)puVar8);
        } while (uVar9 < uVar6);
      }
      puVar8 = (uint *)0x0;
LAB_8261bc44:
      uVar9 = 0;
      if (uVar6 != 0) {
        puVar10 = param_1 + 2;
        do {
          if (*(short *)((int)puVar10 + 6) == *psVar12) goto LAB_8261bc7c;
          uVar9 = uVar9 + 1;
          puVar10 = (uint *)(*puVar10 + (int)puVar10);
        } while (uVar9 < uVar6);
      }
      puVar10 = (uint *)0x0;
LAB_8261bc7c:
      if ((puVar8 != (uint *)0x0) && (puVar10 != (uint *)0x0)) {
        uVar5 = *(undefined2 *)(puVar8 + 2);
        uVar6 = puVar8[5];
        uVar9 = puVar8[6];
        uVar1 = puVar8[7];
        uVar2 = puVar8[8];
        uVar3 = puVar8[9];
        uVar4 = puVar8[10];
        puVar8[5] = puVar10[5];
        puVar8[6] = puVar10[6];
        puVar8[7] = puVar10[7];
        puVar8[8] = puVar10[8];
        puVar8[9] = puVar10[9];
        puVar8[10] = puVar10[10];
        *(undefined2 *)(puVar8 + 2) = *(undefined2 *)(puVar10 + 2);
        puVar10[5] = uVar6;
        puVar10[6] = uVar9;
        puVar10[7] = uVar1;
        puVar10[8] = uVar2;
        puVar10[9] = uVar3;
        puVar10[10] = uVar4;
        *(undefined2 *)(puVar10 + 2) = uVar5;
        iVar7 = lbl_832749B0;
      }
      iVar11 = iVar11 + 1;
      psVar12 = psVar12 + 2;
    } while (iVar11 < iVar7);
  }
  return;
}

