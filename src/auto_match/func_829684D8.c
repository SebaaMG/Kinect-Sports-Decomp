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
extern unsigned int *auStack_40;
extern int fn_82F69148();


undefined8 fn_829684D8(int param_1,int param_2,int *param_3,ulonglong param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined4 *puVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined4 auStack_40 [16];
  
  uVar3 = (uint)param_4;
  if (param_5 != 0) {
    iVar6 = 0;
    if (uVar3 == 0) {
      return 0;
    }
    piVar7 = param_3 + -1;
    uVar13 = param_4;
    do {
      piVar7 = piVar7 + 1;
      *piVar7 = iVar6;
      iVar6 = iVar6 + 1;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
    if (uVar3 == 0) {
      return 0;
    }
    piVar7 = param_3;
    uVar8 = 1;
    do {
      iVar6 = *piVar7;
      uVar12 = uVar8 - 1;
      uVar4 = *(uint *)(*(int *)(*(int *)(iVar6 * 4 + param_2) * 4 + *(int *)(param_1 + 0x14)) +
                       0x10);
      if (uVar8 < uVar3) {
        iVar5 = uVar3 - uVar8;
        piVar10 = piVar7;
        uVar11 = uVar8;
        do {
          piVar10 = piVar10 + 1;
          uVar2 = *(uint *)(*(int *)(*(int *)(*piVar10 * 4 + param_2) * 4 + *(int *)(param_1 + 0x14)
                                    ) + 0x10);
          if ((uVar2 < uVar4) || ((uVar2 == uVar4 && (uVar11 < uVar12)))) {
            uVar4 = uVar2;
            uVar12 = uVar11;
          }
          uVar11 = uVar11 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      bVar1 = uVar8 < uVar3;
      *piVar7 = param_3[uVar12];
      piVar7 = piVar7 + 1;
      param_3[uVar12] = iVar6;
      uVar8 = uVar8 + 1;
    } while (bVar1);
  }
  if (uVar3 != 0) {
    puVar9 = auStack_40;
    uVar13 = param_4;
    do {
      *puVar9 = *(undefined4 *)
                 (*(int *)(((int)param_3 - (int)auStack_40) + (int)puVar9) * 4 + param_2);
      puVar9 = puVar9 + 1;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
    if (uVar3 != 0) {
      fn_82F69148(param_2,auStack_40,(param_4 & 0x3fffffff) << 2);
    }
  }
  return 0;
}

