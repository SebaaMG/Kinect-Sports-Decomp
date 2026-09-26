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


void fn_82C1AE70(int param_1,int param_2,int param_3)

{
  float fVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  float *pfVar8;
  float *pfVar9;
  
  iVar4 = param_3 + -1;
  do {
    bVar3 = false;
    iVar5 = 0;
    if (3 < iVar4) {
      puVar7 = (undefined4 *)(param_2 + 0xc);
      pfVar8 = (float *)(param_1 + 4);
      iVar6 = param_2 - param_1;
      do {
        fVar1 = pfVar8[-1];
        if (*pfVar8 < fVar1) {
          uVar2 = puVar7[-3];
          pfVar8[-1] = *pfVar8;
          bVar3 = true;
          puVar7[-3] = *(undefined4 *)(iVar6 + (int)pfVar8);
          *pfVar8 = fVar1;
          *(undefined4 *)(iVar6 + (int)pfVar8) = uVar2;
        }
        fVar1 = *pfVar8;
        if (pfVar8[1] < fVar1) {
          uVar2 = *(undefined4 *)(iVar6 + (int)pfVar8);
          *pfVar8 = pfVar8[1];
          bVar3 = true;
          *(undefined4 *)(iVar6 + (int)pfVar8) = puVar7[-1];
          pfVar8[1] = fVar1;
          puVar7[-1] = uVar2;
        }
        fVar1 = pfVar8[1];
        if (pfVar8[2] < fVar1) {
          uVar2 = puVar7[-1];
          pfVar8[1] = pfVar8[2];
          bVar3 = true;
          puVar7[-1] = *puVar7;
          pfVar8[2] = fVar1;
          *puVar7 = uVar2;
        }
        fVar1 = pfVar8[2];
        if (pfVar8[3] < fVar1) {
          uVar2 = *puVar7;
          pfVar8[2] = pfVar8[3];
          bVar3 = true;
          *puVar7 = puVar7[1];
          pfVar8[3] = fVar1;
          puVar7[1] = uVar2;
        }
        iVar5 = iVar5 + 4;
        pfVar8 = pfVar8 + 4;
        puVar7 = puVar7 + 4;
      } while (iVar5 < param_3 + -4);
    }
    if (iVar5 < iVar4) {
      iVar6 = iVar4 - iVar5;
      puVar7 = (undefined4 *)(iVar5 * 4 + param_2);
      pfVar8 = (float *)(iVar5 * 4 + param_1);
      do {
        pfVar9 = pfVar8 + 1;
        fVar1 = *pfVar8;
        if (*pfVar9 < fVar1) {
          uVar2 = *puVar7;
          *pfVar8 = *pfVar9;
          bVar3 = true;
          *puVar7 = *(undefined4 *)((int)pfVar9 + (param_2 - param_1));
          *pfVar9 = fVar1;
          *(undefined4 *)((int)pfVar9 + (param_2 - param_1)) = uVar2;
        }
        puVar7 = puVar7 + 1;
        iVar6 = iVar6 + -1;
        pfVar8 = pfVar9;
      } while (iVar6 != 0);
    }
  } while (bVar3);
  return;
}

