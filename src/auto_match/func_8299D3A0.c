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
extern int fn_82975B00();


undefined8
fn_8299D3A0(int param_1,int param_2,uint param_3,uint param_4,int *param_5,longlong param_6,
             int *param_7,uint *param_8)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  int *piVar15;
  longlong lVar16;
  
  if (param_3 < param_4) {
    piVar11 = (int *)(param_3 * 4 + param_2);
    do {
      puVar1 = (uint *)*piVar11;
      if (puVar1 != (uint *)0x0) {
        uVar2 = *puVar1;
        uVar6 = (ulonglong)uVar2 & 0xfffff;
        if (uVar2 != 0) {
          uVar3 = puVar1[1];
          uVar12 = 0;
          trapWord(6,uVar6,0);
          if ((int)(uVar3 / uVar6) != 0) {
            lVar13 = 0;
            do {
              bVar7 = false;
              if ((uVar2 & 0xfffff) != 0) {
                lVar8 = (ulonglong)puVar1[2] + lVar13;
                uVar14 = uVar6;
                do {
                  iVar9 = *(int *)(*(int *)lVar8 * 4 + *(int *)(param_1 + 0x14));
                  lVar16 = param_6;
                  piVar15 = param_5;
                  if ((int)param_6 != 0) {
                    do {
                      if (((*(int *)lVar8 == *piVar15) || (*(int *)(iVar9 + 0x38) == *piVar15)) &&
                         (*(int *)(iVar9 + 0xc) == -1)) {
                        bVar7 = true;
                      }
                      lVar16 = lVar16 + -1;
                      piVar15 = piVar15 + 1;
                    } while (lVar16 != 0);
                  }
                  uVar14 = uVar14 - 1;
                  lVar8 = lVar8 + 4;
                } while (uVar14 != 0);
                if (bVar7) {
                  uVar14 = 0;
                  lVar8 = lVar13;
                  do {
                    iVar5 = *(int *)(puVar1[2] + (int)lVar8);
                    iVar9 = *(int *)(*(int *)(iVar5 * 4 + *(int *)(param_1 + 0x14)) + 0x38);
                    if (iVar9 == -1) {
                      iVar9 = iVar5;
                    }
                    uVar4 = *param_8;
                    uVar10 = 0;
                    piVar15 = param_7;
                    if (uVar4 != 0) {
                      do {
                        if (*piVar15 == iVar9) break;
                        uVar10 = uVar10 + 1;
                        piVar15 = piVar15 + 1;
                      } while (uVar10 < *param_8);
                    }
                    if (uVar10 == uVar4) {
                      if (uVar10 == 0x20) {
                        fn_82975B00(param_1,0,0x12c3,0xffffffff8205137c);
                        return 0xffffffff80004005;
                      }
                      param_7[uVar4] = iVar9;
                      *param_8 = *param_8 + 1;
                    }
                    uVar14 = uVar14 + 1;
                    lVar8 = lVar8 + 4;
                  } while ((uVar14 & 0xffffffff) < uVar6);
                }
              }
              uVar12 = uVar12 + 1;
              lVar13 = ((ulonglong)uVar2 & 0xfffff) * 4 + lVar13;
            } while ((uVar12 & 0xffffffff) < uVar3 / uVar6);
          }
        }
      }
      param_3 = param_3 + 1;
      piVar11 = piVar11 + 1;
    } while (param_3 < param_4);
  }
  return 0;
}

