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
extern int fn_82C45200();
extern int fn_82C4E5E8();
extern unsigned int lbl_8200E1A8;
extern unsigned int lbl_8201467C;


undefined8
fn_82C6F290(int param_1,int *param_2,uint *param_3,int param_4,uint *param_5,int param_6,
             uint *param_7)

{
  ulonglong *puVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  float *pfVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar13;
  ulonglong uVar12;
  double dVar14;
  double dVar15;
  
  if (param_1 == 0) {
    return 0xfffffffffffffffd;
  }
  puVar1 = *(ulonglong **)(param_1 + 0x54);
  uVar11 = 0x20;
  iVar13 = 0;
  uVar4 = (ulonglong)*(uint *)(puVar1 + 1);
  uVar5 = uVar4 + 0x10;
  iVar2 = 0;
  if ((uVar5 & 0xffffffff) < 0x20) {
    do {
      iVar13 = iVar2;
      if ((uVar5 & 0xffffffff) == 0) break;
      uVar11 = uVar11 - uVar5;
      *(int *)(puVar1 + 1) = (int)(uVar4 - uVar5);
      iVar13 = ((int)(*puVar1 >> (0x40 - uVar5 & 0x7f)) << ((uint)uVar11 & 0x3f)) + iVar13;
      *puVar1 = *puVar1 << (uVar5 & 0x7f);
      if ((longlong)(uVar4 - uVar5) < 0) {
        fn_82C4E5E8(puVar1);
      }
      uVar4 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar5 = uVar4 + 0x10;
      iVar2 = iVar13;
    } while ((uVar5 & 0xffffffff) < (uVar11 & 0xffffffff));
  }
  *(int *)(puVar1 + 1) = (int)(uVar4 - uVar11);
  iVar13 = (int)(*puVar1 >> (0x40 - uVar11 & 0x7f)) + iVar13;
  *puVar1 = *puVar1 << (uVar11 & 0x7f);
  if ((longlong)(uVar4 - uVar11) < 0) {
    fn_82C4E5E8(puVar1);
  }
  *param_2 = iVar13;
  if (iVar13 == 0) {
LAB_82c6f934:
    puVar1 = *(ulonglong **)(param_1 + 0x54);
    uVar11 = 1;
    lVar9 = 0;
    uVar4 = (ulonglong)*(uint *)(puVar1 + 1);
    uVar5 = uVar4 + 0x10;
    if ((uVar5 & 0xffffffff) == 0) {
      do {
        if ((uVar5 & 0xffffffff) == 0) break;
        uVar11 = uVar11 - uVar5;
        *(int *)(puVar1 + 1) = (int)(uVar4 - uVar5);
        lVar9 = (ulonglong)(uint)((int)(*puVar1 >> (0x40 - uVar5 & 0x7f)) << ((uint)uVar11 & 0x3f))
                + lVar9;
        *puVar1 = *puVar1 << (uVar5 & 0x7f);
        if ((longlong)(uVar4 - uVar5) < 0) {
          fn_82C4E5E8(puVar1);
        }
        uVar4 = (ulonglong)*(uint *)(puVar1 + 1);
        uVar5 = uVar4 + 0x10;
      } while ((uVar5 & 0xffffffff) < (uVar11 & 0xffffffff));
    }
    uVar5 = *puVar1;
    *(int *)(puVar1 + 1) = (int)(uVar4 - uVar11);
    *puVar1 = uVar5 << (uVar11 & 0x7f);
    if ((longlong)(uVar4 - uVar11) < 0) {
      fn_82C4E5E8(puVar1);
    }
    uVar3 = 0;
    *param_7 = (uint)((uVar5 >> (0x40 - uVar11 & 0x7f) & 0xffffffff) + lVar9 != 0);
  }
  else {
    puVar1 = *(ulonglong **)(param_1 + 0x54);
    uVar11 = 4;
    lVar9 = 0;
    uVar4 = (ulonglong)*(uint *)(puVar1 + 1);
    uVar5 = uVar4 + 0x10;
    if ((uVar5 & 0xffffffff) < 4) {
      do {
        if ((uVar5 & 0xffffffff) == 0) break;
        uVar11 = uVar11 - uVar5;
        *(int *)(puVar1 + 1) = (int)(uVar4 - uVar5);
        lVar9 = (ulonglong)(uint)((int)(*puVar1 >> (0x40 - uVar5 & 0x7f)) << ((uint)uVar11 & 0x3f))
                + lVar9;
        *puVar1 = *puVar1 << (uVar5 & 0x7f);
        if ((longlong)(uVar4 - uVar5) < 0) {
          fn_82C4E5E8(puVar1);
        }
        uVar4 = (ulonglong)*(uint *)(puVar1 + 1);
        uVar5 = uVar4 + 0x10;
      } while ((uVar5 & 0xffffffff) < (uVar11 & 0xffffffff));
    }
    *(int *)(puVar1 + 1) = (int)(uVar4 - uVar11);
    uVar5 = (*puVar1 >> (0x40 - uVar11 & 0x7f) & 0xffffffff) + lVar9;
    *puVar1 = *puVar1 << (uVar11 & 0x7f);
    if ((longlong)(uVar4 - uVar11) < 0) {
      fn_82C4E5E8(puVar1);
    }
    *param_3 = (uint)uVar5;
    if ((uVar5 & 0xffffffff) < 0xf) {
      dVar14 = (double)lbl_8200E1A8;
      dVar15 = (double)lbl_8201467C;
      if ((uVar5 & 0xffffffff) == 7) {
        uVar3 = fn_82C45200(param_1,param_4,param_4 + 4,param_4 + 8,param_4 + 0xc,param_4 + 0x10
                                ,param_4 + 0x14,param_4 + 0x18);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        *(undefined4 *)(param_1 + 0x3c68) = *(undefined4 *)(param_1 + 0x3c44);
      }
      else if ((uVar5 & 0xffffffff) == 0xe) {
        uVar3 = fn_82C45200(param_1,param_4,param_4 + 4,param_4 + 8,param_4 + 0xc,param_4 + 0x10
                                ,param_4 + 0x14,param_4 + 0x18);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        *(undefined4 *)(param_1 + 0x3c68) = *(undefined4 *)(param_1 + 0x3c44);
        uVar3 = fn_82C45200(param_1,param_4 + 0x1c,param_4 + 0x20,param_4 + 0x24,param_4 + 0x28,
                                param_4 + 0x2c,param_4 + 0x30,param_4 + 0x34);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        *(undefined4 *)(param_1 + 0x3c6c) = *(undefined4 *)(param_1 + 0x3c44);
      }
      else {
        uVar8 = 0;
        if ((uVar5 & 0xffffffff) != 0) {
          pfVar7 = (float *)(param_4 + -4);
          do {
            puVar1 = *(ulonglong **)(param_1 + 0x54);
            uVar11 = 0xf;
            lVar9 = 0;
            uVar4 = (ulonglong)*(uint *)(puVar1 + 1);
            uVar5 = uVar4 + 0x10;
            if ((uVar5 & 0xffffffff) < 0xf) {
              do {
                if ((uVar5 & 0xffffffff) == 0) break;
                uVar11 = uVar11 - uVar5;
                *(int *)(puVar1 + 1) = (int)(uVar4 - uVar5);
                lVar9 = (ulonglong)
                        (uint)((int)(*puVar1 >> (0x40 - uVar5 & 0x7f)) << ((uint)uVar11 & 0x3f)) +
                        lVar9;
                *puVar1 = *puVar1 << (uVar5 & 0x7f);
                if ((longlong)(uVar4 - uVar5) < 0) {
                  fn_82C4E5E8(puVar1);
                }
                uVar4 = (ulonglong)*(uint *)(puVar1 + 1);
                uVar5 = uVar4 + 0x10;
              } while ((uVar5 & 0xffffffff) < (uVar11 & 0xffffffff));
            }
            uVar5 = *puVar1;
            *(int *)(puVar1 + 1) = (int)(uVar4 - uVar11);
            *puVar1 = uVar5 << (uVar11 & 0x7f);
            if ((longlong)(uVar4 - uVar11) < 0) {
              fn_82C4E5E8(puVar1);
            }
            puVar1 = *(ulonglong **)(param_1 + 0x54);
            uVar12 = 0xf;
            lVar10 = 0;
            uVar4 = (ulonglong)*(uint *)(puVar1 + 1);
            uVar6 = uVar4 + 0x10;
            if ((uVar6 & 0xffffffff) < 0xf) {
              do {
                if ((uVar6 & 0xffffffff) == 0) break;
                uVar12 = uVar12 - uVar6;
                *(int *)(puVar1 + 1) = (int)(uVar4 - uVar6);
                lVar10 = (ulonglong)
                         (uint)((int)(*puVar1 >> (0x40 - uVar6 & 0x7f)) << ((uint)uVar12 & 0x3f)) +
                         lVar10;
                *puVar1 = *puVar1 << (uVar6 & 0x7f);
                if ((longlong)(uVar4 - uVar6) < 0) {
                  fn_82C4E5E8(puVar1);
                }
                uVar4 = (ulonglong)*(uint *)(puVar1 + 1);
                uVar6 = uVar4 + 0x10;
              } while ((uVar6 & 0xffffffff) < (uVar12 & 0xffffffff));
            }
            uVar6 = *puVar1;
            *(int *)(puVar1 + 1) = (int)(uVar4 - uVar12);
            *puVar1 = uVar6 << (uVar12 & 0x7f);
            if ((longlong)(uVar4 - uVar12) < 0) {
              fn_82C4E5E8(puVar1);
            }
            if (*(int *)(*(int *)(param_1 + 0x54) + 0x14) != 0) goto LAB_82c6f44c;
            uVar8 = uVar8 + 1;
            pfVar7 = pfVar7 + 1;
            *pfVar7 = (float)((double)(((uVar5 >> (0x40 - uVar11 & 0x7f) & 0xffffffff) + lVar9 &
                                       0x1ffff) * 0x8000 +
                                       (uVar6 >> (0x40 - uVar12 & 0x7f) & 0xffffffff) + lVar10 &
                                      0xffffffff) * dVar15 - dVar14);
          } while (uVar8 < *param_3);
        }
      }
      puVar1 = *(ulonglong **)(param_1 + 0x54);
      uVar11 = 0x10;
      lVar9 = 0;
      uVar4 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar5 = uVar4 + 0x10;
      if ((uVar5 & 0xffffffff) < 0x10) {
        do {
          if ((uVar5 & 0xffffffff) == 0) break;
          uVar11 = uVar11 - uVar5;
          *(int *)(puVar1 + 1) = (int)(uVar4 - uVar5);
          lVar9 = (ulonglong)
                  (uint)((int)(*puVar1 >> (0x40 - uVar5 & 0x7f)) << ((uint)uVar11 & 0x3f)) + lVar9;
          *puVar1 = *puVar1 << (uVar5 & 0x7f);
          if ((longlong)(uVar4 - uVar5) < 0) {
            fn_82C4E5E8(puVar1);
          }
          uVar4 = (ulonglong)*(uint *)(puVar1 + 1);
          uVar5 = uVar4 + 0x10;
        } while ((uVar5 & 0xffffffff) < (uVar11 & 0xffffffff));
      }
      *(int *)(puVar1 + 1) = (int)(uVar4 - uVar11);
      uVar5 = (*puVar1 >> (0x40 - uVar11 & 0x7f) & 0xffffffff) + lVar9;
      *puVar1 = *puVar1 << (uVar11 & 0x7f);
      if ((longlong)(uVar4 - uVar11) < 0) {
        fn_82C4E5E8(puVar1);
      }
      *param_5 = (uint)uVar5;
      if ((uVar5 & 0xffffffff) < 0x65) {
        uVar8 = 0;
        if ((uVar5 & 0xffffffff) != 0) {
          pfVar7 = (float *)(param_6 + -4);
          do {
            puVar1 = *(ulonglong **)(param_1 + 0x54);
            uVar11 = 0xf;
            lVar9 = 0;
            uVar4 = (ulonglong)*(uint *)(puVar1 + 1);
            uVar5 = uVar4 + 0x10;
            if ((uVar5 & 0xffffffff) < 0xf) {
              do {
                if ((uVar5 & 0xffffffff) == 0) break;
                uVar11 = uVar11 - uVar5;
                *(int *)(puVar1 + 1) = (int)(uVar4 - uVar5);
                lVar9 = (ulonglong)
                        (uint)((int)(*puVar1 >> (0x40 - uVar5 & 0x7f)) << ((uint)uVar11 & 0x3f)) +
                        lVar9;
                *puVar1 = *puVar1 << (uVar5 & 0x7f);
                if ((longlong)(uVar4 - uVar5) < 0) {
                  fn_82C4E5E8(puVar1);
                }
                uVar4 = (ulonglong)*(uint *)(puVar1 + 1);
                uVar5 = uVar4 + 0x10;
              } while ((uVar5 & 0xffffffff) < (uVar11 & 0xffffffff));
            }
            uVar5 = *puVar1;
            *(int *)(puVar1 + 1) = (int)(uVar4 - uVar11);
            *puVar1 = uVar5 << (uVar11 & 0x7f);
            if ((longlong)(uVar4 - uVar11) < 0) {
              fn_82C4E5E8(puVar1);
            }
            puVar1 = *(ulonglong **)(param_1 + 0x54);
            uVar12 = 0xf;
            lVar10 = 0;
            uVar4 = (ulonglong)*(uint *)(puVar1 + 1);
            uVar6 = uVar4 + 0x10;
            if ((uVar6 & 0xffffffff) < 0xf) {
              do {
                if ((uVar6 & 0xffffffff) == 0) break;
                uVar12 = uVar12 - uVar6;
                *(int *)(puVar1 + 1) = (int)(uVar4 - uVar6);
                lVar10 = (ulonglong)
                         (uint)((int)(*puVar1 >> (0x40 - uVar6 & 0x7f)) << ((uint)uVar12 & 0x3f)) +
                         lVar10;
                *puVar1 = *puVar1 << (uVar6 & 0x7f);
                if ((longlong)(uVar4 - uVar6) < 0) {
                  fn_82C4E5E8(puVar1);
                }
                uVar4 = (ulonglong)*(uint *)(puVar1 + 1);
                uVar6 = uVar4 + 0x10;
              } while ((uVar6 & 0xffffffff) < (uVar12 & 0xffffffff));
            }
            uVar6 = *puVar1;
            *(int *)(puVar1 + 1) = (int)(uVar4 - uVar12);
            *puVar1 = uVar6 << (uVar12 & 0x7f);
            if ((longlong)(uVar4 - uVar12) < 0) {
              fn_82C4E5E8(puVar1);
            }
            if (*(int *)(*(int *)(param_1 + 0x54) + 0x14) != 0) goto LAB_82c6f44c;
            uVar8 = uVar8 + 1;
            pfVar7 = pfVar7 + 1;
            *pfVar7 = (float)((double)(((uVar5 >> (0x40 - uVar11 & 0x7f) & 0xffffffff) + lVar9 &
                                       0x1ffff) * 0x8000 +
                                       (uVar6 >> (0x40 - uVar12 & 0x7f) & 0xffffffff) + lVar10 &
                                      0xffffffff) * dVar15 - dVar14);
          } while (uVar8 < *param_5);
        }
        goto LAB_82c6f934;
      }
    }
LAB_82c6f44c:
    uVar3 = 1;
  }
  return uVar3;
}

