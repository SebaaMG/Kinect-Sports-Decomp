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
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern int fn_82C49098();
extern int fn_82C493B0();
extern int fn_82C4E5E8();
extern int fn_82C531B8();
extern int fn_82C58408();
extern int fn_82C58FB8();
extern int fn_82C5CFF0();
extern int fn_82C5D578();
extern int fn_82C5E1D8();
extern int fn_82C5F8E8();
extern int fn_82C5FAB0();
extern int fn_82C7F300();
extern int fn_82C9D918();
extern int fn_82CBBDC8();
extern unsigned int lbl_820FC13C;


undefined8 fn_82C60938(int param_1,undefined8 param_2)

{
  longlong *plVar1;
  uint uVar2;
  undefined4 uVar4;
  undefined8 uVar3;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  int iVar15;
  longlong lVar14;
  ulonglong uVar16;
  ulonglong *puVar17;
  undefined4 auStack_b0 [4];
  undefined1 auStack_a0 [160];
  
  iVar15 = 0;
  auStack_b0[0] = 0;
  iVar5 = (int)param_2;
  lVar12 = 0;
  uVar13 = 0;
  if (iVar5 == 0) {
    fn_82C5D578();
  }
  else {
    uVar4 = fn_82C5D578();
    *(undefined4 *)(param_1 + 0x120) = uVar4;
  }
  if ((((*(int *)(param_1 + 0x120) == 0) && (*(int *)(param_1 + 0x5710) != 0)) &&
      (*(int *)(param_1 + 0x578c) == 0)) && (uVar3 = fn_82CBBDC8(param_1), (int)uVar3 != 0)) {
    return uVar3;
  }
  iVar11 = *(int *)(param_1 + 0x120);
  if (iVar11 == 5) {
    if (*(int *)(param_1 + 0x5420) != 0) {
      if ((*(int *)(param_1 + 0x5568) == 0) || (*(int *)(param_1 + 0x56ec) != 0)) {
        puVar17 = *(ulonglong **)(param_1 + 0x54);
        uVar16 = 2;
        iVar15 = 0;
        uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
        uVar8 = uVar7 + 0x10;
        if (iVar5 == 0) {
          if ((uVar8 & 0xffffffff) < 2) {
            do {
              if ((uVar8 & 0xffffffff) == 0) break;
              uVar6 = *puVar17;
              uVar16 = uVar16 - uVar8;
              *(int *)(puVar17 + 1) = (int)(uVar7 - uVar8);
              *puVar17 = uVar6 << (uVar8 & 0x7f);
              if ((longlong)(uVar7 - uVar8) < 0) {
                fn_82C4E5E8(puVar17,uVar6 >> (0x40 - uVar8 & 0x7f) & 0xffffffff);
              }
              uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
              uVar8 = uVar7 + 0x10;
            } while ((uVar8 & 0xffffffff) < (uVar16 & 0xffffffff));
          }
          goto LAB_82c60d70;
        }
        iVar11 = 0;
        if ((uVar8 & 0xffffffff) < 2) {
          do {
            iVar15 = iVar11;
            if ((uVar8 & 0xffffffff) == 0) break;
            uVar16 = uVar16 - uVar8;
            *(int *)(puVar17 + 1) = (int)(uVar7 - uVar8);
            iVar15 = ((int)(*puVar17 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar16 & 0x3f)) + iVar15;
            *puVar17 = *puVar17 << (uVar8 & 0x7f);
            if ((longlong)(uVar7 - uVar8) < 0) {
              fn_82C4E5E8(puVar17);
            }
            uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
            uVar8 = uVar7 + 0x10;
            iVar11 = iVar15;
          } while ((uVar8 & 0xffffffff) < (uVar16 & 0xffffffff));
        }
        uVar8 = *puVar17;
        *(int *)(puVar17 + 1) = (int)(uVar7 - uVar16);
        *puVar17 = uVar8 << (uVar16 & 0x7f);
        if ((longlong)(uVar7 - uVar16) < 0) {
          fn_82C4E5E8(puVar17);
        }
        *(int *)(param_1 + 0x556c) = (int)(uVar8 >> (0x40 - uVar16 & 0x7f)) + iVar15;
      }
      else {
        puVar17 = *(ulonglong **)(param_1 + 0x54);
        uVar16 = 1;
        iVar15 = 0;
        uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
        uVar8 = uVar7 + 0x10;
        if (iVar5 == 0) {
          if ((uVar8 & 0xffffffff) == 0) {
            do {
              if ((uVar8 & 0xffffffff) == 0) break;
              uVar6 = *puVar17;
              uVar16 = uVar16 - uVar8;
              *(int *)(puVar17 + 1) = (int)(uVar7 - uVar8);
              *puVar17 = uVar6 << (uVar8 & 0x7f);
              if ((longlong)(uVar7 - uVar8) < 0) {
                fn_82C4E5E8(puVar17,uVar6 >> (0x40 - uVar8 & 0x7f) & 0xffffffff);
              }
              uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
              uVar8 = uVar7 + 0x10;
            } while ((uVar8 & 0xffffffff) < (uVar16 & 0xffffffff));
          }
          uVar6 = *puVar17;
          uVar8 = uVar6 << (uVar16 & 0x7f);
          *(int *)(puVar17 + 1) = (int)(uVar7 - uVar16);
          *puVar17 = uVar8;
          if ((longlong)(uVar7 - uVar16) < 0) {
            fn_82C4E5E8(puVar17,uVar8,uVar6 >> (0x40 - uVar16 & 0x7f));
          }
          puVar17 = *(ulonglong **)(param_1 + 0x54);
          uVar16 = 1;
          uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
          uVar8 = uVar7 + 0x10;
          if ((uVar8 & 0xffffffff) == 0) {
            do {
              if ((uVar8 & 0xffffffff) == 0) break;
              uVar6 = *puVar17;
              uVar16 = uVar16 - uVar8;
              *(int *)(puVar17 + 1) = (int)(uVar7 - uVar8);
              *puVar17 = uVar6 << (uVar8 & 0x7f);
              if ((longlong)(uVar7 - uVar8) < 0) {
                fn_82C4E5E8(puVar17,uVar6 >> (0x40 - uVar8 & 0x7f) & 0xffffffff);
              }
              uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
              uVar8 = uVar7 + 0x10;
            } while ((uVar8 & 0xffffffff) < (uVar16 & 0xffffffff));
          }
LAB_82c60d70:
          *(int *)(puVar17 + 1) = (int)(uVar7 - uVar16);
          *puVar17 = *puVar17 << (uVar16 & 0x7f);
          if ((longlong)(uVar7 - uVar16) < 0) {
            fn_82C4E5E8(puVar17);
          }
        }
        else {
          iVar11 = 0;
          if ((uVar8 & 0xffffffff) == 0) {
            do {
              iVar15 = iVar11;
              if ((uVar8 & 0xffffffff) == 0) break;
              uVar16 = uVar16 - uVar8;
              *(int *)(puVar17 + 1) = (int)(uVar7 - uVar8);
              iVar15 = ((int)(*puVar17 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar16 & 0x3f)) + iVar15;
              *puVar17 = *puVar17 << (uVar8 & 0x7f);
              if ((longlong)(uVar7 - uVar8) < 0) {
                fn_82C4E5E8(puVar17);
              }
              uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
              uVar8 = uVar7 + 0x10;
              iVar11 = iVar15;
            } while ((uVar8 & 0xffffffff) < (uVar16 & 0xffffffff));
          }
          uVar8 = *puVar17;
          *(int *)(puVar17 + 1) = (int)(uVar7 - uVar16);
          *puVar17 = uVar8 << (uVar16 & 0x7f);
          if ((longlong)(uVar7 - uVar16) < 0) {
            fn_82C4E5E8(puVar17);
          }
          puVar17 = *(ulonglong **)(param_1 + 0x54);
          iVar11 = 0;
          *(int *)(param_1 + 0x5424) = (int)(uVar8 >> (0x40 - uVar16 & 0x7f)) + iVar15;
          uVar16 = 1;
          uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
          uVar8 = uVar7 + 0x10;
          iVar15 = 0;
          if ((uVar8 & 0xffffffff) == 0) {
            do {
              iVar11 = iVar15;
              if ((uVar8 & 0xffffffff) == 0) break;
              uVar16 = uVar16 - uVar8;
              *(int *)(puVar17 + 1) = (int)(uVar7 - uVar8);
              iVar11 = ((int)(*puVar17 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar16 & 0x3f)) + iVar11;
              *puVar17 = *puVar17 << (uVar8 & 0x7f);
              if ((longlong)(uVar7 - uVar8) < 0) {
                fn_82C4E5E8(puVar17);
              }
              uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
              uVar8 = uVar7 + 0x10;
              iVar15 = iVar11;
            } while ((uVar8 & 0xffffffff) < (uVar16 & 0xffffffff));
          }
          uVar8 = *puVar17;
          *(int *)(puVar17 + 1) = (int)(uVar7 - uVar16);
          *puVar17 = uVar8 << (uVar16 & 0x7f);
          if ((longlong)(uVar7 - uVar16) < 0) {
            fn_82C4E5E8(puVar17);
          }
          *(int *)(param_1 + 0x5428) = (int)(uVar8 >> (0x40 - uVar16 & 0x7f)) + iVar11;
        }
      }
    }
    uVar4 = 0;
    if (*(int *)(param_1 + 0x563c) != 0) {
      fn_82C5CFF0(param_1,auStack_a0,auStack_b0);
      uVar4 = auStack_b0[0];
    }
    if (iVar5 != 0) {
      *(undefined4 *)(param_1 + 0x56d8) = 0;
    }
    if (0 < *(int *)(param_1 + 0x39f4)) {
      if (iVar5 == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x54ac) = *(undefined4 *)(param_1 + 0x54b4);
    }
    if (iVar5 == 0) {
      return 0;
    }
    fn_82C49098(*(undefined4 *)(param_1 + 0x6070),param_1,uVar4,auStack_a0);
    uVar3 = fn_82C493B0(param_1,uVar4,auStack_a0);
    iVar5 = (int)uVar3;
    goto joined_r0x82c62bcc;
  }
  if (((iVar11 != 0) && (iVar11 != 1)) && ((iVar11 != 4 && (iVar11 != 2)))) {
    return 1;
  }
  if (*(int *)(param_1 + 0x5430) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x54);
    uVar16 = 8;
    uVar7 = (ulonglong)*(uint *)(plVar1 + 1);
    uVar8 = uVar7 + 0x10;
    if ((uVar8 & 0xffffffff) < 8) {
      do {
        if ((uVar8 & 0xffffffff) == 0) break;
        uVar16 = uVar16 - uVar8;
        *plVar1 = *plVar1 << (uVar8 & 0x7f);
        *(int *)(plVar1 + 1) = (int)(uVar7 - uVar8);
        if ((longlong)(uVar7 - uVar8) < 0) {
          fn_82C4E5E8(plVar1);
        }
        uVar7 = (ulonglong)*(uint *)(plVar1 + 1);
        uVar8 = uVar7 + 0x10;
      } while ((uVar8 & 0xffffffff) < (uVar16 & 0xffffffff));
    }
    *plVar1 = *plVar1 << (uVar16 & 0x7f);
    *(int *)(plVar1 + 1) = (int)(uVar7 - uVar16);
    if ((longlong)(uVar7 - uVar16) < 0) {
      fn_82C4E5E8(plVar1);
    }
  }
  if (*(int *)(param_1 + 0x5420) != 0) {
    if ((*(int *)(param_1 + 0x5568) == 0) || (*(int *)(param_1 + 0x56ec) != 0)) {
      puVar17 = *(ulonglong **)(param_1 + 0x54);
      uVar16 = 2;
      iVar11 = 0;
      uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
      uVar8 = uVar7 + 0x10;
      if (iVar5 == 0) {
        if ((uVar8 & 0xffffffff) < 2) {
          do {
            if ((uVar8 & 0xffffffff) == 0) break;
            uVar6 = *puVar17;
            uVar16 = uVar16 - uVar8;
            *(int *)(puVar17 + 1) = (int)(uVar7 - uVar8);
            *puVar17 = uVar6 << (uVar8 & 0x7f);
            if ((longlong)(uVar7 - uVar8) < 0) {
              fn_82C4E5E8(puVar17,uVar6 >> (0x40 - uVar8 & 0x7f) & 0xffffffff);
            }
            uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
            uVar8 = uVar7 + 0x10;
          } while ((uVar8 & 0xffffffff) < (uVar16 & 0xffffffff));
        }
        goto LAB_82c61278;
      }
      iVar10 = 0;
      if ((uVar8 & 0xffffffff) < 2) {
        do {
          iVar11 = iVar10;
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar16 = uVar16 - uVar8;
          *(int *)(puVar17 + 1) = (int)(uVar7 - uVar8);
          iVar11 = ((int)(*puVar17 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar16 & 0x3f)) + iVar11;
          *puVar17 = *puVar17 << (uVar8 & 0x7f);
          if ((longlong)(uVar7 - uVar8) < 0) {
            fn_82C4E5E8(puVar17);
          }
          uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
          uVar8 = uVar7 + 0x10;
          iVar10 = iVar11;
        } while ((uVar8 & 0xffffffff) < (uVar16 & 0xffffffff));
      }
      uVar8 = *puVar17;
      *(int *)(puVar17 + 1) = (int)(uVar7 - uVar16);
      *puVar17 = uVar8 << (uVar16 & 0x7f);
      if ((longlong)(uVar7 - uVar16) < 0) {
        fn_82C4E5E8(puVar17);
      }
      *(int *)(param_1 + 0x556c) = (int)(uVar8 >> (0x40 - uVar16 & 0x7f)) + iVar11;
    }
    else {
      puVar17 = *(ulonglong **)(param_1 + 0x54);
      uVar16 = 1;
      iVar11 = 0;
      uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
      uVar8 = uVar7 + 0x10;
      if (iVar5 == 0) {
        if ((uVar8 & 0xffffffff) == 0) {
          do {
            if ((uVar8 & 0xffffffff) == 0) break;
            uVar6 = *puVar17;
            uVar16 = uVar16 - uVar8;
            *(int *)(puVar17 + 1) = (int)(uVar7 - uVar8);
            *puVar17 = uVar6 << (uVar8 & 0x7f);
            if ((longlong)(uVar7 - uVar8) < 0) {
              fn_82C4E5E8(puVar17,uVar6 >> (0x40 - uVar8 & 0x7f) & 0xffffffff);
            }
            uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
            uVar8 = uVar7 + 0x10;
          } while ((uVar8 & 0xffffffff) < (uVar16 & 0xffffffff));
        }
        uVar6 = *puVar17;
        uVar8 = uVar6 << (uVar16 & 0x7f);
        *(int *)(puVar17 + 1) = (int)(uVar7 - uVar16);
        *puVar17 = uVar8;
        if ((longlong)(uVar7 - uVar16) < 0) {
          fn_82C4E5E8(puVar17,uVar8,uVar6 >> (0x40 - uVar16 & 0x7f));
        }
        puVar17 = *(ulonglong **)(param_1 + 0x54);
        uVar16 = 1;
        uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
        uVar8 = uVar7 + 0x10;
        if ((uVar8 & 0xffffffff) == 0) {
          do {
            if ((uVar8 & 0xffffffff) == 0) break;
            uVar6 = *puVar17;
            uVar16 = uVar16 - uVar8;
            *(int *)(puVar17 + 1) = (int)(uVar7 - uVar8);
            *puVar17 = uVar6 << (uVar8 & 0x7f);
            if ((longlong)(uVar7 - uVar8) < 0) {
              fn_82C4E5E8(puVar17,uVar6 >> (0x40 - uVar8 & 0x7f) & 0xffffffff);
            }
            uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
            uVar8 = uVar7 + 0x10;
          } while ((uVar8 & 0xffffffff) < (uVar16 & 0xffffffff));
        }
LAB_82c61278:
        *(int *)(puVar17 + 1) = (int)(uVar7 - uVar16);
        *puVar17 = *puVar17 << (uVar16 & 0x7f);
        if ((longlong)(uVar7 - uVar16) < 0) {
          fn_82C4E5E8(puVar17);
        }
      }
      else {
        iVar10 = 0;
        if ((uVar8 & 0xffffffff) == 0) {
          do {
            iVar11 = iVar10;
            if ((uVar8 & 0xffffffff) == 0) break;
            uVar16 = uVar16 - uVar8;
            *(int *)(puVar17 + 1) = (int)(uVar7 - uVar8);
            iVar11 = ((int)(*puVar17 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar16 & 0x3f)) + iVar11;
            *puVar17 = *puVar17 << (uVar8 & 0x7f);
            if ((longlong)(uVar7 - uVar8) < 0) {
              fn_82C4E5E8(puVar17);
            }
            uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
            uVar8 = uVar7 + 0x10;
            iVar10 = iVar11;
          } while ((uVar8 & 0xffffffff) < (uVar16 & 0xffffffff));
        }
        uVar8 = *puVar17;
        *(int *)(puVar17 + 1) = (int)(uVar7 - uVar16);
        *puVar17 = uVar8 << (uVar16 & 0x7f);
        if ((longlong)(uVar7 - uVar16) < 0) {
          fn_82C4E5E8(puVar17);
        }
        puVar17 = *(ulonglong **)(param_1 + 0x54);
        iVar10 = 0;
        *(int *)(param_1 + 0x5424) = (int)(uVar8 >> (0x40 - uVar16 & 0x7f)) + iVar11;
        uVar16 = 1;
        uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
        uVar8 = uVar7 + 0x10;
        iVar11 = 0;
        if ((uVar8 & 0xffffffff) == 0) {
          do {
            iVar10 = iVar11;
            if ((uVar8 & 0xffffffff) == 0) break;
            uVar16 = uVar16 - uVar8;
            *(int *)(puVar17 + 1) = (int)(uVar7 - uVar8);
            iVar10 = ((int)(*puVar17 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar16 & 0x3f)) + iVar10;
            *puVar17 = *puVar17 << (uVar8 & 0x7f);
            if ((longlong)(uVar7 - uVar8) < 0) {
              fn_82C4E5E8(puVar17);
            }
            uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
            uVar8 = uVar7 + 0x10;
            iVar11 = iVar10;
          } while ((uVar8 & 0xffffffff) < (uVar16 & 0xffffffff));
        }
        uVar8 = *puVar17;
        *(int *)(puVar17 + 1) = (int)(uVar7 - uVar16);
        *puVar17 = uVar8 << (uVar16 & 0x7f);
        if ((longlong)(uVar7 - uVar16) < 0) {
          fn_82C4E5E8(puVar17);
        }
        *(int *)(param_1 + 0x5428) = (int)(uVar8 >> (0x40 - uVar16 & 0x7f)) + iVar10;
      }
    }
  }
  uVar4 = 0;
  if (*(int *)(param_1 + 0x563c) != 0) {
    fn_82C5CFF0(param_1,auStack_a0,auStack_b0);
    uVar4 = auStack_b0[0];
  }
  puVar17 = *(ulonglong **)(param_1 + 0x54);
  uVar16 = 1;
  iVar11 = 0;
  uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
  uVar8 = uVar7 + 0x10;
  if (iVar5 == 0) {
    if ((uVar8 & 0xffffffff) == 0) {
      do {
        if ((uVar8 & 0xffffffff) == 0) break;
        uVar6 = *puVar17;
        uVar16 = uVar16 - uVar8;
        *(int *)(puVar17 + 1) = (int)(uVar7 - uVar8);
        *puVar17 = uVar6 << (uVar8 & 0x7f);
        if ((longlong)(uVar7 - uVar8) < 0) {
          fn_82C4E5E8(puVar17,uVar6 >> (0x40 - uVar8 & 0x7f) & 0xffffffff);
        }
        uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
        uVar8 = uVar7 + 0x10;
      } while ((uVar8 & 0xffffffff) < (uVar16 & 0xffffffff));
    }
    *puVar17 = *puVar17 << (uVar16 & 0x7f);
    *(int *)(puVar17 + 1) = (int)(uVar7 - uVar16);
    if ((longlong)(uVar7 - uVar16) < 0) {
      fn_82C4E5E8(puVar17);
    }
  }
  else {
    iVar10 = 0;
    if ((uVar8 & 0xffffffff) == 0) {
      do {
        iVar11 = iVar10;
        if ((uVar8 & 0xffffffff) == 0) break;
        uVar16 = uVar16 - uVar8;
        *(int *)(puVar17 + 1) = (int)(uVar7 - uVar8);
        iVar11 = ((int)(*puVar17 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar16 & 0x3f)) + iVar11;
        *puVar17 = *puVar17 << (uVar8 & 0x7f);
        if ((longlong)(uVar7 - uVar8) < 0) {
          fn_82C4E5E8(puVar17);
        }
        uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
        uVar8 = uVar7 + 0x10;
        iVar10 = iVar11;
      } while ((uVar8 & 0xffffffff) < (uVar16 & 0xffffffff));
    }
    uVar8 = *puVar17;
    *(int *)(puVar17 + 1) = (int)(uVar7 - uVar16);
    *puVar17 = uVar8 << (uVar16 & 0x7f);
    if ((longlong)(uVar7 - uVar16) < 0) {
      fn_82C4E5E8(puVar17);
    }
    *(int *)(param_1 + 0xf78) = (int)(uVar8 >> (0x40 - uVar16 & 0x7f)) + iVar11;
  }
  if (*(int *)(param_1 + 0x5568) != 0) {
    puVar17 = *(ulonglong **)(param_1 + 0x54);
    uVar16 = 1;
    iVar11 = 0;
    uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
    uVar8 = uVar7 + 0x10;
    if (iVar5 == 0) {
      if ((uVar8 & 0xffffffff) == 0) {
        do {
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar6 = *puVar17;
          uVar16 = uVar16 - uVar8;
          *(int *)(puVar17 + 1) = (int)(uVar7 - uVar8);
          *puVar17 = uVar6 << (uVar8 & 0x7f);
          if ((longlong)(uVar7 - uVar8) < 0) {
            fn_82C4E5E8(puVar17,uVar6 >> (0x40 - uVar8 & 0x7f) & 0xffffffff);
          }
          uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
          uVar8 = uVar7 + 0x10;
        } while ((uVar8 & 0xffffffff) < (uVar16 & 0xffffffff));
      }
      *puVar17 = *puVar17 << (uVar16 & 0x7f);
      *(int *)(puVar17 + 1) = (int)(uVar7 - uVar16);
      if ((longlong)(uVar7 - uVar16) < 0) {
        fn_82C4E5E8(puVar17);
      }
    }
    else {
      iVar10 = 0;
      if ((uVar8 & 0xffffffff) == 0) {
        do {
          iVar11 = iVar10;
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar16 = uVar16 - uVar8;
          *(int *)(puVar17 + 1) = (int)(uVar7 - uVar8);
          iVar11 = ((int)(*puVar17 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar16 & 0x3f)) + iVar11;
          *puVar17 = *puVar17 << (uVar8 & 0x7f);
          if ((longlong)(uVar7 - uVar8) < 0) {
            fn_82C4E5E8(puVar17);
          }
          uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
          uVar8 = uVar7 + 0x10;
          iVar10 = iVar11;
        } while ((uVar8 & 0xffffffff) < (uVar16 & 0xffffffff));
      }
      uVar8 = *puVar17;
      *(int *)(puVar17 + 1) = (int)(uVar7 - uVar16);
      *puVar17 = uVar8 << (uVar16 & 0x7f);
      if ((longlong)(uVar7 - uVar16) < 0) {
        fn_82C4E5E8(puVar17);
      }
      *(int *)(param_1 + 0x54ac) = (int)(uVar8 >> (0x40 - uVar16 & 0x7f)) + iVar11;
    }
  }
  if (*(int *)(param_1 + 0xd9c) != 0) {
    puVar17 = *(ulonglong **)(param_1 + 0x54);
    uVar16 = 1;
    iVar11 = 0;
    uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
    uVar8 = uVar7 + 0x10;
    if (iVar5 == 0) {
      if ((uVar8 & 0xffffffff) == 0) {
        do {
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar6 = *puVar17;
          uVar16 = uVar16 - uVar8;
          *(int *)(puVar17 + 1) = (int)(uVar7 - uVar8);
          *puVar17 = uVar6 << (uVar8 & 0x7f);
          if ((longlong)(uVar7 - uVar8) < 0) {
            fn_82C4E5E8(puVar17,uVar6 >> (0x40 - uVar8 & 0x7f) & 0xffffffff);
          }
          uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
          uVar8 = uVar7 + 0x10;
        } while ((uVar8 & 0xffffffff) < (uVar16 & 0xffffffff));
      }
      *puVar17 = *puVar17 << (uVar16 & 0x7f);
      *(int *)(puVar17 + 1) = (int)(uVar7 - uVar16);
      if ((longlong)(uVar7 - uVar16) < 0) {
        fn_82C4E5E8(puVar17);
      }
    }
    else {
      iVar10 = 0;
      if ((uVar8 & 0xffffffff) == 0) {
        do {
          iVar11 = iVar10;
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar16 = uVar16 - uVar8;
          *(int *)(puVar17 + 1) = (int)(uVar7 - uVar8);
          iVar11 = ((int)(*puVar17 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar16 & 0x3f)) + iVar11;
          *puVar17 = *puVar17 << (uVar8 & 0x7f);
          if ((longlong)(uVar7 - uVar8) < 0) {
            fn_82C4E5E8(puVar17);
          }
          uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
          uVar8 = uVar7 + 0x10;
          iVar10 = iVar11;
        } while ((uVar8 & 0xffffffff) < (uVar16 & 0xffffffff));
      }
      uVar8 = *puVar17;
      *(int *)(puVar17 + 1) = (int)(uVar7 - uVar16);
      *puVar17 = uVar8 << (uVar16 & 0x7f);
      if ((longlong)(uVar7 - uVar16) < 0) {
        fn_82C4E5E8(puVar17);
      }
      *(int *)(param_1 + 0xda0) = (int)(uVar8 >> (0x40 - uVar16 & 0x7f)) + iVar11;
    }
  }
  if (*(int *)(param_1 + 0x120) == 2) {
    puVar17 = *(ulonglong **)(param_1 + 0x54);
    uVar16 = 3;
    lVar14 = 0;
    uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
    uVar8 = uVar7 + 0x10;
    if ((uVar8 & 0xffffffff) < 3) {
      do {
        if ((uVar8 & 0xffffffff) == 0) break;
        uVar16 = uVar16 - uVar8;
        *(int *)(puVar17 + 1) = (int)(uVar7 - uVar8);
        lVar14 = (ulonglong)
                 (uint)((int)(*puVar17 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar16 & 0x3f)) + lVar14;
        *puVar17 = *puVar17 << (uVar8 & 0x7f);
        if ((longlong)(uVar7 - uVar8) < 0) {
          fn_82C4E5E8(puVar17);
        }
        uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
        uVar8 = uVar7 + 0x10;
      } while ((uVar8 & 0xffffffff) < (uVar16 & 0xffffffff));
    }
    *(int *)(puVar17 + 1) = (int)(uVar7 - uVar16);
    lVar14 = (*puVar17 >> (0x40 - uVar16 & 0x7f) & 0xffffffff) + lVar14;
    *puVar17 = *puVar17 << (uVar16 & 0x7f);
    if ((longlong)(uVar7 - uVar16) < 0) {
      fn_82C4E5E8(puVar17);
    }
    if ((int)lVar14 == 7) {
      puVar17 = *(ulonglong **)(param_1 + 0x54);
      uVar16 = 4;
      lVar14 = 0;
      uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
      uVar8 = uVar7 + 0x10;
      if ((uVar8 & 0xffffffff) < 4) {
        do {
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar16 = uVar16 - uVar8;
          *(int *)(puVar17 + 1) = (int)(uVar7 - uVar8);
          lVar14 = (ulonglong)
                   (uint)((int)(*puVar17 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar16 & 0x3f)) +
                   lVar14;
          *puVar17 = *puVar17 << (uVar8 & 0x7f);
          if ((longlong)(uVar7 - uVar8) < 0) {
            fn_82C4E5E8(puVar17);
          }
          uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
          uVar8 = uVar7 + 0x10;
        } while ((uVar8 & 0xffffffff) < (uVar16 & 0xffffffff));
      }
      *(int *)(puVar17 + 1) = (int)(uVar7 - uVar16);
      lVar14 = (*puVar17 >> (0x40 - uVar16 & 0x7f) & 0xffffffff) + lVar14;
      *puVar17 = *puVar17 << (uVar16 & 0x7f);
      if ((longlong)(uVar7 - uVar16) < 0) {
        fn_82C4E5E8(puVar17);
      }
      if (0xd < (int)lVar14) {
        return 1;
      }
      uVar3 = 1;
      lVar14 = lVar14 + 0x70;
    }
    else {
      uVar3 = 0;
    }
    uVar3 = fn_82C5E1D8(param_1,lVar14,uVar3,param_2);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  puVar17 = *(ulonglong **)(param_1 + 0x54);
  uVar16 = 5;
  iVar11 = 0;
  uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
  uVar8 = uVar7 + 0x10;
  if (iVar5 == 0) {
    if ((uVar8 & 0xffffffff) < 5) {
      do {
        if ((uVar8 & 0xffffffff) == 0) break;
        uVar6 = *puVar17;
        uVar16 = uVar16 - uVar8;
        *(int *)(puVar17 + 1) = (int)(uVar7 - uVar8);
        *puVar17 = uVar6 << (uVar8 & 0x7f);
        if ((longlong)(uVar7 - uVar8) < 0) {
          fn_82C4E5E8(puVar17,uVar6 >> (0x40 - uVar8 & 0x7f) & 0xffffffff);
        }
        uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
        uVar8 = uVar7 + 0x10;
      } while ((uVar8 & 0xffffffff) < (uVar16 & 0xffffffff));
    }
    *puVar17 = *puVar17 << (uVar16 & 0x7f);
    *(int *)(puVar17 + 1) = (int)(uVar7 - uVar16);
    if ((longlong)(uVar7 - uVar16) < 0) {
      fn_82C4E5E8(puVar17);
    }
  }
  else {
    iVar10 = 0;
    if ((uVar8 & 0xffffffff) < 5) {
      do {
        iVar11 = iVar10;
        if ((uVar8 & 0xffffffff) == 0) break;
        uVar16 = uVar16 - uVar8;
        *(int *)(puVar17 + 1) = (int)(uVar7 - uVar8);
        iVar11 = ((int)(*puVar17 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar16 & 0x3f)) + iVar11;
        *puVar17 = *puVar17 << (uVar8 & 0x7f);
        if ((longlong)(uVar7 - uVar8) < 0) {
          fn_82C4E5E8(puVar17);
        }
        uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
        uVar8 = uVar7 + 0x10;
        iVar10 = iVar11;
      } while ((uVar8 & 0xffffffff) < (uVar16 & 0xffffffff));
    }
    uVar8 = *puVar17;
    *(int *)(puVar17 + 1) = (int)(uVar7 - uVar16);
    *puVar17 = uVar8 << (uVar16 & 0x7f);
    if ((longlong)(uVar7 - uVar16) < 0) {
      fn_82C4E5E8(puVar17);
    }
    *(int *)(param_1 + 0xfa8) = (int)(uVar8 >> (0x40 - uVar16 & 0x7f)) + iVar11;
  }
  if (*(int *)(param_1 + 0xfa8) < 9) {
    puVar17 = *(ulonglong **)(param_1 + 0x54);
    uVar16 = 1;
    iVar11 = 0;
    uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
    uVar8 = uVar7 + 0x10;
    if (iVar5 == 0) {
      if ((uVar8 & 0xffffffff) == 0) {
        do {
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar6 = *puVar17;
          uVar16 = uVar16 - uVar8;
          *(int *)(puVar17 + 1) = (int)(uVar7 - uVar8);
          *puVar17 = uVar6 << (uVar8 & 0x7f);
          if ((longlong)(uVar7 - uVar8) < 0) {
            fn_82C4E5E8(puVar17,uVar6 >> (0x40 - uVar8 & 0x7f) & 0xffffffff);
          }
          uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
          uVar8 = uVar7 + 0x10;
        } while ((uVar8 & 0xffffffff) < (uVar16 & 0xffffffff));
      }
      *puVar17 = *puVar17 << (uVar16 & 0x7f);
      *(int *)(puVar17 + 1) = (int)(uVar7 - uVar16);
      if ((longlong)(uVar7 - uVar16) < 0) {
        fn_82C4E5E8(puVar17);
      }
    }
    else {
      iVar10 = 0;
      if ((uVar8 & 0xffffffff) == 0) {
        do {
          iVar11 = iVar10;
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar16 = uVar16 - uVar8;
          *(int *)(puVar17 + 1) = (int)(uVar7 - uVar8);
          iVar11 = ((int)(*puVar17 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar16 & 0x3f)) + iVar11;
          *puVar17 = *puVar17 << (uVar8 & 0x7f);
          if ((longlong)(uVar7 - uVar8) < 0) {
            fn_82C4E5E8(puVar17);
          }
          uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
          uVar8 = uVar7 + 0x10;
          iVar10 = iVar11;
        } while ((uVar8 & 0xffffffff) < (uVar16 & 0xffffffff));
      }
      uVar8 = *puVar17;
      *(int *)(puVar17 + 1) = (int)(uVar7 - uVar16);
      *puVar17 = uVar8 << (uVar16 & 0x7f);
      if ((longlong)(uVar7 - uVar16) < 0) {
        fn_82C4E5E8(puVar17);
      }
      *(int *)(param_1 + 0xfc) = (int)(uVar8 >> (0x40 - uVar16 & 0x7f)) + iVar11;
    }
  }
  else if (iVar5 != 0) {
    *(undefined4 *)(param_1 + 0xfc) = 0;
  }
  if (*(int *)(param_1 + 0xd98) != 0) {
    puVar17 = *(ulonglong **)(param_1 + 0x54);
    uVar16 = 1;
    iVar11 = 0;
    uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
    uVar8 = uVar7 + 0x10;
    if (iVar5 == 0) {
      if ((uVar8 & 0xffffffff) == 0) {
        do {
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar6 = *puVar17;
          uVar16 = uVar16 - uVar8;
          *(int *)(puVar17 + 1) = (int)(uVar7 - uVar8);
          *puVar17 = uVar6 << (uVar8 & 0x7f);
          if ((longlong)(uVar7 - uVar8) < 0) {
            fn_82C4E5E8(puVar17,uVar6 >> (0x40 - uVar8 & 0x7f) & 0xffffffff);
          }
          uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
          uVar8 = uVar7 + 0x10;
        } while ((uVar8 & 0xffffffff) < (uVar16 & 0xffffffff));
      }
      *puVar17 = *puVar17 << (uVar16 & 0x7f);
      *(int *)(puVar17 + 1) = (int)(uVar7 - uVar16);
      if ((longlong)(uVar7 - uVar16) < 0) {
        fn_82C4E5E8(puVar17);
      }
    }
    else {
      iVar10 = 0;
      if ((uVar8 & 0xffffffff) == 0) {
        do {
          iVar11 = iVar10;
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar16 = uVar16 - uVar8;
          *(int *)(puVar17 + 1) = (int)(uVar7 - uVar8);
          iVar11 = ((int)(*puVar17 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar16 & 0x3f)) + iVar11;
          *puVar17 = *puVar17 << (uVar8 & 0x7f);
          if ((longlong)(uVar7 - uVar8) < 0) {
            fn_82C4E5E8(puVar17);
          }
          uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
          uVar8 = uVar7 + 0x10;
          iVar10 = iVar11;
        } while ((uVar8 & 0xffffffff) < (uVar16 & 0xffffffff));
      }
      uVar8 = *puVar17;
      *(int *)(puVar17 + 1) = (int)(uVar7 - uVar16);
      *puVar17 = uVar8 << (uVar16 & 0x7f);
      if ((longlong)(uVar7 - uVar16) < 0) {
        fn_82C4E5E8(puVar17);
      }
      *(int *)(param_1 + 0xd8c) = (int)(uVar8 >> (0x40 - uVar16 & 0x7f)) + iVar11;
    }
  }
  if (*(int *)(param_1 + 0xd90) == 0) {
    iVar11 = *(int *)(param_1 + 0xfa8);
    if (iVar11 < 9) {
      if (iVar5 != 0) {
        *(undefined4 *)(param_1 + 0xd8c) = 1;
      }
    }
    else {
      if (iVar5 != 0) {
        *(undefined4 *)(param_1 + 0xd8c) = 0;
      }
      iVar11 = *(int *)(&lbl_820FC13C + iVar11 * 4);
    }
  }
  else {
    iVar11 = *(int *)(param_1 + 0xfa8);
  }
  if (iVar5 != 0) {
    *(int *)(param_1 + 0xf8) = iVar11;
  }
  uVar13 = 0;
  if ((*(int *)(param_1 + 0xbc0) != 0) && (iVar10 = *(int *)(param_1 + 0x120), iVar10 != 2)) {
    if (*(int *)(param_1 + 0xf8) < 9) {
      if ((iVar10 == 0) || (iVar10 == 4)) {
        uVar13 = 7;
      }
    }
    else {
      uVar13 = 1;
    }
  }
  if (*(int *)(param_1 + 0x5444) != 0) {
    puVar17 = *(ulonglong **)(param_1 + 0x54);
    uVar16 = 2;
    iVar10 = 0;
    uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
    uVar8 = uVar7 + 0x10;
    if (iVar5 == 0) {
      if ((uVar8 & 0xffffffff) < 2) {
        do {
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar6 = *puVar17;
          uVar16 = uVar16 - uVar8;
          *(int *)(puVar17 + 1) = (int)(uVar7 - uVar8);
          *puVar17 = uVar6 << (uVar8 & 0x7f);
          if ((longlong)(uVar7 - uVar8) < 0) {
            fn_82C4E5E8(puVar17,uVar6 >> (0x40 - uVar8 & 0x7f) & 0xffffffff);
          }
          uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
          uVar8 = uVar7 + 0x10;
        } while ((uVar8 & 0xffffffff) < (uVar16 & 0xffffffff));
      }
      *puVar17 = *puVar17 << (uVar16 & 0x7f);
      *(int *)(puVar17 + 1) = (int)(uVar7 - uVar16);
      if ((longlong)(uVar7 - uVar16) < 0) {
        fn_82C4E5E8(puVar17);
      }
    }
    else {
      iVar9 = 0;
      if ((uVar8 & 0xffffffff) < 2) {
        do {
          iVar10 = iVar9;
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar16 = uVar16 - uVar8;
          *(int *)(puVar17 + 1) = (int)(uVar7 - uVar8);
          iVar10 = ((int)(*puVar17 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar16 & 0x3f)) + iVar10;
          *puVar17 = *puVar17 << (uVar8 & 0x7f);
          if ((longlong)(uVar7 - uVar8) < 0) {
            fn_82C4E5E8(puVar17);
          }
          uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
          uVar8 = uVar7 + 0x10;
          iVar9 = iVar10;
        } while ((uVar8 & 0xffffffff) < (uVar16 & 0xffffffff));
      }
      uVar8 = *puVar17;
      *(int *)(puVar17 + 1) = (int)(uVar7 - uVar16);
      *puVar17 = uVar8 << (uVar16 & 0x7f);
      if ((longlong)(uVar7 - uVar16) < 0) {
        fn_82C4E5E8(puVar17);
      }
      *(int *)(param_1 + 0x5448) = (int)(uVar8 >> (0x40 - uVar16 & 0x7f)) + iVar10;
    }
  }
  if ((*(int *)(param_1 + 0x120) == 0) || (*(int *)(param_1 + 0x120) == 4)) {
    if (*(int *)(param_1 + 0x5710) == 0) {
      uVar3 = fn_82C58408(param_1,4);
      iVar10 = (int)uVar3;
    }
    else {
      uVar3 = fn_82C7F300();
      iVar10 = (int)uVar3;
    }
    if (iVar10 != 0) {
      return uVar3;
    }
    if ((*(int *)(param_1 + 0x50e4) != 0) && (iVar10 = 0, 0 < *(int *)(param_1 + 0x90))) {
      iVar9 = 0;
      do {
        if (iVar5 != 0) {
          uVar2 = *(uint *)(*(int *)(param_1 + 0x110) + iVar9);
          *(uint *)(*(int *)(param_1 + 0x110) + iVar9) = uVar2 >> 0x1c & 8 | uVar2 & 0xffffffe7;
        }
        iVar10 = iVar10 + 1;
        iVar9 = iVar9 + 0x18;
      } while (iVar10 < *(int *)(param_1 + 0x90));
    }
    if ((uVar13 & 2) != 0) {
      puVar17 = *(ulonglong **)(param_1 + 0x54);
      uVar16 = 1;
      lVar14 = 0;
      uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
      uVar8 = uVar7 + 0x10;
      if ((uVar8 & 0xffffffff) == 0) {
        do {
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar16 = uVar16 - uVar8;
          *(int *)(puVar17 + 1) = (int)(uVar7 - uVar8);
          lVar14 = (ulonglong)
                   (uint)((int)(*puVar17 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar16 & 0x3f)) +
                   lVar14;
          *puVar17 = *puVar17 << (uVar8 & 0x7f);
          if ((longlong)(uVar7 - uVar8) < 0) {
            fn_82C4E5E8(puVar17);
          }
          uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
          uVar8 = uVar7 + 0x10;
        } while ((uVar8 & 0xffffffff) < (uVar16 & 0xffffffff));
      }
      uVar8 = *puVar17;
      *(int *)(puVar17 + 1) = (int)(uVar7 - uVar16);
      *puVar17 = uVar8 << (uVar16 & 0x7f);
      if ((longlong)(uVar7 - uVar16) < 0) {
        fn_82C4E5E8(puVar17);
      }
      if (((uVar8 >> (0x40 - uVar16 & 0x7f) & 0xffffffff) + lVar14 & 0xffffffff) == 0) {
        uVar13 = 0;
      }
      else {
        puVar17 = *(ulonglong **)(param_1 + 0x54);
        uVar16 = 1;
        lVar14 = 0;
        uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
        uVar8 = uVar7 + 0x10;
        if ((uVar8 & 0xffffffff) == 0) {
          do {
            if ((uVar8 & 0xffffffff) == 0) break;
            uVar16 = uVar16 - uVar8;
            *(int *)(puVar17 + 1) = (int)(uVar7 - uVar8);
            lVar14 = (ulonglong)
                     (uint)((int)(*puVar17 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar16 & 0x3f)) +
                     lVar14;
            *puVar17 = *puVar17 << (uVar8 & 0x7f);
            if ((longlong)(uVar7 - uVar8) < 0) {
              fn_82C4E5E8(puVar17);
            }
            uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
            uVar8 = uVar7 + 0x10;
          } while ((uVar8 & 0xffffffff) < (uVar16 & 0xffffffff));
        }
        uVar8 = *puVar17;
        *(int *)(puVar17 + 1) = (int)(uVar7 - uVar16);
        *puVar17 = uVar8 << (uVar16 & 0x7f);
        if ((longlong)(uVar7 - uVar16) < 0) {
          fn_82C4E5E8(puVar17);
        }
        if (((uVar8 >> (0x40 - uVar16 & 0x7f) & 0xffffffff) + lVar14 & 0xffffffff) == 0) {
          uVar13 = 1;
        }
        else {
          if (*(int *)(param_1 + 0x5710) == 0) {
            uVar3 = fn_82C58408(param_1,5);
            iVar10 = (int)uVar3;
          }
          else {
            uVar3 = fn_82C7F300();
            iVar10 = (int)uVar3;
          }
          if (iVar10 != 0) {
            return uVar3;
          }
          if ((*(int *)(param_1 + 0x548c) != 0) && (iVar10 = 0, 0 < *(int *)(param_1 + 0x90))) {
            iVar9 = 0;
            do {
              if (iVar5 != 0) {
                uVar2 = *(uint *)(*(int *)(param_1 + 0x110) + iVar9);
                *(uint *)(*(int *)(param_1 + 0x110) + iVar9) =
                     uVar2 >> 0x14 & 0x800 | uVar2 & 0xfffff7ff;
              }
              iVar10 = iVar10 + 1;
              iVar9 = iVar9 + 0x18;
            } while (iVar10 < *(int *)(param_1 + 0x90));
          }
        }
      }
    }
    if (iVar5 != 0) {
      *(undefined4 *)(param_1 + 0x56d8) = 0;
    }
  }
  if ((uVar13 & 1) == 0) {
    if (iVar5 != 0) {
      **(undefined2 **)(param_1 + 0x770) = 0x80;
      *(undefined2 *)(*(int *)(param_1 + 0x770) + 0x10) = 0x80;
      **(undefined2 **)(param_1 + 0x774) = 0x80;
      *(undefined2 *)(*(int *)(param_1 + 0x774) + 0x10) = 0x80;
      goto LAB_82c62120;
    }
  }
  else if (iVar5 != 0) {
    **(undefined2 **)(param_1 + 0x770) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0x770) + 0x10) = 0;
    **(undefined2 **)(param_1 + 0x774) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0x774) + 0x10) = 0;
