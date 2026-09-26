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


undefined8 fn_8299A778(int param_1,int *param_2,uint param_3,int param_4,int *param_5)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  uint uVar7;
  undefined8 uVar6;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  ulonglong uVar15;
  longlong lVar16;
  
  uVar9 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar10 = 0;
    do {
      puVar2 = *(uint **)(iVar10 + *(int *)(param_1 + 0x18));
      if (((puVar2 != (uint *)0x0) && (puVar2[9] != 1)) && (*puVar2 != 0)) {
        bVar8 = false;
        uVar11 = 0;
        if (puVar2[3] != 0) {
          iVar12 = 0;
          do {
            uVar13 = 0;
            piVar14 = param_2;
            if (param_3 != 0) {
              do {
                iVar3 = *(int *)(*piVar14 * 4 + *(int *)(param_1 + 0x14));
                if ((*(int *)(iVar3 + 4) == *(int *)(param_1 + 0x80)) &&
                   (*(char *)(iVar3 + 0x6f) != '\x03')) {
                  uVar5 = 0x11a1;
                  uVar6 = 0xffffffff82050f88;
                  goto LAB_8299a9e0;
                }
                if ((*(int *)(puVar2[4] + iVar12) == *piVar14) ||
                   (*(int *)(puVar2[4] + iVar12) == *(int *)(iVar3 + 0x38))) {
                  uVar7 = *puVar2;
                  uVar15 = 0;
                  uVar1 = puVar2[1];
                  uVar4 = (ulonglong)uVar7 & 0xfffff;
                  trapWord(6,uVar4,0);
                  if ((int)(uVar1 / uVar4) != 0) {
                    lVar16 = 0;
                    do {
                      uVar5 = fn_8299A778(param_1,(ulonglong)puVar2[2] + lVar16,uVar4,param_4,
                                            param_5);
                      if ((int)uVar5 < 0) {
                        return uVar5;
                      }
                      uVar15 = uVar15 + 1;
                      bVar8 = true;
                      lVar16 = ((ulonglong)uVar7 & 0xfffff) * 4 + lVar16;
                    } while ((uVar15 & 0xffffffff) < uVar1 / uVar4);
                  }
                }
                uVar13 = uVar13 + 1;
                piVar14 = piVar14 + 1;
              } while (uVar13 < param_3);
            }
            uVar11 = uVar11 + 1;
            iVar12 = iVar12 + 4;
          } while (uVar11 < puVar2[3]);
          if (bVar8) {
            uVar11 = *puVar2;
            uVar13 = uVar11 & 0xfff00000;
            if ((((((uVar13 == 0x60000000) || (uVar13 == 0x60500000)) || (uVar13 == 0x60a00000)) ||
                 ((uVar13 == 0x60f00000 || (uVar13 == 0x72e00000)))) ||
                ((uVar13 == 0x60700000 || ((uVar13 == 0x72c00000 || (uVar13 == 0x72d00000)))))) ||
               (uVar13 == 0x11000000)) {
              uVar13 = uVar11 & 0xfffff;
              uVar7 = (uVar11 & 0xfffff) << 1;
              if (uVar13 < uVar7) {
                iVar12 = (uVar11 & 0xfffff) << 2;
                do {
                  if (*(int *)(*(int *)(*(int *)(iVar12 + puVar2[2]) * 4 + *(int *)(param_1 + 0x14))
                              + 4) == *(int *)(param_1 + 0x88)) {
                    uVar5 = 0x11b6;
                    uVar6 = 0xffffffff82050f4c;
LAB_8299a9e0:
                    fn_82975B00(param_1,puVar2[0xf],uVar5,uVar6);
                    return 0xffffffff80004005;
                  }
                  uVar13 = uVar13 + 1;
                  iVar12 = iVar12 + 4;
                } while (uVar13 < uVar7);
              }
            }
            *(uint **)(*param_5 * 4 + param_4) = puVar2;
            *(undefined4 *)(*(int *)(iVar10 + *(int *)(param_1 + 0x18)) + 0x24) = 1;
            *param_5 = *param_5 + 1;
          }
        }
      }
      uVar9 = uVar9 + 1;
      iVar10 = iVar10 + 4;
    } while (uVar9 < *(uint *)(param_1 + 0xc));
  }
  return 0;
}

