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
extern int fn_82C4E5E8();


void fn_82C589E8(int param_1)

{
  ulonglong *puVar1;
  uint *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  puVar7 = *(uint **)(param_1 + 0x110);
  uVar6 = *(uint *)(param_1 + 4000);
  if (uVar6 == 0) {
    uVar6 = 0;
    if (*(int *)(param_1 + 0x8c) != 0) {
      do {
        uVar9 = 0;
        uVar5 = 0;
        if (*(int *)(param_1 + 0x88) != 0) {
          puVar8 = puVar7 + -6;
          do {
            puVar1 = *(ulonglong **)(param_1 + 0x54);
            uVar11 = 1;
            lVar10 = 0;
            uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
            uVar4 = uVar3 + 0x10;
            if ((uVar4 & 0xffffffff) == 0) {
              do {
                if ((uVar4 & 0xffffffff) == 0) break;
                uVar11 = uVar11 - uVar4;
                *(int *)(puVar1 + 1) = (int)(uVar3 - uVar4);
                lVar10 = (ulonglong)
                         (uint)((int)(*puVar1 >> (0x40 - uVar4 & 0x7f)) << ((uint)uVar11 & 0x3f)) +
                         lVar10;
                *puVar1 = *puVar1 << (uVar4 & 0x7f);
                if ((longlong)(uVar3 - uVar4) < 0) {
                  fn_82C4E5E8(puVar1);
                }
                uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
                uVar4 = uVar3 + 0x10;
              } while ((uVar4 & 0xffffffff) < (uVar11 & 0xffffffff));
            }
            uVar4 = *puVar1;
            *(int *)(puVar1 + 1) = (int)(uVar3 - uVar11);
            *puVar1 = uVar4 << (uVar11 & 0x7f);
            if ((longlong)(uVar3 - uVar11) < 0) {
              fn_82C4E5E8(puVar1);
            }
            puVar2 = puVar8 + 6;
            uVar9 = uVar9 + 1;
            puVar8 = puVar8 + 6;
            *puVar8 = (uint)(((uVar4 >> (0x40 - uVar11 & 0x7f) & 0xffffffff) + lVar10 & 0xffffffff)
                            << 0x1f) | *puVar2 & 0x7fffffff;
            uVar5 = *(uint *)(param_1 + 0x88);
          } while (uVar9 < uVar5);
        }
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + uVar5 * 6;
      } while (uVar6 < *(uint *)(param_1 + 0x8c));
    }
  }
  else if (uVar6 == 1) {
    uVar6 = 0;
    if (*(int *)(param_1 + 0x8c) != 0) {
      puVar7 = puVar7 + -6;
      do {
        puVar1 = *(ulonglong **)(param_1 + 0x54);
        uVar11 = 1;
        lVar10 = 0;
        uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
        uVar4 = uVar3 + 0x10;
        if ((uVar4 & 0xffffffff) == 0) {
          do {
            if ((uVar4 & 0xffffffff) == 0) break;
            uVar11 = uVar11 - uVar4;
            *(int *)(puVar1 + 1) = (int)(uVar3 - uVar4);
            lVar10 = (ulonglong)
                     (uint)((int)(*puVar1 >> (0x40 - uVar4 & 0x7f)) << ((uint)uVar11 & 0x3f)) +
                     lVar10;
            *puVar1 = *puVar1 << (uVar4 & 0x7f);
            if ((longlong)(uVar3 - uVar4) < 0) {
              fn_82C4E5E8(puVar1);
            }
            uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
            uVar4 = uVar3 + 0x10;
          } while ((uVar4 & 0xffffffff) < (uVar11 & 0xffffffff));
        }
        uVar4 = *puVar1;
        *(int *)(puVar1 + 1) = (int)(uVar3 - uVar11);
        *puVar1 = uVar4 << (uVar11 & 0x7f);
        if ((longlong)(uVar3 - uVar11) < 0) {
          fn_82C4E5E8(puVar1);
        }
        if (((uVar4 >> (0x40 - uVar11 & 0x7f) & 0xffffffff) + lVar10 & 0xffffffff) == 0) {
          uVar5 = 0;
          if (*(int *)(param_1 + 0x88) != 0) {
            do {
              puVar1 = *(ulonglong **)(param_1 + 0x54);
              uVar11 = 1;
              lVar10 = 0;
              uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
              uVar4 = uVar3 + 0x10;
              if ((uVar4 & 0xffffffff) == 0) {
                do {
                  if ((uVar4 & 0xffffffff) == 0) break;
                  uVar11 = uVar11 - uVar4;
                  *(int *)(puVar1 + 1) = (int)(uVar3 - uVar4);
                  lVar10 = (ulonglong)
                           (uint)((int)(*puVar1 >> (0x40 - uVar4 & 0x7f)) << ((uint)uVar11 & 0x3f))
                           + lVar10;
                  *puVar1 = *puVar1 << (uVar4 & 0x7f);
                  if ((longlong)(uVar3 - uVar4) < 0) {
                    fn_82C4E5E8(puVar1);
                  }
                  uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
                  uVar4 = uVar3 + 0x10;
                } while ((uVar4 & 0xffffffff) < (uVar11 & 0xffffffff));
              }
              uVar4 = *puVar1;
              *(int *)(puVar1 + 1) = (int)(uVar3 - uVar11);
              *puVar1 = uVar4 << (uVar11 & 0x7f);
              if ((longlong)(uVar3 - uVar11) < 0) {
                fn_82C4E5E8(puVar1);
              }
              puVar8 = puVar7 + 6;
              uVar5 = uVar5 + 1;
              puVar7 = puVar7 + 6;
              *puVar7 = (uint)(((uVar4 >> (0x40 - uVar11 & 0x7f) & 0xffffffff) + lVar10 & 0xffffffff
                               ) << 0x1f) | *puVar8 & 0x7fffffff;
            } while (uVar5 < *(uint *)(param_1 + 0x88));
          }
        }
        else {
          uVar5 = 0;
          if (*(int *)(param_1 + 0x88) != 0) {
            do {
              uVar5 = uVar5 + 1;
              puVar7[6] = puVar7[6] | 0x80000000;
              puVar7 = puVar7 + 6;
            } while (uVar5 < *(uint *)(param_1 + 0x88));
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(param_1 + 0x8c));
    }
  }
  else if ((uVar6 < 3) && (uVar6 = 0, *(int *)(param_1 + 0x88) != 0)) {
    do {
      puVar1 = *(ulonglong **)(param_1 + 0x54);
      uVar11 = 1;
      lVar10 = 0;
      uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar4 = uVar3 + 0x10;
      if ((uVar4 & 0xffffffff) == 0) {
        do {
          if ((uVar4 & 0xffffffff) == 0) break;
          uVar11 = uVar11 - uVar4;
          *(int *)(puVar1 + 1) = (int)(uVar3 - uVar4);
          lVar10 = (ulonglong)
                   (uint)((int)(*puVar1 >> (0x40 - uVar4 & 0x7f)) << ((uint)uVar11 & 0x3f)) + lVar10
          ;
          *puVar1 = *puVar1 << (uVar4 & 0x7f);
          if ((longlong)(uVar3 - uVar4) < 0) {
            fn_82C4E5E8(puVar1);
          }
          uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
          uVar4 = uVar3 + 0x10;
        } while ((uVar4 & 0xffffffff) < (uVar11 & 0xffffffff));
      }
      uVar4 = *puVar1;
      *(int *)(puVar1 + 1) = (int)(uVar3 - uVar11);
      *puVar1 = uVar4 << (uVar11 & 0x7f);
      if ((longlong)(uVar3 - uVar11) < 0) {
        fn_82C4E5E8(puVar1);
      }
      if (((uVar4 >> (0x40 - uVar11 & 0x7f) & 0xffffffff) + lVar10 & 0xffffffff) == 0) {
        uVar5 = 0;
        puVar8 = puVar7;
        if (*(int *)(param_1 + 0x8c) != 0) {
          do {
            puVar1 = *(ulonglong **)(param_1 + 0x54);
            uVar11 = 1;
            lVar10 = 0;
            uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
            uVar4 = uVar3 + 0x10;
            if ((uVar4 & 0xffffffff) == 0) {
              do {
                if ((uVar4 & 0xffffffff) == 0) break;
                uVar11 = uVar11 - uVar4;
                *(int *)(puVar1 + 1) = (int)(uVar3 - uVar4);
                lVar10 = (ulonglong)
                         (uint)((int)(*puVar1 >> (0x40 - uVar4 & 0x7f)) << ((uint)uVar11 & 0x3f)) +
                         lVar10;
                *puVar1 = *puVar1 << (uVar4 & 0x7f);
                if ((longlong)(uVar3 - uVar4) < 0) {
                  fn_82C4E5E8(puVar1);
                }
                uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
                uVar4 = uVar3 + 0x10;
              } while ((uVar4 & 0xffffffff) < (uVar11 & 0xffffffff));
            }
            uVar4 = *puVar1;
            *(int *)(puVar1 + 1) = (int)(uVar3 - uVar11);
            *puVar1 = uVar4 << (uVar11 & 0x7f);
            if ((longlong)(uVar3 - uVar11) < 0) {
              fn_82C4E5E8(puVar1);
            }
            uVar5 = uVar5 + 1;
            *puVar8 = (uint)(((uVar4 >> (0x40 - uVar11 & 0x7f) & 0xffffffff) + lVar10 & 0xffffffff)
                            << 0x1f) | *puVar8 & 0x7fffffff;
            puVar8 = puVar8 + *(int *)(param_1 + 0x88) * 6;
          } while (uVar5 < *(uint *)(param_1 + 0x8c));
        }
      }
      else {
        uVar5 = 0;
        puVar8 = puVar7;
        if (*(int *)(param_1 + 0x8c) != 0) {
          do {
            uVar5 = uVar5 + 1;
            *puVar8 = *puVar8 | 0x80000000;
            puVar8 = puVar8 + *(int *)(param_1 + 0x88) * 6;
          } while (uVar5 < *(uint *)(param_1 + 0x8c));
        }
      }
      uVar6 = uVar6 + 1;
      puVar7 = puVar7 + 6;
    } while (uVar6 < *(uint *)(param_1 + 0x88));
  }
  return;
}