LAB_82c62120:
    iVar10 = param_1 + 0xfd0;
    if (*(int *)(param_1 + 0xd8c) == 0) {
      iVar10 = param_1 + 0x14d0;
    }
    *(int *)(param_1 + 0x19d0) = iVar10;
    iVar10 = param_1 + 0x19e0;
    if (*(int *)(param_1 + 0xd8c) == 0) {
      iVar10 = param_1 + 0x29e0;
    }
    *(int *)(param_1 + 0x39e0) = iVar10;
  }
  puVar17 = *(ulonglong **)(param_1 + 0x54);
  if (*(int *)((int)puVar17 + 0x14) != 0) {
    return 1;
  }
  if (iVar11 < 1) {
    return 1;
  }
  if (0x1f < iVar11) {
    return 1;
  }
  if ((*(int *)(param_1 + 0xfa8) < 9) && (iVar5 != 0)) {
    *(int *)(param_1 + 0xb7c) = param_1 + 0xb38;
    *(int *)(param_1 + 0xb88) = param_1 + 0xb0c;
  }
  iVar11 = *(int *)(param_1 + 0x120);
  if (iVar11 == 0) {
LAB_82c62714:
    uVar3 = fn_82C5F8E8(param_1,*(undefined4 *)(param_1 + 0x3ca8));
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    puVar17 = *(ulonglong **)(param_1 + 0x54);
    if (*(int *)((int)puVar17 + 0x14) != 0) {
      return 1;
    }
    if (iVar5 != 0) {
      *(undefined4 *)(param_1 + 0x194) = 0;
    }
    uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
    uVar16 = 1;
    lVar12 = 0;
    uVar8 = uVar7 + 0x10;
    if ((uVar8 & 0xffffffff) == 0) {
      do {
        if ((uVar8 & 0xffffffff) == 0) break;
        uVar16 = uVar16 - uVar8;
        *(int *)(puVar17 + 1) = (int)(uVar7 - uVar8);
        lVar12 = (ulonglong)
                 (uint)((int)(*puVar17 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar16 & 0x3f)) + lVar12;
        *puVar17 = *puVar17 << (uVar8 & 0x7f);
        if ((longlong)(uVar7 - uVar8) < 0) {
          fn_82C4E5E8(puVar17);
        }
        uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
        uVar8 = uVar7 + 0x10;
      } while ((uVar8 & 0xffffffff) < (uVar16 & 0xffffffff));
    }
    *(int *)(puVar17 + 1) = (int)(uVar7 - uVar16);
    uVar8 = (*puVar17 >> (0x40 - uVar16 & 0x7f) & 0xffffffff) + lVar12;
    iVar11 = (int)uVar8;
    *puVar17 = *puVar17 << (uVar16 & 0x7f);
    if ((longlong)(uVar7 - uVar16) < 0) {
      fn_82C4E5E8(puVar17);
    }
    if ((uVar8 & 0xffffffff) != 0) {
      puVar17 = *(ulonglong **)(param_1 + 0x54);
      uVar16 = 1;
      iVar9 = 0;
      uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
      uVar8 = uVar7 + 0x10;
      iVar10 = 0;
      if ((uVar8 & 0xffffffff) == 0) {
        do {
          iVar9 = iVar10;
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar16 = uVar16 - uVar8;
          *(int *)(puVar17 + 1) = (int)(uVar7 - uVar8);
          iVar9 = ((int)(*puVar17 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar16 & 0x3f)) + iVar9;
          *puVar17 = *puVar17 << (uVar8 & 0x7f);
          if ((longlong)(uVar7 - uVar8) < 0) {
            fn_82C4E5E8(puVar17);
          }
          uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
          uVar8 = uVar7 + 0x10;
          iVar10 = iVar9;
        } while ((uVar8 & 0xffffffff) < (uVar16 & 0xffffffff));
      }
      uVar8 = *puVar17;
      *(int *)(puVar17 + 1) = (int)(uVar7 - uVar16);
      *puVar17 = uVar8 << (uVar16 & 0x7f);
      if ((longlong)(uVar7 - uVar16) < 0) {
        fn_82C4E5E8(puVar17);
      }
      iVar11 = (int)(uVar8 >> (0x40 - uVar16 & 0x7f)) + iVar9 + iVar11;
    }
    if (iVar5 != 0) {
      *(int *)(param_1 + 0xb94) = iVar11;
    }
    puVar17 = *(ulonglong **)(param_1 + 0x54);
    uVar16 = 1;
    lVar12 = 0;
    uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
    uVar8 = uVar7 + 0x10;
    if ((uVar8 & 0xffffffff) == 0) {
      do {
        if ((uVar8 & 0xffffffff) == 0) break;
        uVar16 = uVar16 - uVar8;
        *(int *)(puVar17 + 1) = (int)(uVar7 - uVar8);
        lVar12 = (ulonglong)
                 (uint)((int)(*puVar17 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar16 & 0x3f)) + lVar12;
        *puVar17 = *puVar17 << (uVar8 & 0x7f);
        if ((longlong)(uVar7 - uVar8) < 0) {
          fn_82C4E5E8(puVar17);
        }
        uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
        uVar8 = uVar7 + 0x10;
      } while ((uVar8 & 0xffffffff) < (uVar16 & 0xffffffff));
    }
    *(int *)(puVar17 + 1) = (int)(uVar7 - uVar16);
    uVar8 = (*puVar17 >> (0x40 - uVar16 & 0x7f) & 0xffffffff) + lVar12;
    iVar11 = (int)uVar8;
    *puVar17 = *puVar17 << (uVar16 & 0x7f);
    if ((longlong)(uVar7 - uVar16) < 0) {
      fn_82C4E5E8(puVar17);
    }
    if ((uVar8 & 0xffffffff) != 0) {
      puVar17 = *(ulonglong **)(param_1 + 0x54);
      uVar16 = 1;
      iVar9 = 0;
      uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
      uVar8 = uVar7 + 0x10;
      iVar10 = 0;
      if ((uVar8 & 0xffffffff) == 0) {
        do {
          iVar9 = iVar10;
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar16 = uVar16 - uVar8;
          *(int *)(puVar17 + 1) = (int)(uVar7 - uVar8);
          iVar9 = ((int)(*puVar17 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar16 & 0x3f)) + iVar9;
          *puVar17 = *puVar17 << (uVar8 & 0x7f);
          if ((longlong)(uVar7 - uVar8) < 0) {
            fn_82C4E5E8(puVar17);
          }
          uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
          uVar8 = uVar7 + 0x10;
          iVar10 = iVar9;
        } while ((uVar8 & 0xffffffff) < (uVar16 & 0xffffffff));
      }
      uVar8 = *puVar17;
      *(int *)(puVar17 + 1) = (int)(uVar7 - uVar16);
      *puVar17 = uVar8 << (uVar16 & 0x7f);
      if ((longlong)(uVar7 - uVar16) < 0) {
        fn_82C4E5E8(puVar17);
      }
      iVar11 = (int)(uVar8 >> (0x40 - uVar16 & 0x7f)) + iVar9 + iVar11;
    }
    puVar17 = *(ulonglong **)(param_1 + 0x54);
    uVar7 = 1;
    if (iVar5 == 0) {
      uVar8 = (ulonglong)*(uint *)(puVar17 + 1);
      uVar16 = uVar8 + 0x10;
      if ((uVar16 & 0xffffffff) == 0) {
        do {
          if ((uVar16 & 0xffffffff) == 0) break;
          uVar6 = *puVar17;
          uVar7 = uVar7 - uVar16;
          *(int *)(puVar17 + 1) = (int)(uVar8 - uVar16);
          *puVar17 = uVar6 << (uVar16 & 0x7f);
          if ((longlong)(uVar8 - uVar16) < 0) {
            fn_82C4E5E8(puVar17,uVar6 >> (0x40 - uVar16 & 0x7f) & 0xffffffff);
          }
          uVar8 = (ulonglong)*(uint *)(puVar17 + 1);
          uVar16 = uVar8 + 0x10;
        } while ((uVar16 & 0xffffffff) < (uVar7 & 0xffffffff));
      }
      *puVar17 = *puVar17 << (uVar7 & 0x7f);
      *(int *)(puVar17 + 1) = (int)(uVar8 - uVar7);
      if ((longlong)(uVar8 - uVar7) < 0) {
        fn_82C4E5E8(puVar17);
      }
    }
    else {
      *(int *)(param_1 + 0xba0) = iVar11;
      *(int *)(param_1 + 0xba8) = iVar11;
      *(int *)(param_1 + 0xba4) = iVar11;
      uVar8 = (ulonglong)*(uint *)(puVar17 + 1);
      uVar16 = uVar8 + 0x10;
      if ((uVar16 & 0xffffffff) == 0) {
        do {
          if ((uVar16 & 0xffffffff) == 0) break;
          uVar7 = uVar7 - uVar16;
          *(int *)(puVar17 + 1) = (int)(uVar8 - uVar16);
          iVar15 = ((int)(*puVar17 >> (0x40 - uVar16 & 0x7f)) << ((uint)uVar7 & 0x3f)) + iVar15;
          *puVar17 = *puVar17 << (uVar16 & 0x7f);
          if ((longlong)(uVar8 - uVar16) < 0) {
            fn_82C4E5E8(puVar17);
          }
          uVar8 = (ulonglong)*(uint *)(puVar17 + 1);
          uVar16 = uVar8 + 0x10;
        } while ((uVar16 & 0xffffffff) < (uVar7 & 0xffffffff));
      }
      uVar16 = *puVar17;
      *(int *)(puVar17 + 1) = (int)(uVar8 - uVar7);
      *puVar17 = uVar16 << (uVar7 & 0x7f);
      if ((longlong)(uVar8 - uVar7) < 0) {
        fn_82C4E5E8(puVar17);
      }
      *(int *)(param_1 + 0x82c) = (int)(uVar16 >> (0x40 - uVar7 & 0x7f)) + iVar15;
    }
    if (*(int *)(param_1 + 0xfc8) == 0) {
      fn_82C9D918(param_1);
    }
    else {
      fn_82C58FB8(param_1,0);
    }
  }
  else {
    if (iVar11 != 4) {
      if (*(int *)(param_1 + 0x5440) != 0) {
        uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
        uVar16 = 1;
        lVar12 = 0;
        uVar8 = uVar7 + 0x10;
        if ((uVar8 & 0xffffffff) == 0) {
          do {
            if ((uVar8 & 0xffffffff) == 0) break;
            uVar16 = uVar16 - uVar8;
            *(int *)(puVar17 + 1) = (int)(uVar7 - uVar8);
            lVar12 = (ulonglong)
                     (uint)((int)(*puVar17 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar16 & 0x3f)) +
                     lVar12;
            *puVar17 = *puVar17 << (uVar8 & 0x7f);
            if ((longlong)(uVar7 - uVar8) < 0) {
              fn_82C4E5E8(puVar17);
            }
            uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
            uVar8 = uVar7 + 0x10;
          } while ((uVar8 & 0xffffffff) < (uVar16 & 0xffffffff));
        }
        *(int *)(puVar17 + 1) = (int)(uVar7 - uVar16);
        lVar12 = (*puVar17 >> (0x40 - uVar16 & 0x7f) & 0xffffffff) + lVar12;
        *puVar17 = *puVar17 << (uVar16 & 0x7f);
        if ((longlong)(uVar7 - uVar16) < 0) {
          fn_82C4E5E8(puVar17);
        }
        if ((int)lVar12 != 0) {
          puVar17 = *(ulonglong **)(param_1 + 0x54);
          uVar16 = 1;
          lVar14 = 0;
          uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
          uVar8 = uVar7 + 0x10;
          if ((uVar8 & 0xffffffff) == 0) {
            do {
              if ((uVar8 & 0xffffffff) == 0) break;
              uVar16 = uVar16 - uVar8;
              *(int *)(puVar17 + 1) = (int)(uVar7 - uVar8);
              lVar14 = (ulonglong)
                       (uint)((int)(*puVar17 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar16 & 0x3f)) +
                       lVar14;
              *puVar17 = *puVar17 << (uVar8 & 0x7f);
              if ((longlong)(uVar7 - uVar8) < 0) {
                fn_82C4E5E8(puVar17);
              }
              uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
              uVar8 = uVar7 + 0x10;
            } while ((uVar8 & 0xffffffff) < (uVar16 & 0xffffffff));
          }
          uVar8 = *puVar17;
          *(int *)(puVar17 + 1) = (int)(uVar7 - uVar16);
          *puVar17 = uVar8 << (uVar16 & 0x7f);
          if ((longlong)(uVar7 - uVar16) < 0) {
            fn_82C4E5E8(puVar17);
          }
          lVar12 = (uVar8 >> (0x40 - uVar16 & 0x7f) & 0xffffffff) + lVar14 + lVar12;
        }
        if ((int)lVar12 == 2) {
          puVar17 = *(ulonglong **)(param_1 + 0x54);
          uVar16 = 1;
          lVar12 = 0;
          uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
          uVar8 = uVar7 + 0x10;
          if ((uVar8 & 0xffffffff) == 0) {
            do {
              if ((uVar8 & 0xffffffff) == 0) break;
              uVar16 = uVar16 - uVar8;
              *(int *)(puVar17 + 1) = (int)(uVar7 - uVar8);
              lVar12 = (ulonglong)
                       (uint)((int)(*puVar17 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar16 & 0x3f)) +
                       lVar12;
              *puVar17 = *puVar17 << (uVar8 & 0x7f);
              if ((longlong)(uVar7 - uVar8) < 0) {
                fn_82C4E5E8(puVar17);
              }
              uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
              uVar8 = uVar7 + 0x10;
            } while ((uVar8 & 0xffffffff) < (uVar16 & 0xffffffff));
          }
          uVar8 = *puVar17;
          *(int *)(puVar17 + 1) = (int)(uVar7 - uVar16);
          *puVar17 = uVar8 << (uVar16 & 0x7f);
          if ((longlong)(uVar7 - uVar16) < 0) {
            fn_82C4E5E8(puVar17);
          }
          lVar12 = (uVar8 >> (0x40 - uVar16 & 0x7f) & 0xffffffff) + lVar12 + 2;
        }
      }
      if (iVar5 != 0) {
        *(int *)(param_1 + 0x198) = (int)lVar12;
      }
      fn_82C531B8(param_1,lVar12);
      iVar11 = *(int *)(param_1 + 0x120);
      if (iVar11 == 1) {
        if (iVar5 != 0) {
          *(undefined4 *)(param_1 + 0x56d8) = *(undefined4 *)(param_1 + 0x198);
        }
      }
      else if (*(int *)(param_1 + 0x198) < *(int *)(param_1 + 0x56d8)) {
        return 1;
      }
    }
    if ((iVar11 == 0) || (iVar11 == 4)) goto LAB_82c62714;
    uVar3 = fn_82C5FAB0(param_1);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    puVar17 = *(ulonglong **)(param_1 + 0x54);
    uVar16 = 1;
    lVar12 = 0;
    uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
    uVar8 = uVar7 + 0x10;
    if ((uVar8 & 0xffffffff) == 0) {
      do {
        if ((uVar8 & 0xffffffff) == 0) break;
        uVar16 = uVar16 - uVar8;
        *(int *)(puVar17 + 1) = (int)(uVar7 - uVar8);
        lVar12 = (ulonglong)
                 (uint)((int)(*puVar17 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar16 & 0x3f)) + lVar12;
        *puVar17 = *puVar17 << (uVar8 & 0x7f);
        if ((longlong)(uVar7 - uVar8) < 0) {
          fn_82C4E5E8(puVar17);
        }
        uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
        uVar8 = uVar7 + 0x10;
      } while ((uVar8 & 0xffffffff) < (uVar16 & 0xffffffff));
    }
    *(int *)(puVar17 + 1) = (int)(uVar7 - uVar16);
    uVar8 = (*puVar17 >> (0x40 - uVar16 & 0x7f) & 0xffffffff) + lVar12;
    iVar11 = (int)uVar8;
    *puVar17 = *puVar17 << (uVar16 & 0x7f);
    if ((longlong)(uVar7 - uVar16) < 0) {
      fn_82C4E5E8(puVar17);
    }
    if ((uVar8 & 0xffffffff) != 0) {
      puVar17 = *(ulonglong **)(param_1 + 0x54);
      uVar16 = 1;
      iVar9 = 0;
      uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
      uVar8 = uVar7 + 0x10;
      iVar10 = 0;
      if ((uVar8 & 0xffffffff) == 0) {
        do {
          iVar9 = iVar10;
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar16 = uVar16 - uVar8;
          *(int *)(puVar17 + 1) = (int)(uVar7 - uVar8);
          iVar9 = ((int)(*puVar17 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar16 & 0x3f)) + iVar9;
          *puVar17 = *puVar17 << (uVar8 & 0x7f);
          if ((longlong)(uVar7 - uVar8) < 0) {
            fn_82C4E5E8(puVar17);
          }
          uVar7 = (ulonglong)*(uint *)(puVar17 + 1);
          uVar8 = uVar7 + 0x10;
          iVar10 = iVar9;
        } while ((uVar8 & 0xffffffff) < (uVar16 & 0xffffffff));
      }
      uVar8 = *puVar17;
      *(int *)(puVar17 + 1) = (int)(uVar7 - uVar16);
      *puVar17 = uVar8 << (uVar16 & 0x7f);
      if ((longlong)(uVar7 - uVar16) < 0) {
        fn_82C4E5E8(puVar17);
      }
      iVar11 = (int)(uVar8 >> (0x40 - uVar16 & 0x7f)) + iVar9 + iVar11;
    }
    puVar17 = *(ulonglong **)(param_1 + 0x54);
    uVar7 = 1;
    if (iVar5 == 0) {
      uVar8 = (ulonglong)*(uint *)(puVar17 + 1);
      uVar16 = uVar8 + 0x10;
      if ((uVar16 & 0xffffffff) == 0) {
        do {
          if ((uVar16 & 0xffffffff) == 0) break;
          uVar6 = *puVar17;
          uVar7 = uVar7 - uVar16;
          *(int *)(puVar17 + 1) = (int)(uVar8 - uVar16);
          *puVar17 = uVar6 << (uVar16 & 0x7f);
          if ((longlong)(uVar8 - uVar16) < 0) {
            fn_82C4E5E8(puVar17,uVar6 >> (0x40 - uVar16 & 0x7f) & 0xffffffff);
          }
          uVar8 = (ulonglong)*(uint *)(puVar17 + 1);
          uVar16 = uVar8 + 0x10;
        } while ((uVar16 & 0xffffffff) < (uVar7 & 0xffffffff));
      }
      uVar6 = *puVar17;
      uVar16 = uVar6 << (uVar7 & 0x7f);
      *(int *)(puVar17 + 1) = (int)(uVar8 - uVar7);
      *puVar17 = uVar16;
      if ((longlong)(uVar8 - uVar7) < 0) {
        fn_82C4E5E8(puVar17,uVar16,uVar6 >> (0x40 - uVar7 & 0x7f));
      }
    }
    else {
      *(int *)(param_1 + 0xb94) = iVar11;
      *(int *)(param_1 + 0xb98) = iVar11;
      *(int *)(param_1 + 0xba0) = iVar11;
      *(int *)(param_1 + 0xba8) = iVar11;
      *(int *)(param_1 + 0xb9c) = iVar11;
      *(int *)(param_1 + 0xba4) = iVar11;
      uVar8 = (ulonglong)*(uint *)(puVar17 + 1);
      uVar16 = uVar8 + 0x10;
      if ((uVar16 & 0xffffffff) == 0) {
        do {
          if ((uVar16 & 0xffffffff) == 0) break;
          uVar7 = uVar7 - uVar16;
          *(int *)(puVar17 + 1) = (int)(uVar8 - uVar16);
          iVar15 = ((int)(*puVar17 >> (0x40 - uVar16 & 0x7f)) << ((uint)uVar7 & 0x3f)) + iVar15;
          *puVar17 = *puVar17 << (uVar16 & 0x7f);
          if ((longlong)(uVar8 - uVar16) < 0) {
            fn_82C4E5E8(puVar17);
          }
          uVar8 = (ulonglong)*(uint *)(puVar17 + 1);
          uVar16 = uVar8 + 0x10;
        } while ((uVar16 & 0xffffffff) < (uVar7 & 0xffffffff));
      }
      uVar16 = *puVar17;
      *(int *)(puVar17 + 1) = (int)(uVar8 - uVar7);
      *puVar17 = uVar16 << (uVar7 & 0x7f);
      if ((longlong)(uVar8 - uVar7) < 0) {
        fn_82C4E5E8(puVar17);
      }
      *(int *)(param_1 + 0x82c) = (int)(uVar16 >> (0x40 - uVar7 & 0x7f)) + iVar15;
    }
  }
  if (*(int *)(*(int *)(param_1 + 0x54) + 0x14) != 0) {
    return 1;
  }
  if (iVar5 == 0) {
    return 0;
  }
  fn_82C49098(*(undefined4 *)(param_1 + 0x6070),param_1,uVar4,auStack_a0);
  uVar3 = fn_82C493B0(param_1,uVar4,auStack_a0);
  iVar5 = (int)uVar3;
joined_r0x82c62bcc:
  if (iVar5 == 0) {
    *(uint *)(param_1 + 0xbbc) = uVar13;
    return 0;
  }
  return uVar3;
}

