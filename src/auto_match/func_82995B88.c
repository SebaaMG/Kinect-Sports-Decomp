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
extern unsigned int uStack_54;


undefined8 fn_82995B88(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  longlong lVar11;
  undefined4 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined4 uStack_54;
  int aiStack_50 [20];
  
  uVar1 = *param_2;
  uVar4 = (ulonglong)uVar1 & 0xfffff;
  if ((uVar1 & 0xfffff) == 0) {
LAB_82995b9c:
    uVar5 = 1;
  }
  else {
    uVar2 = param_2[1];
    uVar14 = 0;
    trapWord(6,uVar4,0);
    if ((int)(uVar2 / uVar4) != 0) {
      uVar3 = *(uint *)(param_1 + 0x6c);
      lVar6 = 0;
      do {
        lVar11 = 0;
        aiStack_50[0] = -1;
        aiStack_50[1] = -1;
        aiStack_50[2] = -1;
        aiStack_50[3] = -1;
        if ((uVar1 & 0xfffff) != 0) {
          puVar12 = &uStack_54;
          uVar10 = param_2[2];
          iVar8 = *(int *)(param_1 + 0x14);
          uVar15 = uVar4;
          do {
            uVar7 = lVar6 + lVar11;
            lVar11 = lVar11 + 1;
            puVar12 = puVar12 + 1;
            *puVar12 = *(undefined4 *)
                        (*(int *)(*(int *)((int)((uVar7 & 0xffffffff) << 2) + uVar10) * 4 + iVar8) +
                        0x10);
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
        if ((int)(uVar3 << 2 | uVar3 >> 0x1e) < 0) {
          iVar8 = 0;
          uVar10 = 0;
          do {
            uVar13 = 0;
            piVar9 = aiStack_50;
            while ((*piVar9 == -1 || (*piVar9 == *(int *)((uVar10 + uVar13) * 4 + -0x7cea42d8)))) {
              uVar13 = uVar13 + 1;
              piVar9 = piVar9 + 1;
              if (3 < uVar13) goto LAB_82995c7c;
            }
            uVar10 = uVar10 + 4;
            iVar8 = iVar8 + 1;
          } while (uVar10 < 0x20);
LAB_82995c7c:
          if (iVar8 == 8) goto LAB_82995b9c;
        }
        uVar14 = uVar14 + 1;
        lVar6 = lVar6 + uVar4;
      } while ((uVar14 & 0xffffffff) < uVar2 / uVar4);
    }
    uVar5 = 0;
  }
  return uVar5;
}

