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
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern int fn_82C49098();
extern int fn_82C493B0();
extern int fn_82C4E5E8();
extern int fn_82C531B8();
extern int fn_82C58408();
extern int fn_82C58FB8();
extern int fn_82C5CFF0();
extern int fn_82C5D578();
extern int fn_82C5E1D8();
extern int fn_82C9D918();
extern unsigned int lbl_820FC13C;
extern unsigned int lbl_820FD798;


undefined8 fn_82C851E0(int param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined4 uVar3;
  undefined8 uVar2;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint *puVar9;
  int iVar12;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar13;
  int iVar14;
  ulonglong *puVar15;
  undefined4 auStack_a0 [4];
  undefined1 auStack_90 [144];
  
  auStack_a0[0] = 0;
  iVar4 = (int)param_2;
  if (iVar4 == 0) {
    fn_82C5D578();
  }
  else {
    uVar3 = fn_82C5D578();
    *(undefined4 *)(param_1 + 0x120) = uVar3;
  }
  iVar12 = *(int *)(param_1 + 0x120);
  if (iVar12 != 5) {
    if ((((iVar12 != 0) && (iVar12 != 1)) && (iVar12 != 4)) && (iVar12 != 2)) {
      return 1;
    }
    if (*(int *)(param_1 + 0x5430) != 0) {
      plVar1 = *(longlong **)(param_1 + 0x54);
      uVar13 = 8;
      uVar6 = (ulonglong)*(uint *)(plVar1 + 1);
      uVar8 = uVar6 + 0x10;
      if ((uVar8 & 0xffffffff) < 8) {
        do {
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar13 = uVar13 - uVar8;
          *plVar1 = *plVar1 << (uVar8 & 0x7f);
          *(int *)(plVar1 + 1) = (int)(uVar6 - uVar8);
          if ((longlong)(uVar6 - uVar8) < 0) {
            fn_82C4E5E8(plVar1);
          }
          uVar6 = (ulonglong)*(uint *)(plVar1 + 1);
          uVar8 = uVar6 + 0x10;
        } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
      }
      *plVar1 = *plVar1 << (uVar13 & 0x7f);
      *(int *)(plVar1 + 1) = (int)(uVar6 - uVar13);
      if ((longlong)(uVar6 - uVar13) < 0) {
        fn_82C4E5E8(plVar1);
      }
    }
    if (*(int *)(param_1 + 0x5420) != 0) {
      if ((*(int *)(param_1 + 0x5568) == 0) || (*(int *)(param_1 + 0x56ec) != 0)) {
        puVar15 = *(ulonglong **)(param_1 + 0x54);
        uVar13 = 2;
        iVar12 = 0;
        uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
        uVar8 = uVar6 + 0x10;
        if (iVar4 == 0) {
          if ((uVar8 & 0xffffffff) < 2) {
            do {
              if ((uVar8 & 0xffffffff) == 0) break;
              uVar5 = *puVar15;
              uVar13 = uVar13 - uVar8;
              *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
              *puVar15 = uVar5 << (uVar8 & 0x7f);
              if ((longlong)(uVar6 - uVar8) < 0) {
                fn_82C4E5E8(puVar15,uVar5 >> (0x40 - uVar8 & 0x7f) & 0xffffffff);
              }
              uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
              uVar8 = uVar6 + 0x10;
            } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
          }
          goto LAB_82c85ae8;
        }
        iVar14 = 0;
        if ((uVar8 & 0xffffffff) < 2) {
          do {
            iVar12 = iVar14;
            if ((uVar8 & 0xffffffff) == 0) break;
            uVar13 = uVar13 - uVar8;
            *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
            iVar12 = ((int)(*puVar15 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar13 & 0x3f)) + iVar12;
            *puVar15 = *puVar15 << (uVar8 & 0x7f);
            if ((longlong)(uVar6 - uVar8) < 0) {
              fn_82C4E5E8(puVar15);
            }
            uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
            uVar8 = uVar6 + 0x10;
            iVar14 = iVar12;
          } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
        }
        uVar8 = *puVar15;
        *(int *)(puVar15 + 1) = (int)(uVar6 - uVar13);
        *puVar15 = uVar8 << (uVar13 & 0x7f);
        if ((longlong)(uVar6 - uVar13) < 0) {
          fn_82C4E5E8(puVar15);
        }
        *(int *)(param_1 + 0x556c) = (int)(uVar8 >> (0x40 - uVar13 & 0x7f)) + iVar12;
      }
      else {
        puVar15 = *(ulonglong **)(param_1 + 0x54);
        uVar13 = 1;
        iVar12 = 0;
        uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
        uVar8 = uVar6 + 0x10;
        if (iVar4 == 0) {
          if ((uVar8 & 0xffffffff) == 0) {
            do {
              if ((uVar8 & 0xffffffff) == 0) break;
              uVar5 = *puVar15;
              uVar13 = uVar13 - uVar8;
              *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
              *puVar15 = uVar5 << (uVar8 & 0x7f);
              if ((longlong)(uVar6 - uVar8) < 0) {
                fn_82C4E5E8(puVar15,uVar5 >> (0x40 - uVar8 & 0x7f) & 0xffffffff);
              }
              uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
              uVar8 = uVar6 + 0x10;
            } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
          }
          uVar5 = *puVar15;
          uVar8 = uVar5 << (uVar13 & 0x7f);
          *(int *)(puVar15 + 1) = (int)(uVar6 - uVar13);
          *puVar15 = uVar8;
          if ((longlong)(uVar6 - uVar13) < 0) {
            fn_82C4E5E8(puVar15,uVar8,uVar5 >> (0x40 - uVar13 & 0x7f));
          }
          puVar15 = *(ulonglong **)(param_1 + 0x54);
          uVar13 = 1;
          uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
          uVar8 = uVar6 + 0x10;
          if ((uVar8 & 0xffffffff) == 0) {
            do {
              if ((uVar8 & 0xffffffff) == 0) break;
              uVar5 = *puVar15;
              uVar13 = uVar13 - uVar8;
              *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
              *puVar15 = uVar5 << (uVar8 & 0x7f);
              if ((longlong)(uVar6 - uVar8) < 0) {
                fn_82C4E5E8(puVar15,uVar5 >> (0x40 - uVar8 & 0x7f) & 0xffffffff);
              }
              uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
              uVar8 = uVar6 + 0x10;
            } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
          }
LAB_82c85ae8:
          *(int *)(puVar15 + 1) = (int)(uVar6 - uVar13);
          *puVar15 = *puVar15 << (uVar13 & 0x7f);
          if ((longlong)(uVar6 - uVar13) < 0) {
            fn_82C4E5E8(puVar15);
          }
        }
        else {
          iVar14 = 0;
          if ((uVar8 & 0xffffffff) == 0) {
            do {
              iVar12 = iVar14;
              if ((uVar8 & 0xffffffff) == 0) break;
              uVar13 = uVar13 - uVar8;
              *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
              iVar12 = ((int)(*puVar15 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar13 & 0x3f)) + iVar12;
              *puVar15 = *puVar15 << (uVar8 & 0x7f);
              if ((longlong)(uVar6 - uVar8) < 0) {
                fn_82C4E5E8(puVar15);
              }
              uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
              uVar8 = uVar6 + 0x10;
              iVar14 = iVar12;
            } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
          }
          uVar8 = *puVar15;
          *(int *)(puVar15 + 1) = (int)(uVar6 - uVar13);
          *puVar15 = uVar8 << (uVar13 & 0x7f);
          if ((longlong)(uVar6 - uVar13) < 0) {
            fn_82C4E5E8(puVar15);
          }
          puVar15 = *(ulonglong **)(param_1 + 0x54);
          iVar14 = 0;
          *(int *)(param_1 + 0x5424) = (int)(uVar8 >> (0x40 - uVar13 & 0x7f)) + iVar12;
          uVar13 = 1;
          uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
          uVar8 = uVar6 + 0x10;
          iVar12 = 0;
          if ((uVar8 & 0xffffffff) == 0) {
            do {
              iVar14 = iVar12;
              if ((uVar8 & 0xffffffff) == 0) break;
              uVar13 = uVar13 - uVar8;
              *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
              iVar14 = ((int)(*puVar15 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar13 & 0x3f)) + iVar14;
              *puVar15 = *puVar15 << (uVar8 & 0x7f);
              if ((longlong)(uVar6 - uVar8) < 0) {
                fn_82C4E5E8(puVar15);
              }
              uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
              uVar8 = uVar6 + 0x10;
              iVar12 = iVar14;
            } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
          }
          uVar8 = *puVar15;
          *(int *)(puVar15 + 1) = (int)(uVar6 - uVar13);
          *puVar15 = uVar8 << (uVar13 & 0x7f);
          if ((longlong)(uVar6 - uVar13) < 0) {
            fn_82C4E5E8(puVar15);
          }
          *(int *)(param_1 + 0x5428) = (int)(uVar8 >> (0x40 - uVar13 & 0x7f)) + iVar14;
        }
      }
    }
    if (*(int *)(param_1 + 0x563c) != 0) {
      fn_82C5CFF0(param_1,auStack_90,auStack_a0);
    }
    puVar15 = *(ulonglong **)(param_1 + 0x54);
    uVar13 = 1;
    iVar14 = 0;
    uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
    uVar8 = uVar6 + 0x10;
    iVar12 = 0;
    if ((uVar8 & 0xffffffff) == 0) {
      do {
        iVar14 = iVar12;
        if ((uVar8 & 0xffffffff) == 0) break;
        uVar13 = uVar13 - uVar8;
        *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
        iVar14 = ((int)(*puVar15 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar13 & 0x3f)) + iVar14;
        *puVar15 = *puVar15 << (uVar8 & 0x7f);
        if ((longlong)(uVar6 - uVar8) < 0) {
          fn_82C4E5E8(puVar15);
        }
        uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
        uVar8 = uVar6 + 0x10;
        iVar12 = iVar14;
      } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
    }
    uVar8 = *puVar15;
    *(int *)(puVar15 + 1) = (int)(uVar6 - uVar13);
    *puVar15 = uVar8 << (uVar13 & 0x7f);
    if ((longlong)(uVar6 - uVar13) < 0) {
      fn_82C4E5E8(puVar15);
    }
    *(int *)(param_1 + 0xf78) = (int)(uVar8 >> (0x40 - uVar13 & 0x7f)) + iVar14;
    if (*(int *)(param_1 + 0x5568) != 0) {
      puVar15 = *(ulonglong **)(param_1 + 0x54);
      uVar13 = 1;
      iVar12 = 0;
      uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
      uVar8 = uVar6 + 0x10;
      if (iVar4 == 0) {
        if ((uVar8 & 0xffffffff) == 0) {
          do {
            if ((uVar8 & 0xffffffff) == 0) break;
            uVar5 = *puVar15;
            uVar13 = uVar13 - uVar8;
            *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
            *puVar15 = uVar5 << (uVar8 & 0x7f);
            if ((longlong)(uVar6 - uVar8) < 0) {
              fn_82C4E5E8(puVar15,uVar5 >> (0x40 - uVar8 & 0x7f) & 0xffffffff);
            }
            uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
            uVar8 = uVar6 + 0x10;
          } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
        }
        *puVar15 = *puVar15 << (uVar13 & 0x7f);
        *(int *)(puVar15 + 1) = (int)(uVar6 - uVar13);
        if ((longlong)(uVar6 - uVar13) < 0) {
          fn_82C4E5E8(puVar15);
        }
      }
      else {
        iVar14 = 0;
        if ((uVar8 & 0xffffffff) == 0) {
          do {
            iVar12 = iVar14;
            if ((uVar8 & 0xffffffff) == 0) break;
            uVar13 = uVar13 - uVar8;
            *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
            iVar12 = ((int)(*puVar15 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar13 & 0x3f)) + iVar12;
            *puVar15 = *puVar15 << (uVar8 & 0x7f);
            if ((longlong)(uVar6 - uVar8) < 0) {
              fn_82C4E5E8(puVar15);
            }
            uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
            uVar8 = uVar6 + 0x10;
            iVar14 = iVar12;
          } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
        }
        uVar8 = *puVar15;
        *(int *)(puVar15 + 1) = (int)(uVar6 - uVar13);
        *puVar15 = uVar8 << (uVar13 & 0x7f);
        if ((longlong)(uVar6 - uVar13) < 0) {
          fn_82C4E5E8(puVar15);
        }
        *(int *)(param_1 + 0x54ac) = (int)(uVar8 >> (0x40 - uVar13 & 0x7f)) + iVar12;
      }
    }
    puVar15 = *(ulonglong **)(param_1 + 0x54);
    uVar13 = 5;
    iVar14 = 0;
    uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
    uVar8 = uVar6 + 0x10;
    iVar12 = 0;
    if ((uVar8 & 0xffffffff) < 5) {
      do {
        iVar14 = iVar12;
        if ((uVar8 & 0xffffffff) == 0) break;
        uVar13 = uVar13 - uVar8;
        *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
        iVar14 = ((int)(*puVar15 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar13 & 0x3f)) + iVar14;
        *puVar15 = *puVar15 << (uVar8 & 0x7f);
        if ((longlong)(uVar6 - uVar8) < 0) {
          fn_82C4E5E8(puVar15);
        }
        uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
        uVar8 = uVar6 + 0x10;
        iVar12 = iVar14;
      } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
    }
    *(int *)(puVar15 + 1) = (int)(uVar6 - uVar13);
    iVar14 = (int)(*puVar15 >> (0x40 - uVar13 & 0x7f)) + iVar14;
    *puVar15 = *puVar15 << (uVar13 & 0x7f);
    if ((longlong)(uVar6 - uVar13) < 0) {
      fn_82C4E5E8(puVar15);
    }
    if (iVar4 != 0) {
      *(int *)(param_1 + 0xfa8) = iVar14;
    }
    if (iVar14 < 9) {
      puVar15 = *(ulonglong **)(param_1 + 0x54);
      uVar13 = 1;
      iVar12 = 0;
      uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
      uVar8 = uVar6 + 0x10;
      if (iVar4 == 0) {
        if ((uVar8 & 0xffffffff) == 0) {
          do {
            if ((uVar8 & 0xffffffff) == 0) break;
            uVar5 = *puVar15;
            uVar13 = uVar13 - uVar8;
            *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
            *puVar15 = uVar5 << (uVar8 & 0x7f);
            if ((longlong)(uVar6 - uVar8) < 0) {
              fn_82C4E5E8(puVar15,uVar5 >> (0x40 - uVar8 & 0x7f) & 0xffffffff);
            }
            uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
            uVar8 = uVar6 + 0x10;
          } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
        }
        *puVar15 = *puVar15 << (uVar13 & 0x7f);
        *(int *)(puVar15 + 1) = (int)(uVar6 - uVar13);
        if ((longlong)(uVar6 - uVar13) < 0) {
          fn_82C4E5E8(puVar15);
        }
      }
      else {
        iVar14 = 0;
        if ((uVar8 & 0xffffffff) == 0) {
          do {
            iVar12 = iVar14;
            if ((uVar8 & 0xffffffff) == 0) break;
            uVar13 = uVar13 - uVar8;
            *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
            iVar12 = ((int)(*puVar15 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar13 & 0x3f)) + iVar12;
            *puVar15 = *puVar15 << (uVar8 & 0x7f);
            if ((longlong)(uVar6 - uVar8) < 0) {
              fn_82C4E5E8(puVar15);
            }
            uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
            uVar8 = uVar6 + 0x10;
            iVar14 = iVar12;
          } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
        }
        uVar8 = *puVar15;
        *(int *)(puVar15 + 1) = (int)(uVar6 - uVar13);
        *puVar15 = uVar8 << (uVar13 & 0x7f);
        if ((longlong)(uVar6 - uVar13) < 0) {
          fn_82C4E5E8(puVar15);
        }
        *(int *)(param_1 + 0xfc) = (int)(uVar8 >> (0x40 - uVar13 & 0x7f)) + iVar12;
      }
    }
    else if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0xfc) = 0;
    }
    if (*(int *)(param_1 + 0xd98) != 0) {
      puVar15 = *(ulonglong **)(param_1 + 0x54);
      uVar13 = 1;
      iVar12 = 0;
      uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
      uVar8 = uVar6 + 0x10;
      if (iVar4 == 0) {
        if ((uVar8 & 0xffffffff) == 0) {
          do {
            if ((uVar8 & 0xffffffff) == 0) break;
            uVar5 = *puVar15;
            uVar13 = uVar13 - uVar8;
            *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
            *puVar15 = uVar5 << (uVar8 & 0x7f);
            if ((longlong)(uVar6 - uVar8) < 0) {
              fn_82C4E5E8(puVar15,uVar5 >> (0x40 - uVar8 & 0x7f) & 0xffffffff);
            }
            uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
            uVar8 = uVar6 + 0x10;
          } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
        }
        *puVar15 = *puVar15 << (uVar13 & 0x7f);
        *(int *)(puVar15 + 1) = (int)(uVar6 - uVar13);
        if ((longlong)(uVar6 - uVar13) < 0) {
          fn_82C4E5E8(puVar15);
        }
      }
      else {
        iVar14 = 0;
        if ((uVar8 & 0xffffffff) == 0) {
          do {
            iVar12 = iVar14;
            if ((uVar8 & 0xffffffff) == 0) break;
            uVar13 = uVar13 - uVar8;
            *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
            iVar12 = ((int)(*puVar15 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar13 & 0x3f)) + iVar12;
            *puVar15 = *puVar15 << (uVar8 & 0x7f);
            if ((longlong)(uVar6 - uVar8) < 0) {
              fn_82C4E5E8(puVar15);
            }
            uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
            uVar8 = uVar6 + 0x10;
            iVar14 = iVar12;
          } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
        }
        uVar8 = *puVar15;
        *(int *)(puVar15 + 1) = (int)(uVar6 - uVar13);
        *puVar15 = uVar8 << (uVar13 & 0x7f);
        if ((longlong)(uVar6 - uVar13) < 0) {
          fn_82C4E5E8(puVar15);
        }
        *(int *)(param_1 + 0xd8c) = (int)(uVar8 >> (0x40 - uVar13 & 0x7f)) + iVar12;
      }
    }
    if (*(int *)(param_1 + 0xd90) == 0) {
      iVar12 = *(int *)(param_1 + 0xfa8);
      if (iVar12 < 9) {
        if (iVar4 != 0) {
          *(undefined4 *)(param_1 + 0xd8c) = 1;
        }
      }
      else {
        if (iVar4 != 0) {
          *(undefined4 *)(param_1 + 0xd8c) = 0;
        }
        iVar12 = *(int *)(&lbl_820FC13C + iVar12 * 4);
      }
    }
    else {
      iVar12 = *(int *)(param_1 + 0xfa8);
    }
    *(int *)(param_1 + 0xf8) = iVar12;
    *(undefined4 *)(param_1 + 0xbbc) = 0;
    if ((*(int *)(param_1 + 0xbc0) != 0) && (iVar14 = *(int *)(param_1 + 0x120), iVar14 != 2)) {
      if (iVar12 < 9) {
        if ((iVar14 == 0) || (iVar14 == 4)) {
          *(undefined4 *)(param_1 + 0xbbc) = 7;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0xbbc) = 1;
      }
    }
    iVar14 = param_1 + 0xfd0;
    if (*(int *)(param_1 + 0xd8c) == 0) {
      iVar14 = param_1 + 0x14d0;
    }
    *(int *)(param_1 + 0x19d0) = iVar14;
    iVar14 = param_1 + 0x19e0;
    if (*(int *)(param_1 + 0xd8c) == 0) {
      iVar14 = param_1 + 0x29e0;
    }
    *(int *)(param_1 + 0x39e0) = iVar14;
    puVar15 = *(ulonglong **)(param_1 + 0x54);
    *(int *)(param_1 + 0xf8) = iVar12;
    if (((*(int *)((int)puVar15 + 0x14) != 0) || (iVar12 < 1)) || (0x1f < iVar12)) {
      return 1;
    }
    if (*(int *)(param_1 + 0x5444) != 0) {
      uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
      uVar13 = 2;
      iVar14 = 0;
      uVar8 = uVar6 + 0x10;
      iVar12 = 0;
      if ((uVar8 & 0xffffffff) < 2) {
        do {
          iVar14 = iVar12;
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar13 = uVar13 - uVar8;
          *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
          iVar14 = ((int)(*puVar15 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar13 & 0x3f)) + iVar14;
          *puVar15 = *puVar15 << (uVar8 & 0x7f);
          if ((longlong)(uVar6 - uVar8) < 0) {
            fn_82C4E5E8(puVar15);
          }
          uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
          uVar8 = uVar6 + 0x10;
          iVar12 = iVar14;
        } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
      }
      uVar8 = *puVar15;
      *(int *)(puVar15 + 1) = (int)(uVar6 - uVar13);
      *puVar15 = uVar8 << (uVar13 & 0x7f);
      if ((longlong)(uVar6 - uVar13) < 0) {
        fn_82C4E5E8(puVar15);
      }
      *(int *)(param_1 + 0x5448) = (int)(uVar8 >> (0x40 - uVar13 & 0x7f)) + iVar14;
    }
    if (*(int *)(param_1 + 0x120) == 2) {
      puVar15 = *(ulonglong **)(param_1 + 0x54);
      uVar13 = 3;
      lVar10 = 0;
      uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
      uVar8 = uVar6 + 0x10;
      if ((uVar8 & 0xffffffff) < 3) {
        do {
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar13 = uVar13 - uVar8;
          *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
          lVar10 = (ulonglong)
                   (uint)((int)(*puVar15 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar13 & 0x3f)) +
                   lVar10;
          *puVar15 = *puVar15 << (uVar8 & 0x7f);
          if ((longlong)(uVar6 - uVar8) < 0) {
            fn_82C4E5E8(puVar15);
          }
          uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
          uVar8 = uVar6 + 0x10;
        } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
      }
      *(int *)(puVar15 + 1) = (int)(uVar6 - uVar13);
      lVar10 = (*puVar15 >> (0x40 - uVar13 & 0x7f) & 0xffffffff) + lVar10;
      *puVar15 = *puVar15 << (uVar13 & 0x7f);
      if ((longlong)(uVar6 - uVar13) < 0) {
        fn_82C4E5E8(puVar15);
      }
      if ((int)lVar10 == 7) {
        puVar15 = *(ulonglong **)(param_1 + 0x54);
        uVar13 = 4;
        lVar10 = 0;
        uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
        uVar8 = uVar6 + 0x10;
        if ((uVar8 & 0xffffffff) < 4) {
          do {
            if ((uVar8 & 0xffffffff) == 0) break;
            uVar13 = uVar13 - uVar8;
            *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
            lVar10 = (ulonglong)
                     (uint)((int)(*puVar15 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar13 & 0x3f)) +
                     lVar10;
            *puVar15 = *puVar15 << (uVar8 & 0x7f);
            if ((longlong)(uVar6 - uVar8) < 0) {
              fn_82C4E5E8(puVar15);
            }
            uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
            uVar8 = uVar6 + 0x10;
          } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
        }
        *(int *)(puVar15 + 1) = (int)(uVar6 - uVar13);
        lVar10 = (*puVar15 >> (0x40 - uVar13 & 0x7f) & 0xffffffff) + lVar10;
        *puVar15 = *puVar15 << (uVar13 & 0x7f);
        if ((longlong)(uVar6 - uVar13) < 0) {
          fn_82C4E5E8(puVar15);
        }
        if (0xd < (int)lVar10) {
          return 1;
        }
        uVar2 = 1;
        lVar10 = lVar10 + 0x70;
      }
      else {
        uVar2 = 0;
      }
      uVar2 = fn_82C5E1D8(param_1,lVar10,uVar2,param_2);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    if ((*(int *)(param_1 + 0xfa8) < 9) && (iVar4 != 0)) {
      *(int *)(param_1 + 0xb7c) = param_1 + 0xb38;
      *(int *)(param_1 + 0xb88) = param_1 + 0xb0c;
    }
    if ((*(int *)(param_1 + 0x120) == 0) || (*(int *)(param_1 + 0x120) == 4)) {
      uVar2 = fn_82C58408(param_1,2);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if ((*(int *)(param_1 + 0x50d4) != 0) && (iVar12 = 0, 0 < *(int *)(param_1 + 0x90))) {
        iVar14 = 0;
        do {
          if (iVar4 != 0) {
            uVar7 = *(uint *)(*(int *)(param_1 + 0x110) + iVar14);
            *(uint *)(*(int *)(param_1 + 0x110) + iVar14) =
                 uVar7 >> 0xf & 0x10000 | uVar7 & 0xfffeffff;
          }
          iVar12 = iVar12 + 1;
          iVar14 = iVar14 + 0x18;
        } while (iVar12 < *(int *)(param_1 + 0x90));
      }
      uVar2 = fn_82C58408(param_1,4);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if ((*(int *)(param_1 + 0x50e4) != 0) && (iVar12 = 0, 0 < *(int *)(param_1 + 0x90))) {
        iVar14 = 0;
        do {
          if (iVar4 != 0) {
            uVar7 = *(uint *)(*(int *)(param_1 + 0x110) + iVar14);
            *(uint *)(*(int *)(param_1 + 0x110) + iVar14) = uVar7 >> 0x1c & 8 | uVar7 & 0xffffffe7;
          }
          iVar12 = iVar12 + 1;
          iVar14 = iVar14 + 0x18;
        } while (iVar12 < *(int *)(param_1 + 0x90));
      }
      if ((*(uint *)(param_1 + 0xbbc) & 2) == 0) {
        iVar12 = 0;
        if (*(uint *)(param_1 + 0xbbc) == 0) {
          if (0 < *(int *)(param_1 + 0x90)) {
            iVar14 = 0;
            do {
              if (iVar4 != 0) {
                *(uint *)(*(int *)(param_1 + 0x110) + iVar14) =
                     *(uint *)(*(int *)(param_1 + 0x110) + iVar14) & 0xfffff7ff;
              }
              iVar12 = iVar12 + 1;
              iVar14 = iVar14 + 0x18;
            } while (iVar12 < *(int *)(param_1 + 0x90));
          }
        }
        else if (0 < *(int *)(param_1 + 0x90)) {
          iVar14 = 0;
          do {
            if (iVar4 != 0) {
              *(uint *)(*(int *)(param_1 + 0x110) + iVar14) =
                   *(uint *)(*(int *)(param_1 + 0x110) + iVar14) | 0x800;
            }
            iVar12 = iVar12 + 1;
            iVar14 = iVar14 + 0x18;
          } while (iVar12 < *(int *)(param_1 + 0x90));
        }
      }
      else {
        puVar15 = *(ulonglong **)(param_1 + 0x54);
        uVar13 = 1;
        lVar10 = 0;
        uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
        uVar8 = uVar6 + 0x10;
        if ((uVar8 & 0xffffffff) == 0) {
          do {
            if ((uVar8 & 0xffffffff) == 0) break;
            uVar13 = uVar13 - uVar8;
            *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
            lVar10 = (ulonglong)
                     (uint)((int)(*puVar15 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar13 & 0x3f)) +
                     lVar10;
            *puVar15 = *puVar15 << (uVar8 & 0x7f);
            if ((longlong)(uVar6 - uVar8) < 0) {
              fn_82C4E5E8(puVar15);
            }
            uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
            uVar8 = uVar6 + 0x10;
          } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
        }
        uVar8 = *puVar15;
        *(int *)(puVar15 + 1) = (int)(uVar6 - uVar13);
        *puVar15 = uVar8 << (uVar13 & 0x7f);
        if ((longlong)(uVar6 - uVar13) < 0) {
          fn_82C4E5E8(puVar15);
        }
        if (((uVar8 >> (0x40 - uVar13 & 0x7f) & 0xffffffff) + lVar10 & 0xffffffff) == 0) {
          iVar12 = 0;
          *(undefined4 *)(param_1 + 0xbbc) = 0;
          if (0 < *(int *)(param_1 + 0x90)) {
            iVar14 = 0;
            do {
              iVar12 = iVar12 + 1;
              puVar9 = (uint *)(*(int *)(param_1 + 0x110) + iVar14);
              iVar14 = iVar14 + 0x18;
              *puVar9 = *puVar9 & 0xfffff7ff;
            } while (iVar12 < *(int *)(param_1 + 0x90));
          }
        }
        else {
          puVar15 = *(ulonglong **)(param_1 + 0x54);
          uVar13 = 1;
          lVar10 = 0;
          uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
          uVar8 = uVar6 + 0x10;
          if ((uVar8 & 0xffffffff) == 0) {
            do {
              if ((uVar8 & 0xffffffff) == 0) break;
              uVar13 = uVar13 - uVar8;
              *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
              lVar10 = (ulonglong)
                       (uint)((int)(*puVar15 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar13 & 0x3f)) +
                       lVar10;
              *puVar15 = *puVar15 << (uVar8 & 0x7f);
              if ((longlong)(uVar6 - uVar8) < 0) {
                fn_82C4E5E8(puVar15);
              }
              uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
              uVar8 = uVar6 + 0x10;
            } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
          }
          uVar8 = *puVar15;
          *(int *)(puVar15 + 1) = (int)(uVar6 - uVar13);
          *puVar15 = uVar8 << (uVar13 & 0x7f);
          if ((longlong)(uVar6 - uVar13) < 0) {
            fn_82C4E5E8(puVar15);
          }
          if (((uVar8 >> (0x40 - uVar13 & 0x7f) & 0xffffffff) + lVar10 & 0xffffffff) == 0) {
            iVar12 = 0;
            *(undefined4 *)(param_1 + 0xbbc) = 1;
            if (0 < *(int *)(param_1 + 0x90)) {
              iVar14 = 0;
              do {
                if (iVar4 != 0) {
                  *(uint *)(*(int *)(param_1 + 0x110) + iVar14) =
                       *(uint *)(*(int *)(param_1 + 0x110) + iVar14) | 0x800;
                }
                iVar12 = iVar12 + 1;
                iVar14 = iVar14 + 0x18;
              } while (iVar12 < *(int *)(param_1 + 0x90));
            }
          }
          else {
            uVar2 = fn_82C58408(param_1,5);
            if ((int)uVar2 != 0) {
              return uVar2;
            }
            if ((*(int *)(param_1 + 0x548c) != 0) && (iVar12 = 0, 0 < *(int *)(param_1 + 0x90))) {
              iVar14 = 0;
              do {
                if (iVar4 != 0) {
                  uVar7 = *(uint *)(*(int *)(param_1 + 0x110) + iVar14);
                  *(uint *)(*(int *)(param_1 + 0x110) + iVar14) =
                       uVar7 >> 0x14 & 0x800 | uVar7 & 0xfffff7ff;
                }
                iVar12 = iVar12 + 1;
                iVar14 = iVar14 + 0x18;
              } while (iVar12 < *(int *)(param_1 + 0x90));
            }
          }
        }
      }
      puVar15 = *(ulonglong **)(param_1 + 0x54);
      uVar13 = 1;
      lVar10 = 0;
      uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
      uVar8 = uVar6 + 0x10;
      if ((uVar8 & 0xffffffff) == 0) {
        do {
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar13 = uVar13 - uVar8;
          *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
          lVar10 = (ulonglong)
                   (uint)((int)(*puVar15 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar13 & 0x3f)) +
                   lVar10;
          *puVar15 = *puVar15 << (uVar8 & 0x7f);
          if ((longlong)(uVar6 - uVar8) < 0) {
            fn_82C4E5E8(puVar15);
          }
          uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
          uVar8 = uVar6 + 0x10;
        } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
      }
      *(int *)(puVar15 + 1) = (int)(uVar6 - uVar13);
      uVar8 = (*puVar15 >> (0x40 - uVar13 & 0x7f) & 0xffffffff) + lVar10;
      *puVar15 = *puVar15 << (uVar13 & 0x7f);
      if ((longlong)(uVar6 - uVar13) < 0) {
        fn_82C4E5E8(puVar15);
      }
      *(int *)(param_1 + 0xb94) = (int)uVar8;
      if ((uVar8 & 0xffffffff) != 0) {
        puVar15 = *(ulonglong **)(param_1 + 0x54);
        uVar13 = 1;
        iVar14 = 0;
        uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
        uVar8 = uVar6 + 0x10;
        iVar12 = 0;
        if ((uVar8 & 0xffffffff) == 0) {
          do {
            iVar14 = iVar12;
            if ((uVar8 & 0xffffffff) == 0) break;
            uVar13 = uVar13 - uVar8;
            *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
            iVar14 = ((int)(*puVar15 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar13 & 0x3f)) + iVar14;
            *puVar15 = *puVar15 << (uVar8 & 0x7f);
            if ((longlong)(uVar6 - uVar8) < 0) {
              fn_82C4E5E8(puVar15);
            }
            uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
            uVar8 = uVar6 + 0x10;
            iVar12 = iVar14;
          } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
        }
        uVar8 = *puVar15;
        *(int *)(puVar15 + 1) = (int)(uVar6 - uVar13);
        *puVar15 = uVar8 << (uVar13 & 0x7f);
        if ((longlong)(uVar6 - uVar13) < 0) {
          fn_82C4E5E8(puVar15);
        }
        *(int *)(param_1 + 0xb94) =
             *(int *)(param_1 + 0xb94) + (int)(uVar8 >> (0x40 - uVar13 & 0x7f)) + iVar14;
      }
      puVar15 = *(ulonglong **)(param_1 + 0x54);
      uVar13 = 1;
      lVar10 = 0;
      uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
      uVar8 = uVar6 + 0x10;
      if ((uVar8 & 0xffffffff) == 0) {
        do {
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar13 = uVar13 - uVar8;
          *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
          lVar10 = (ulonglong)
                   (uint)((int)(*puVar15 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar13 & 0x3f)) +
                   lVar10;
          *puVar15 = *puVar15 << (uVar8 & 0x7f);
          if ((longlong)(uVar6 - uVar8) < 0) {
            fn_82C4E5E8(puVar15);
          }
          uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
          uVar8 = uVar6 + 0x10;
        } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
      }
      *(int *)(puVar15 + 1) = (int)(uVar6 - uVar13);
      uVar8 = (*puVar15 >> (0x40 - uVar13 & 0x7f) & 0xffffffff) + lVar10;
      *puVar15 = *puVar15 << (uVar13 & 0x7f);
      if ((longlong)(uVar6 - uVar13) < 0) {
        fn_82C4E5E8(puVar15);
      }
      *(int *)(param_1 + 0xba0) = (int)uVar8;
      if ((uVar8 & 0xffffffff) != 0) {
        puVar15 = *(ulonglong **)(param_1 + 0x54);
        uVar13 = 1;
        iVar14 = 0;
        uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
        uVar8 = uVar6 + 0x10;
        iVar12 = 0;
        if ((uVar8 & 0xffffffff) == 0) {
          do {
            iVar14 = iVar12;
            if ((uVar8 & 0xffffffff) == 0) break;
            uVar13 = uVar13 - uVar8;
            *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
            iVar14 = ((int)(*puVar15 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar13 & 0x3f)) + iVar14;
            *puVar15 = *puVar15 << (uVar8 & 0x7f);
            if ((longlong)(uVar6 - uVar8) < 0) {
              fn_82C4E5E8(puVar15);
            }
            uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
            uVar8 = uVar6 + 0x10;
            iVar12 = iVar14;
          } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
        }
        uVar8 = *puVar15;
        *(int *)(puVar15 + 1) = (int)(uVar6 - uVar13);
        *puVar15 = uVar8 << (uVar13 & 0x7f);
        if ((longlong)(uVar6 - uVar13) < 0) {
          fn_82C4E5E8(puVar15);
        }
        *(int *)(param_1 + 0xba0) =
             *(int *)(param_1 + 0xba0) + (int)(uVar8 >> (0x40 - uVar13 & 0x7f)) + iVar14;
      }
      puVar15 = *(ulonglong **)(param_1 + 0x54);
      uVar13 = 1;
      iVar12 = 0;
      *(undefined4 *)(param_1 + 0xba4) = *(undefined4 *)(param_1 + 0xba0);
      *(undefined4 *)(param_1 + 0xba8) = *(undefined4 *)(param_1 + 0xba0);
      uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
      uVar8 = uVar6 + 0x10;
      if (iVar4 == 0) {
        if ((uVar8 & 0xffffffff) == 0) {
          do {
            if ((uVar8 & 0xffffffff) == 0) break;
            uVar5 = *puVar15;
            uVar13 = uVar13 - uVar8;
            *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
            *puVar15 = uVar5 << (uVar8 & 0x7f);
            if ((longlong)(uVar6 - uVar8) < 0) {
              fn_82C4E5E8(puVar15,uVar5 >> (0x40 - uVar8 & 0x7f) & 0xffffffff);
            }
            uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
            uVar8 = uVar6 + 0x10;
          } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
        }
        *puVar15 = *puVar15 << (uVar13 & 0x7f);
        *(int *)(puVar15 + 1) = (int)(uVar6 - uVar13);
        if ((longlong)(uVar6 - uVar13) < 0) {
          fn_82C4E5E8(puVar15);
        }
      }
      else {
        iVar14 = 0;
        if ((uVar8 & 0xffffffff) == 0) {
          do {
            iVar12 = iVar14;
            if ((uVar8 & 0xffffffff) == 0) break;
            uVar13 = uVar13 - uVar8;
            *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
            iVar12 = ((int)(*puVar15 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar13 & 0x3f)) + iVar12;
            *puVar15 = *puVar15 << (uVar8 & 0x7f);
            if ((longlong)(uVar6 - uVar8) < 0) {
              fn_82C4E5E8(puVar15);
            }
            uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
            uVar8 = uVar6 + 0x10;
            iVar14 = iVar12;
          } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
        }
        uVar8 = *puVar15;
        *(int *)(puVar15 + 1) = (int)(uVar6 - uVar13);
        *puVar15 = uVar8 << (uVar13 & 0x7f);
        if ((longlong)(uVar6 - uVar13) < 0) {
          fn_82C4E5E8(puVar15);
        }
        *(int *)(param_1 + 0x82c) = (int)(uVar8 >> (0x40 - uVar13 & 0x7f)) + iVar12;
      }
      if (*(int *)(param_1 + 0xfc8) == 0) {
        fn_82C9D918(param_1);
      }
      else {
        fn_82C58FB8(param_1,0);
      }
      if (iVar4 != 0) {
        *(undefined4 *)(param_1 + 0x56d8) = 0;
      }
    }
    else {
      lVar10 = 0;
      if (*(int *)(param_1 + 0x5440) != 0) {
        puVar15 = *(ulonglong **)(param_1 + 0x54);
        uVar13 = 1;
        lVar10 = 0;
        uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
        uVar8 = uVar6 + 0x10;
        if ((uVar8 & 0xffffffff) == 0) {
          do {
            if ((uVar8 & 0xffffffff) == 0) break;
            uVar13 = uVar13 - uVar8;
            *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
            lVar10 = (ulonglong)
                     (uint)((int)(*puVar15 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar13 & 0x3f)) +
                     lVar10;
            *puVar15 = *puVar15 << (uVar8 & 0x7f);
            if ((longlong)(uVar6 - uVar8) < 0) {
              fn_82C4E5E8(puVar15);
            }
            uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
            uVar8 = uVar6 + 0x10;
          } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
        }
        *(int *)(puVar15 + 1) = (int)(uVar6 - uVar13);
        lVar10 = (*puVar15 >> (0x40 - uVar13 & 0x7f) & 0xffffffff) + lVar10;
        *puVar15 = *puVar15 << (uVar13 & 0x7f);
        if ((longlong)(uVar6 - uVar13) < 0) {
          fn_82C4E5E8(puVar15);
        }
        if ((int)lVar10 != 0) {
          puVar15 = *(ulonglong **)(param_1 + 0x54);
          uVar13 = 1;
          lVar11 = 0;
          uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
          uVar8 = uVar6 + 0x10;
          if ((uVar8 & 0xffffffff) == 0) {
            do {
              if ((uVar8 & 0xffffffff) == 0) break;
              uVar13 = uVar13 - uVar8;
              *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
              lVar11 = (ulonglong)
                       (uint)((int)(*puVar15 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar13 & 0x3f)) +
                       lVar11;
              *puVar15 = *puVar15 << (uVar8 & 0x7f);
              if ((longlong)(uVar6 - uVar8) < 0) {
                fn_82C4E5E8(puVar15);
              }
              uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
              uVar8 = uVar6 + 0x10;
            } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
          }
          uVar8 = *puVar15;
          *(int *)(puVar15 + 1) = (int)(uVar6 - uVar13);
          *puVar15 = uVar8 << (uVar13 & 0x7f);
          if ((longlong)(uVar6 - uVar13) < 0) {
            fn_82C4E5E8(puVar15);
          }
          lVar10 = (uVar8 >> (0x40 - uVar13 & 0x7f) & 0xffffffff) + lVar11 + lVar10;
        }
        if ((int)lVar10 == 2) {
          puVar15 = *(ulonglong **)(param_1 + 0x54);
          uVar13 = 1;
          lVar10 = 0;
          uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
          uVar8 = uVar6 + 0x10;
          if ((uVar8 & 0xffffffff) == 0) {
            do {
              if ((uVar8 & 0xffffffff) == 0) break;
              uVar13 = uVar13 - uVar8;
              *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
              lVar10 = (ulonglong)
                       (uint)((int)(*puVar15 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar13 & 0x3f)) +
                       lVar10;
              *puVar15 = *puVar15 << (uVar8 & 0x7f);
              if ((longlong)(uVar6 - uVar8) < 0) {
                fn_82C4E5E8(puVar15);
              }
              uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
              uVar8 = uVar6 + 0x10;
            } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
          }
          uVar8 = *puVar15;
          *(int *)(puVar15 + 1) = (int)(uVar6 - uVar13);
          *puVar15 = uVar8 << (uVar13 & 0x7f);
          if ((longlong)(uVar6 - uVar13) < 0) {
            fn_82C4E5E8(puVar15);
          }
          lVar10 = (uVar8 >> (0x40 - uVar13 & 0x7f) & 0xffffffff) + lVar10 + 2;
        }
      }
      fn_82C531B8(param_1,lVar10);
      if (*(int *)(param_1 + 0x120) == 1) {
        *(int *)(param_1 + 0x56d8) = *(int *)(param_1 + 0x198);
      }
      else if (*(int *)(param_1 + 0x198) < *(int *)(param_1 + 0x56d8)) {
        return 0;
      }
      if (*(int *)(param_1 + 0x549c) != 0) {
        puVar15 = *(ulonglong **)(param_1 + 0x54);
        uVar13 = 1;
        iVar14 = 0;
        uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
        uVar8 = uVar6 + 0x10;
        iVar12 = 0;
        if ((uVar8 & 0xffffffff) == 0) {
          do {
            iVar14 = iVar12;
            if ((uVar8 & 0xffffffff) == 0) break;
            uVar13 = uVar13 - uVar8;
            *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
            iVar14 = ((int)(*puVar15 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar13 & 0x3f)) + iVar14;
            *puVar15 = *puVar15 << (uVar8 & 0x7f);
            if ((longlong)(uVar6 - uVar8) < 0) {
              fn_82C4E5E8(puVar15);
            }
            uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
            uVar8 = uVar6 + 0x10;
            iVar12 = iVar14;
          } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
        }
        *(int *)(puVar15 + 1) = (int)(uVar6 - uVar13);
        iVar14 = (int)(*puVar15 >> (0x40 - uVar13 & 0x7f)) + iVar14;
        *puVar15 = *puVar15 << (uVar13 & 0x7f);
        if ((longlong)(uVar6 - uVar13) < 0) {
          fn_82C4E5E8(puVar15);
        }
        *(int *)(param_1 + 0x54a0) = iVar14;
        if (iVar14 != 0) {
          puVar15 = *(ulonglong **)(param_1 + 0x54);
          uVar13 = 1;
          iVar14 = 0;
          uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
          uVar8 = uVar6 + 0x10;
          iVar12 = 0;
          if ((uVar8 & 0xffffffff) == 0) {
            do {
              iVar14 = iVar12;
              if ((uVar8 & 0xffffffff) == 0) break;
              uVar13 = uVar13 - uVar8;
              *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
              iVar14 = ((int)(*puVar15 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar13 & 0x3f)) + iVar14;
              *puVar15 = *puVar15 << (uVar8 & 0x7f);
              if ((longlong)(uVar6 - uVar8) < 0) {
                fn_82C4E5E8(puVar15);
              }
              uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
              uVar8 = uVar6 + 0x10;
              iVar12 = iVar14;
            } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
          }
          uVar8 = *puVar15;
          *(int *)(puVar15 + 1) = (int)(uVar6 - uVar13);
          *puVar15 = uVar8 << (uVar13 & 0x7f);
          if ((longlong)(uVar6 - uVar13) < 0) {
            fn_82C4E5E8(puVar15);
          }
          *(int *)(param_1 + 0x54a0) =
               *(int *)(param_1 + 0x54a0) + (int)(uVar8 >> (0x40 - uVar13 & 0x7f)) + iVar14;
        }
        if (*(int *)(param_1 + 0x54a0) == 2) {
          puVar15 = *(ulonglong **)(param_1 + 0x54);
          uVar13 = 1;
          iVar14 = 0;
          uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
          uVar8 = uVar6 + 0x10;
          iVar12 = 0;
          if ((uVar8 & 0xffffffff) == 0) {
            do {
              iVar14 = iVar12;
              if ((uVar8 & 0xffffffff) == 0) break;
              uVar13 = uVar13 - uVar8;
              *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
              iVar14 = ((int)(*puVar15 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar13 & 0x3f)) + iVar14;
              *puVar15 = *puVar15 << (uVar8 & 0x7f);
              if ((longlong)(uVar6 - uVar8) < 0) {
                fn_82C4E5E8(puVar15);
              }
              uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
              uVar8 = uVar6 + 0x10;
              iVar12 = iVar14;
            } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
          }
          uVar8 = *puVar15;
          *(int *)(puVar15 + 1) = (int)(uVar6 - uVar13);
          *puVar15 = uVar8 << (uVar13 & 0x7f);
          if ((longlong)(uVar6 - uVar13) < 0) {
            fn_82C4E5E8(puVar15);
          }
          *(int *)(param_1 + 0x54a0) =
               *(int *)(param_1 + 0x54a0) + (int)(uVar8 >> (0x40 - uVar13 & 0x7f)) + iVar14;
        }
        *(uint *)(param_1 + 0x54a4) = *(uint *)(param_1 + 0x54a0) & 1;
        *(uint *)(param_1 + 0x54a8) = (int)*(uint *)(param_1 + 0x54a0) >> 1 & 1;
      }
      if (*(int *)(param_1 + 0x120) == 2) {
        *(undefined4 *)(param_1 + 0xfb0) = 1;
      }
      else {
        puVar15 = *(ulonglong **)(param_1 + 0x54);
        uVar13 = 1;
        iVar14 = 0;
        uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
        uVar8 = uVar6 + 0x10;
        iVar12 = 0;
        if ((uVar8 & 0xffffffff) == 0) {
          do {
            iVar14 = iVar12;
            if ((uVar8 & 0xffffffff) == 0) break;
            uVar13 = uVar13 - uVar8;
            *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
            iVar14 = ((int)(*puVar15 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar13 & 0x3f)) + iVar14;
            *puVar15 = *puVar15 << (uVar8 & 0x7f);
            if ((longlong)(uVar6 - uVar8) < 0) {
              fn_82C4E5E8(puVar15);
            }
            uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
            uVar8 = uVar6 + 0x10;
            iVar12 = iVar14;
          } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
        }
        uVar8 = *puVar15;
        *(int *)(puVar15 + 1) = (int)(uVar6 - uVar13);
        *puVar15 = uVar8 << (uVar13 & 0x7f);
        if ((longlong)(uVar6 - uVar13) < 0) {
          fn_82C4E5E8(puVar15);
        }
        *(uint *)(param_1 + 0xfb0) =
             (uint)LZCOUNT((int)(uVar8 >> (0x40 - uVar13 & 0x7f)) + iVar14) >> 5;
      }
      puVar15 = *(ulonglong **)(param_1 + 0x54);
      uVar13 = 1;
      *(undefined4 *)(param_1 + 0xfb4) = 0;
      lVar10 = 0;
      uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
      uVar8 = uVar6 + 0x10;
      if ((uVar8 & 0xffffffff) == 0) {
        do {
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar13 = uVar13 - uVar8;
          *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
          lVar10 = (ulonglong)
                   (uint)((int)(*puVar15 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar13 & 0x3f)) +
                   lVar10;
          *puVar15 = *puVar15 << (uVar8 & 0x7f);
          if ((longlong)(uVar6 - uVar8) < 0) {
            fn_82C4E5E8(puVar15);
          }
          uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
          uVar8 = uVar6 + 0x10;
        } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
      }
      uVar8 = *puVar15;
      *(int *)(puVar15 + 1) = (int)(uVar6 - uVar13);
      *puVar15 = uVar8 << (uVar13 & 0x7f);
      if ((longlong)(uVar6 - uVar13) < 0) {
        fn_82C4E5E8(puVar15);
      }
      if ((((uVar8 >> (0x40 - uVar13 & 0x7f) & 0xffffffff) + lVar10 & 0xffffffff) != 0) &&
         (*(int *)(param_1 + 0x120) != 2)) {
        *(undefined4 *)(param_1 + 0xfb4) = 1;
      }
      if (*(int *)(param_1 + 0xfb4) != 0) {
        puVar15 = *(ulonglong **)(param_1 + 0x54);
        uVar13 = 6;
        iVar12 = 0;
        uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
        uVar8 = uVar6 + 0x10;
        if (iVar4 == 0) {
          if ((uVar8 & 0xffffffff) < 6) {
            do {
              if ((uVar8 & 0xffffffff) == 0) break;
              uVar5 = *puVar15;
              uVar13 = uVar13 - uVar8;
              *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
              *puVar15 = uVar5 << (uVar8 & 0x7f);
              if ((longlong)(uVar6 - uVar8) < 0) {
                fn_82C4E5E8(puVar15,uVar5 >> (0x40 - uVar8 & 0x7f) & 0xffffffff);
              }
              uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
              uVar8 = uVar6 + 0x10;
            } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
          }
          uVar5 = *puVar15;
          uVar8 = uVar5 << (uVar13 & 0x7f);
          *(int *)(puVar15 + 1) = (int)(uVar6 - uVar13);
          *puVar15 = uVar8;
          if ((longlong)(uVar6 - uVar13) < 0) {
            fn_82C4E5E8(puVar15,uVar8,uVar5 >> (0x40 - uVar13 & 0x7f));
          }
          puVar15 = *(ulonglong **)(param_1 + 0x54);
          uVar13 = 6;
          uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
          uVar8 = uVar6 + 0x10;
          if ((uVar8 & 0xffffffff) < 6) {
            do {
              if ((uVar8 & 0xffffffff) == 0) break;
              uVar5 = *puVar15;
              uVar13 = uVar13 - uVar8;
              *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
              *puVar15 = uVar5 << (uVar8 & 0x7f);
              if ((longlong)(uVar6 - uVar8) < 0) {
                fn_82C4E5E8(puVar15,uVar5 >> (0x40 - uVar8 & 0x7f) & 0xffffffff);
              }
              uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
              uVar8 = uVar6 + 0x10;
            } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
          }
          *puVar15 = *puVar15 << (uVar13 & 0x7f);
          *(int *)(puVar15 + 1) = (int)(uVar6 - uVar13);
          if ((longlong)(uVar6 - uVar13) < 0) {
            fn_82C4E5E8(puVar15);
          }
        }
        else {
          iVar14 = 0;
          if ((uVar8 & 0xffffffff) < 6) {
            do {
              iVar12 = iVar14;
              if ((uVar8 & 0xffffffff) == 0) break;
              uVar13 = uVar13 - uVar8;
              *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
              iVar12 = ((int)(*puVar15 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar13 & 0x3f)) + iVar12;
              *puVar15 = *puVar15 << (uVar8 & 0x7f);
              if ((longlong)(uVar6 - uVar8) < 0) {
                fn_82C4E5E8(puVar15);
              }
              uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
              uVar8 = uVar6 + 0x10;
              iVar14 = iVar12;
            } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
          }
          uVar8 = *puVar15;
          *(int *)(puVar15 + 1) = (int)(uVar6 - uVar13);
          *puVar15 = uVar8 << (uVar13 & 0x7f);
          if ((longlong)(uVar6 - uVar13) < 0) {
            fn_82C4E5E8(puVar15);
          }
          *(int *)(param_1 + 0xfbc) = (int)(uVar8 >> (0x40 - uVar13 & 0x7f)) + iVar12;
          uVar13 = 6;
          puVar15 = *(ulonglong **)(param_1 + 0x54);
          iVar14 = 0;
          uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
          uVar8 = uVar6 + 0x10;
          iVar12 = 0;
          if ((uVar8 & 0xffffffff) < 6) {
            do {
              iVar14 = iVar12;
              if ((uVar8 & 0xffffffff) == 0) break;
              uVar13 = uVar13 - uVar8;
              *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
              iVar14 = ((int)(*puVar15 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar13 & 0x3f)) + iVar14;
              *puVar15 = *puVar15 << (uVar8 & 0x7f);
              if ((longlong)(uVar6 - uVar8) < 0) {
                fn_82C4E5E8(puVar15);
              }
              uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
              uVar8 = uVar6 + 0x10;
              iVar12 = iVar14;
            } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
          }
          uVar8 = *puVar15;
          *(int *)(puVar15 + 1) = (int)(uVar6 - uVar13);
          *puVar15 = uVar8 << (uVar13 & 0x7f);
          if ((longlong)(uVar6 - uVar13) < 0) {
            fn_82C4E5E8(puVar15);
          }
          *(int *)(param_1 + 0xfc0) = (int)(uVar8 >> (0x40 - uVar13 & 0x7f)) + iVar14;
        }
      }
      if (*(int *)(param_1 + 0x120) == 2) {
        uVar2 = fn_82C58408(param_1,3);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        if (*(int *)(param_1 + 0x3a14) != 0) {
          iVar12 = 0;
          puVar9 = *(uint **)(param_1 + 0x110);
          if (0 < *(int *)(param_1 + 0x90)) {
            do {
              uVar7 = *puVar9;
              if ((uVar7 & 0x80000000) == 0) {
                uVar7 = uVar7 & 0xffffff1f;
              }
              else {
                uVar7 = uVar7 & 0xffffff1f | 0x20;
              }
              iVar12 = iVar12 + 1;
              *puVar9 = uVar7;
              puVar9 = puVar9 + 6;
            } while (iVar12 < *(int *)(param_1 + 0x90));
          }
        }
      }
      uVar2 = fn_82C58408(param_1,0);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      *(undefined4 *)(param_1 + 0x1c4) = 1;
      uVar13 = 2;
      puVar15 = *(ulonglong **)(param_1 + 0x54);
      lVar10 = 0;
      uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
      uVar8 = uVar6 + 0x10;
      if ((uVar8 & 0xffffffff) < 2) {
        do {
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar13 = uVar13 - uVar8;
          *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
          lVar10 = (ulonglong)
                   (uint)((int)(*puVar15 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar13 & 0x3f)) +
                   lVar10;
          *puVar15 = *puVar15 << (uVar8 & 0x7f);
          if ((longlong)(uVar6 - uVar8) < 0) {
            fn_82C4E5E8(puVar15);
          }
          uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
          uVar8 = uVar6 + 0x10;
        } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
      }
      *(int *)(puVar15 + 1) = (int)(uVar6 - uVar13);
      lVar10 = (*puVar15 >> (0x40 - uVar13 & 0x7f) & 0xffffffff) + lVar10;
      *puVar15 = *puVar15 << (uVar13 & 0x7f);
      if ((longlong)(uVar6 - uVar13) < 0) {
        fn_82C4E5E8(puVar15);
      }
      uVar6 = lVar10 + 0x1449;
      if (*(int *)(param_1 + 0xfb0) != 0) {
        uVar6 = lVar10 + 0x1459;
      }
      puVar15 = *(ulonglong **)(param_1 + 0x54);
      uVar13 = 2;
      lVar10 = 0;
      *(undefined4 *)(param_1 + 0x5120) =
           *(undefined4 *)((int)((uVar6 & 0xffffffff) << 2) + param_1);
      uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
      uVar8 = uVar6 + 0x10;
      if ((uVar8 & 0xffffffff) < 2) {
        do {
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar13 = uVar13 - uVar8;
          *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
          lVar10 = (ulonglong)
                   (uint)((int)(*puVar15 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar13 & 0x3f)) +
                   lVar10;
          *puVar15 = *puVar15 << (uVar8 & 0x7f);
          if ((longlong)(uVar6 - uVar8) < 0) {
            fn_82C4E5E8(puVar15);
          }
          uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
          uVar8 = uVar6 + 0x10;
        } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
      }
      uVar8 = *puVar15;
      *(int *)(puVar15 + 1) = (int)(uVar6 - uVar13);
      *puVar15 = uVar8 << (uVar13 & 0x7f);
      if ((longlong)(uVar6 - uVar13) < 0) {
        fn_82C4E5E8(puVar15);
      }
      puVar15 = *(ulonglong **)(param_1 + 0x54);
      uVar5 = 3;
      lVar11 = 0;
      *(undefined4 *)(param_1 + 0x94c) =
           *(undefined4 *)
            ((int)(((uVar8 >> (0x40 - uVar13 & 0x7f) & 0xffffffff) + lVar10 + 600 & 0xffffffff) << 2
                  ) + param_1);
      uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
      uVar8 = uVar6 + 0x10;
      if ((uVar8 & 0xffffffff) < 3) {
        do {
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar5 = uVar5 - uVar8;
          *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
          lVar11 = (ulonglong)
                   (uint)((int)(*puVar15 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar5 & 0x3f)) + lVar11
          ;
          *puVar15 = *puVar15 << (uVar8 & 0x7f);
          if ((longlong)(uVar6 - uVar8) < 0) {
            fn_82C4E5E8(puVar15);
          }
          uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
          uVar8 = uVar6 + 0x10;
        } while ((uVar8 & 0xffffffff) < (uVar5 & 0xffffffff));
      }
      uVar8 = *puVar15;
      *(int *)(puVar15 + 1) = (int)(uVar6 - uVar5);
      *puVar15 = uVar8 << (uVar5 & 0x7f);
      if ((longlong)(uVar6 - uVar5) < 0) {
        fn_82C4E5E8(puVar15);
      }
      puVar15 = *(ulonglong **)(param_1 + 0x54);
      uVar13 = 2;
      lVar10 = 0;
      uVar3 = *(undefined4 *)
               ((int)(((uVar8 >> (0x40 - uVar5 & 0x7f) & 0xffffffff) + lVar11 + 0x1536 & 0xffffffff)
                     << 2) + param_1);
      *(undefined4 *)(param_1 + 0x54d0) = uVar3;
      *(undefined4 *)(param_1 + 0x54d4) = uVar3;
      uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
      uVar8 = uVar6 + 0x10;
      if ((uVar8 & 0xffffffff) < 2) {
        do {
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar13 = uVar13 - uVar8;
          *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
          lVar10 = (ulonglong)
                   (uint)((int)(*puVar15 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar13 & 0x3f)) +
                   lVar10;
          *puVar15 = *puVar15 << (uVar8 & 0x7f);
          if ((longlong)(uVar6 - uVar8) < 0) {
            fn_82C4E5E8(puVar15);
          }
          uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
          uVar8 = uVar6 + 0x10;
        } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
      }
      uVar8 = *puVar15;
      *(int *)(puVar15 + 1) = (int)(uVar6 - uVar13);
      *puVar15 = uVar8 << (uVar13 & 0x7f);
      if ((longlong)(uVar6 - uVar13) < 0) {
        fn_82C4E5E8(puVar15);
      }
      *(undefined4 *)(param_1 + 0x51fc) =
           *(undefined4 *)
            ((int)(((uVar8 >> (0x40 - uVar13 & 0x7f) & 0xffffffff) + lVar10 + 0x1480 & 0xffffffff)
                  << 2) + param_1);
      if ((*(int *)(param_1 + 0xfb0) == 0) || (*(int *)(param_1 + 0x120) == 2)) {
        puVar15 = *(ulonglong **)(param_1 + 0x54);
        uVar13 = 2;
        lVar10 = 0;
        uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
        uVar8 = uVar6 + 0x10;
        if ((uVar8 & 0xffffffff) < 2) {
          do {
            if ((uVar8 & 0xffffffff) == 0) break;
            uVar13 = uVar13 - uVar8;
            *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
            lVar10 = (ulonglong)
                     (uint)((int)(*puVar15 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar13 & 0x3f)) +
                     lVar10;
            *puVar15 = *puVar15 << (uVar8 & 0x7f);
            if ((longlong)(uVar6 - uVar8) < 0) {
              fn_82C4E5E8(puVar15);
            }
            uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
            uVar8 = uVar6 + 0x10;
          } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
        }
        uVar8 = *puVar15;
        *(int *)(puVar15 + 1) = (int)(uVar6 - uVar13);
        *puVar15 = uVar8 << (uVar13 & 0x7f);
        if ((longlong)(uVar6 - uVar13) < 0) {
          fn_82C4E5E8(puVar15);
        }
        *(undefined4 *)(param_1 + 0x51e8) =
             *(undefined4 *)
              ((int)(((uVar8 >> (0x40 - uVar13 & 0x7f) & 0xffffffff) + lVar10 + 0x147b & 0xffffffff)
                    << 2) + param_1);
      }
      if (*(int *)(param_1 + 0xfc8) != 0) {
        fn_82C58FB8(param_1,1);
      }
      if (*(int *)(param_1 + 0x1b8) == 0) {
        *(undefined4 *)(param_1 + 0x14c) = 0;
      }
      else {
        puVar15 = *(ulonglong **)(param_1 + 0x54);
        uVar13 = 1;
        lVar10 = 0;
        uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
        uVar8 = uVar6 + 0x10;
        if ((uVar8 & 0xffffffff) == 0) {
          do {
            if ((uVar8 & 0xffffffff) == 0) break;
            uVar13 = uVar13 - uVar8;
            *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
            lVar10 = (ulonglong)
                     (uint)((int)(*puVar15 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar13 & 0x3f)) +
                     lVar10;
            *puVar15 = *puVar15 << (uVar8 & 0x7f);
            if ((longlong)(uVar6 - uVar8) < 0) {
              fn_82C4E5E8(puVar15);
            }
            uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
            uVar8 = uVar6 + 0x10;
          } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
        }
        uVar8 = *puVar15;
        *(int *)(puVar15 + 1) = (int)(uVar6 - uVar13);
        *puVar15 = uVar8 << (uVar13 & 0x7f);
        if ((longlong)(uVar6 - uVar13) < 0) {
          fn_82C4E5E8(puVar15);
        }
        if (((uVar8 >> (0x40 - uVar13 & 0x7f) & 0xffffffff) + lVar10 & 0xffffffff) == 1) {
          puVar15 = *(ulonglong **)(param_1 + 0x54);
          uVar13 = 2;
          *(undefined4 *)(param_1 + 0x14c) = 0;
          lVar10 = 0;
          uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
          uVar8 = uVar6 + 0x10;
          if ((uVar8 & 0xffffffff) < 2) {
            do {
              if ((uVar8 & 0xffffffff) == 0) break;
              uVar13 = uVar13 - uVar8;
              *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
              lVar10 = (ulonglong)
                       (uint)((int)(*puVar15 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar13 & 0x3f)) +
                       lVar10;
              *puVar15 = *puVar15 << (uVar8 & 0x7f);
              if ((longlong)(uVar6 - uVar8) < 0) {
                fn_82C4E5E8(puVar15);
              }
              uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
              uVar8 = uVar6 + 0x10;
            } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
          }
          uVar8 = *puVar15;
          *(int *)(puVar15 + 1) = (int)(uVar6 - uVar13);
          *puVar15 = uVar8 << (uVar13 & 0x7f);
          if ((longlong)(uVar6 - uVar13) < 0) {
            fn_82C4E5E8(puVar15);
          }
          *(undefined4 *)(param_1 + 0x154) =
               *(undefined4 *)
                (&lbl_820FD798 +
                (int)(((uVar8 >> (0x40 - uVar13 & 0x7f) & 0xffffffff) + lVar10 & 0xffffffff) << 2));
        }
        else {
          *(undefined4 *)(param_1 + 0x14c) = 1;
        }
      }
      puVar15 = *(ulonglong **)(param_1 + 0x54);
      if (*(int *)((int)puVar15 + 0x14) != 0) {
        return 1;
      }
      uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
      uVar13 = 1;
      lVar10 = 0;
      uVar8 = uVar6 + 0x10;
      if ((uVar8 & 0xffffffff) == 0) {
        do {
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar13 = uVar13 - uVar8;
          *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
          lVar10 = (ulonglong)
                   (uint)((int)(*puVar15 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar13 & 0x3f)) +
                   lVar10;
          *puVar15 = *puVar15 << (uVar8 & 0x7f);
          if ((longlong)(uVar6 - uVar8) < 0) {
            fn_82C4E5E8(puVar15);
          }
          uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
          uVar8 = uVar6 + 0x10;
        } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
      }
      *(int *)(puVar15 + 1) = (int)(uVar6 - uVar13);
      uVar8 = (*puVar15 >> (0x40 - uVar13 & 0x7f) & 0xffffffff) + lVar10;
      *puVar15 = *puVar15 << (uVar13 & 0x7f);
      if ((longlong)(uVar6 - uVar13) < 0) {
        fn_82C4E5E8(puVar15);
      }
      *(int *)(param_1 + 0xb94) = (int)uVar8;
      if ((uVar8 & 0xffffffff) != 0) {
        puVar15 = *(ulonglong **)(param_1 + 0x54);
        uVar13 = 1;
        iVar14 = 0;
        uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
        uVar8 = uVar6 + 0x10;
        iVar12 = 0;
        if ((uVar8 & 0xffffffff) == 0) {
          do {
            iVar14 = iVar12;
            if ((uVar8 & 0xffffffff) == 0) break;
            uVar13 = uVar13 - uVar8;
            *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
            iVar14 = ((int)(*puVar15 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar13 & 0x3f)) + iVar14;
            *puVar15 = *puVar15 << (uVar8 & 0x7f);
            if ((longlong)(uVar6 - uVar8) < 0) {
              fn_82C4E5E8(puVar15);
            }
            uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
            uVar8 = uVar6 + 0x10;
            iVar12 = iVar14;
          } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
        }
        uVar8 = *puVar15;
        *(int *)(puVar15 + 1) = (int)(uVar6 - uVar13);
        *puVar15 = uVar8 << (uVar13 & 0x7f);
        if ((longlong)(uVar6 - uVar13) < 0) {
          fn_82C4E5E8(puVar15);
        }
        *(int *)(param_1 + 0xb94) =
             *(int *)(param_1 + 0xb94) + (int)(uVar8 >> (0x40 - uVar13 & 0x7f)) + iVar14;
      }
      uVar3 = *(undefined4 *)(param_1 + 0xb94);
      uVar13 = 1;
      puVar15 = *(ulonglong **)(param_1 + 0x54);
      iVar14 = 0;
      *(undefined4 *)(param_1 + 0xb9c) = uVar3;
      *(undefined4 *)(param_1 + 0xb98) = uVar3;
      *(undefined4 *)(param_1 + 0xba8) = uVar3;
      *(undefined4 *)(param_1 + 0xba0) = uVar3;
      *(undefined4 *)(param_1 + 0xba4) = uVar3;
      uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
      uVar8 = uVar6 + 0x10;
      iVar12 = 0;
      if ((uVar8 & 0xffffffff) == 0) {
        do {
          iVar14 = iVar12;
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar13 = uVar13 - uVar8;
          *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
          iVar14 = ((int)(*puVar15 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar13 & 0x3f)) + iVar14;
          *puVar15 = *puVar15 << (uVar8 & 0x7f);
          if ((longlong)(uVar6 - uVar8) < 0) {
            fn_82C4E5E8(puVar15);
          }
          uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
          uVar8 = uVar6 + 0x10;
          iVar12 = iVar14;
        } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
      }
      uVar8 = *puVar15;
      *(int *)(puVar15 + 1) = (int)(uVar6 - uVar13);
      *puVar15 = uVar8 << (uVar13 & 0x7f);
      if ((longlong)(uVar6 - uVar13) < 0) {
        fn_82C4E5E8(puVar15);
      }
      *(int *)(param_1 + 0x82c) = (int)(uVar8 >> (0x40 - uVar13 & 0x7f)) + iVar14;
    }
    if (*(int *)(*(int *)(param_1 + 0x54) + 0x14) != 0) {
      return 1;
    }
    goto LAB_82c85644;
  }
  if (*(int *)(param_1 + 0x5420) != 0) {
    if ((*(int *)(param_1 + 0x5568) == 0) || (*(int *)(param_1 + 0x56ec) != 0)) {
      puVar15 = *(ulonglong **)(param_1 + 0x54);
      uVar13 = 2;
      iVar12 = 0;
      uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
      uVar8 = uVar6 + 0x10;
      if (iVar4 == 0) {
        if ((uVar8 & 0xffffffff) < 2) {
          do {
            if ((uVar8 & 0xffffffff) == 0) break;
            uVar5 = *puVar15;
            uVar13 = uVar13 - uVar8;
            *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
            *puVar15 = uVar5 << (uVar8 & 0x7f);
            if ((longlong)(uVar6 - uVar8) < 0) {
              fn_82C4E5E8(puVar15,uVar5 >> (0x40 - uVar8 & 0x7f) & 0xffffffff);
            }
            uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
            uVar8 = uVar6 + 0x10;
          } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
        }
        goto LAB_82c855dc;
      }
      iVar14 = 0;
      if ((uVar8 & 0xffffffff) < 2) {
        do {
          iVar12 = iVar14;
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar13 = uVar13 - uVar8;
          *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
          iVar12 = ((int)(*puVar15 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar13 & 0x3f)) + iVar12;
          *puVar15 = *puVar15 << (uVar8 & 0x7f);
          if ((longlong)(uVar6 - uVar8) < 0) {
            fn_82C4E5E8(puVar15);
          }
          uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
          uVar8 = uVar6 + 0x10;
          iVar14 = iVar12;
        } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
      }
      uVar8 = *puVar15;
      *(int *)(puVar15 + 1) = (int)(uVar6 - uVar13);
      *puVar15 = uVar8 << (uVar13 & 0x7f);
      if ((longlong)(uVar6 - uVar13) < 0) {
        fn_82C4E5E8(puVar15);
      }
      *(int *)(param_1 + 0x556c) = (int)(uVar8 >> (0x40 - uVar13 & 0x7f)) + iVar12;
    }
    else {
      puVar15 = *(ulonglong **)(param_1 + 0x54);
      iVar12 = 0;
      uVar13 = 1;
      uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
      uVar8 = uVar6 + 0x10;
      if (iVar4 == 0) {
        if ((uVar8 & 0xffffffff) == 0) {
          do {
            if ((uVar8 & 0xffffffff) == 0) break;
            uVar5 = *puVar15;
            uVar13 = uVar13 - uVar8;
            *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
            *puVar15 = uVar5 << (uVar8 & 0x7f);
            if ((longlong)(uVar6 - uVar8) < 0) {
              fn_82C4E5E8(puVar15,uVar5 >> (0x40 - uVar8 & 0x7f) & 0xffffffff);
            }
            uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
            uVar8 = uVar6 + 0x10;
          } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
        }
        uVar5 = *puVar15;
        uVar8 = uVar5 << (uVar13 & 0x7f);
        *(int *)(puVar15 + 1) = (int)(uVar6 - uVar13);
        *puVar15 = uVar8;
        if ((longlong)(uVar6 - uVar13) < 0) {
          fn_82C4E5E8(puVar15,uVar8,uVar5 >> (0x40 - uVar13 & 0x7f));
        }
        puVar15 = *(ulonglong **)(param_1 + 0x54);
        uVar13 = 1;
        uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
        uVar8 = uVar6 + 0x10;
        if ((uVar8 & 0xffffffff) == 0) {
          do {
            if ((uVar8 & 0xffffffff) == 0) break;
            uVar5 = *puVar15;
            uVar13 = uVar13 - uVar8;
            *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
            *puVar15 = uVar5 << (uVar8 & 0x7f);
            if ((longlong)(uVar6 - uVar8) < 0) {
              fn_82C4E5E8(puVar15,uVar5 >> (0x40 - uVar8 & 0x7f) & 0xffffffff);
            }
            uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
            uVar8 = uVar6 + 0x10;
          } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
        }
LAB_82c855dc:
        *(int *)(puVar15 + 1) = (int)(uVar6 - uVar13);
        *puVar15 = *puVar15 << (uVar13 & 0x7f);
        if ((longlong)(uVar6 - uVar13) < 0) {
          fn_82C4E5E8(puVar15);
        }
      }
      else {
        iVar14 = 0;
        if ((uVar8 & 0xffffffff) == 0) {
          do {
            iVar12 = iVar14;
            if ((uVar8 & 0xffffffff) == 0) break;
            uVar13 = uVar13 - uVar8;
            *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
            iVar12 = ((int)(*puVar15 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar13 & 0x3f)) + iVar12;
            *puVar15 = *puVar15 << (uVar8 & 0x7f);
            if ((longlong)(uVar6 - uVar8) < 0) {
              fn_82C4E5E8(puVar15);
            }
            uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
            uVar8 = uVar6 + 0x10;
            iVar14 = iVar12;
          } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
        }
        uVar8 = *puVar15;
        *(int *)(puVar15 + 1) = (int)(uVar6 - uVar13);
        *puVar15 = uVar8 << (uVar13 & 0x7f);
        if ((longlong)(uVar6 - uVar13) < 0) {
          fn_82C4E5E8(puVar15);
        }
        puVar15 = *(ulonglong **)(param_1 + 0x54);
        iVar14 = 0;
        *(int *)(param_1 + 0x5424) = (int)(uVar8 >> (0x40 - uVar13 & 0x7f)) + iVar12;
        uVar13 = 1;
        uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
        uVar8 = uVar6 + 0x10;
        iVar12 = 0;
        if ((uVar8 & 0xffffffff) == 0) {
          do {
            iVar14 = iVar12;
            if ((uVar8 & 0xffffffff) == 0) break;
            uVar13 = uVar13 - uVar8;
            *(int *)(puVar15 + 1) = (int)(uVar6 - uVar8);
            iVar14 = ((int)(*puVar15 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar13 & 0x3f)) + iVar14;
            *puVar15 = *puVar15 << (uVar8 & 0x7f);
            if ((longlong)(uVar6 - uVar8) < 0) {
              fn_82C4E5E8(puVar15);
            }
            uVar6 = (ulonglong)*(uint *)(puVar15 + 1);
            uVar8 = uVar6 + 0x10;
            iVar12 = iVar14;
          } while ((uVar8 & 0xffffffff) < (uVar13 & 0xffffffff));
        }
        uVar8 = *puVar15;
        *(int *)(puVar15 + 1) = (int)(uVar6 - uVar13);
        *puVar15 = uVar8 << (uVar13 & 0x7f);
        if ((longlong)(uVar6 - uVar13) < 0) {
          fn_82C4E5E8(puVar15);
        }
        *(int *)(param_1 + 0x5428) = (int)(uVar8 >> (0x40 - uVar13 & 0x7f)) + iVar14;
      }
    }
  }
  if (*(int *)(param_1 + 0x563c) != 0) {
    fn_82C5CFF0(param_1,auStack_90,auStack_a0);
  }
  if (iVar4 != 0) {
    *(undefined4 *)(param_1 + 0x56d8) = 0;
  }
  if (0 < *(int *)(param_1 + 0x39f4)) {
    if (iVar4 == 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x54ac) = *(undefined4 *)(param_1 + 0x54b4);
  }
LAB_82c85644:
  if (iVar4 != 0) {
    fn_82C49098(*(undefined4 *)(param_1 + 0x6070),param_1,auStack_a0[0],auStack_90);
    uVar2 = fn_82C493B0(param_1,auStack_a0[0],auStack_90);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  return 0;
}

