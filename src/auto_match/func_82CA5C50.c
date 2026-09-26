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


undefined8 fn_82CA5C50(int param_1,int param_2)

{
  uint uVar1;
  ulonglong *puVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong *plVar9;
  
  if (param_2 != 0) {
    plVar9 = *(longlong **)(param_1 + 0x54);
    lVar4 = *plVar9;
    uVar1 = *(uint *)(plVar9 + 1);
    *plVar9 = lVar4 << 1;
    *(int *)(plVar9 + 1) = (int)((ulonglong)uVar1 - 1);
    if ((longlong)((ulonglong)uVar1 - 1) < 0) {
      fn_82C4E5E8();
    }
    if (-1 < lVar4) {
      plVar9 = *(longlong **)(param_1 + 0x54);
      if (*(int *)((int)plVar9 + 0x14) == 0) {
        uVar6 = (ulonglong)*(uint *)(plVar9 + 1) & 7;
      }
      else {
        uVar6 = 0;
      }
      uVar5 = (ulonglong)*(uint *)(plVar9 + 1);
      uVar7 = uVar5 + 0x10;
      if ((uVar6 < 0x21) && (uVar6 != 0)) {
        if ((uVar7 & 0xffffffff) < uVar6) {
          do {
            if ((uVar7 & 0xffffffff) == 0) break;
            uVar6 = uVar6 - uVar7;
            *plVar9 = *plVar9 << (uVar7 & 0x7f);
            *(int *)(plVar9 + 1) = (int)(uVar5 - uVar7);
            if ((longlong)(uVar5 - uVar7) < 0) {
              fn_82C4E5E8(plVar9);
            }
            uVar5 = (ulonglong)*(uint *)(plVar9 + 1);
            uVar7 = uVar5 + 0x10;
          } while ((uVar7 & 0xffffffff) < (uVar6 & 0xffffffff));
        }
        *plVar9 = *plVar9 << (uVar6 & 0x7f);
        *(int *)(plVar9 + 1) = (int)(uVar5 - uVar6);
        if ((longlong)(uVar5 - uVar6) < 0) {
          fn_82C4E5E8(plVar9);
        }
      }
      puVar2 = *(ulonglong **)(param_1 + 0x54);
      uVar7 = 0x18;
      iVar8 = 0;
      uVar6 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar5 = uVar6 + 0x10;
      iVar3 = 0;
      if ((uVar5 & 0xffffffff) < 0x18) {
        do {
          iVar8 = iVar3;
          if ((uVar5 & 0xffffffff) == 0) break;
          uVar7 = uVar7 - uVar5;
          *(int *)(puVar2 + 1) = (int)(uVar6 - uVar5);
          iVar8 = ((int)(*puVar2 >> (0x40 - uVar5 & 0x7f)) << ((uint)uVar7 & 0x3f)) + iVar8;
          *puVar2 = *puVar2 << (uVar5 & 0x7f);
          if ((longlong)(uVar6 - uVar5) < 0) {
            fn_82C4E5E8(puVar2);
          }
          uVar6 = (ulonglong)*(uint *)(puVar2 + 1);
          uVar5 = uVar6 + 0x10;
          iVar3 = iVar8;
        } while ((uVar5 & 0xffffffff) < (uVar7 & 0xffffffff));
      }
      *(int *)(puVar2 + 1) = (int)(uVar6 - uVar7);
      iVar8 = (int)(*puVar2 >> (0x40 - uVar7 & 0x7f)) + iVar8;
      *puVar2 = *puVar2 << (uVar7 & 0x7f);
      if ((longlong)(uVar6 - uVar7) < 0) {
        fn_82C4E5E8(puVar2);
      }
      if (iVar8 == 0xaa) {
        plVar9 = *(longlong **)(param_1 + 0x54);
        uVar7 = 0x18;
        uVar6 = (ulonglong)*(uint *)(plVar9 + 1);
        uVar5 = uVar6 + 0x10;
        if ((uVar5 & 0xffffffff) < 0x18) {
          do {
            if ((uVar5 & 0xffffffff) == 0) break;
            uVar7 = uVar7 - uVar5;
            *plVar9 = *plVar9 << (uVar5 & 0x7f);
            *(int *)(plVar9 + 1) = (int)(uVar6 - uVar5);
            if ((longlong)(uVar6 - uVar5) < 0) {
              fn_82C4E5E8(plVar9);
            }
            uVar6 = (ulonglong)*(uint *)(plVar9 + 1);
            uVar5 = uVar6 + 0x10;
          } while ((uVar5 & 0xffffffff) < (uVar7 & 0xffffffff));
        }
        *plVar9 = *plVar9 << (uVar7 & 0x7f);
        *(int *)(plVar9 + 1) = (int)(uVar6 - uVar7);
        if ((longlong)(uVar6 - uVar7) < 0) {
          fn_82C4E5E8(plVar9);
        }
        plVar9 = *(longlong **)(param_1 + 0x54);
        uVar7 = 0x10;
        uVar6 = (ulonglong)*(uint *)(plVar9 + 1);
        uVar5 = uVar6 + 0x10;
        if ((uVar5 & 0xffffffff) < 0x10) {
          do {
            if ((uVar5 & 0xffffffff) == 0) break;
            uVar7 = uVar7 - uVar5;
            *plVar9 = *plVar9 << (uVar5 & 0x7f);
            *(int *)(plVar9 + 1) = (int)(uVar6 - uVar5);
            if ((longlong)(uVar6 - uVar5) < 0) {
              fn_82C4E5E8(plVar9);
            }
            uVar6 = (ulonglong)*(uint *)(plVar9 + 1);
            uVar5 = uVar6 + 0x10;
          } while ((uVar5 & 0xffffffff) < (uVar7 & 0xffffffff));
        }
      }
      else {
        if (iVar8 != 0xab) {
          return 1;
        }
        plVar9 = *(longlong **)(param_1 + 0x54);
        uVar7 = 0x18;
        uVar6 = (ulonglong)*(uint *)(plVar9 + 1);
        uVar5 = uVar6 + 0x10;
        if ((uVar5 & 0xffffffff) < 0x18) {
          do {
            if ((uVar5 & 0xffffffff) == 0) break;
            uVar7 = uVar7 - uVar5;
            *plVar9 = *plVar9 << (uVar5 & 0x7f);
            *(int *)(plVar9 + 1) = (int)(uVar6 - uVar5);
            if ((longlong)(uVar6 - uVar5) < 0) {
              fn_82C4E5E8(plVar9);
            }
            uVar6 = (ulonglong)*(uint *)(plVar9 + 1);
            uVar5 = uVar6 + 0x10;
          } while ((uVar5 & 0xffffffff) < (uVar7 & 0xffffffff));
        }
        *plVar9 = *plVar9 << (uVar7 & 0x7f);
        *(int *)(plVar9 + 1) = (int)(uVar6 - uVar7);
        if ((longlong)(uVar6 - uVar7) < 0) {
          fn_82C4E5E8(plVar9);
        }
        plVar9 = *(longlong **)(param_1 + 0x54);
        uVar7 = 0x18;
        uVar6 = (ulonglong)*(uint *)(plVar9 + 1);
        uVar5 = uVar6 + 0x10;
        if ((uVar5 & 0xffffffff) < 0x18) {
          do {
            if ((uVar5 & 0xffffffff) == 0) break;
            uVar7 = uVar7 - uVar5;
            *plVar9 = *plVar9 << (uVar5 & 0x7f);
            *(int *)(plVar9 + 1) = (int)(uVar6 - uVar5);
            if ((longlong)(uVar6 - uVar5) < 0) {
              fn_82C4E5E8(plVar9);
            }
            uVar6 = (ulonglong)*(uint *)(plVar9 + 1);
            uVar5 = uVar6 + 0x10;
          } while ((uVar5 & 0xffffffff) < (uVar7 & 0xffffffff));
        }
        *plVar9 = *plVar9 << (uVar7 & 0x7f);
        *(int *)(plVar9 + 1) = (int)(uVar6 - uVar7);
        if ((longlong)(uVar6 - uVar7) < 0) {
          fn_82C4E5E8(plVar9);
        }
        plVar9 = *(longlong **)(param_1 + 0x54);
        uVar7 = 0x18;
        uVar6 = (ulonglong)*(uint *)(plVar9 + 1);
        uVar5 = uVar6 + 0x10;
        if ((uVar5 & 0xffffffff) < 0x18) {
          do {
            if ((uVar5 & 0xffffffff) == 0) break;
            uVar7 = uVar7 - uVar5;
            *plVar9 = *plVar9 << (uVar5 & 0x7f);
            *(int *)(plVar9 + 1) = (int)(uVar6 - uVar5);
            if ((longlong)(uVar6 - uVar5) < 0) {
              fn_82C4E5E8(plVar9);
            }
            uVar6 = (ulonglong)*(uint *)(plVar9 + 1);
            uVar5 = uVar6 + 0x10;
          } while ((uVar5 & 0xffffffff) < (uVar7 & 0xffffffff));
        }
        *plVar9 = *plVar9 << (uVar7 & 0x7f);
        *(int *)(plVar9 + 1) = (int)(uVar6 - uVar7);
        if ((longlong)(uVar6 - uVar7) < 0) {
          fn_82C4E5E8(plVar9);
        }
        plVar9 = *(longlong **)(param_1 + 0x54);
        uVar7 = 0x10;
        uVar6 = (ulonglong)*(uint *)(plVar9 + 1);
        uVar5 = uVar6 + 0x10;
        if ((uVar5 & 0xffffffff) < 0x10) {
          do {
            if ((uVar5 & 0xffffffff) == 0) break;
            uVar7 = uVar7 - uVar5;
            *plVar9 = *plVar9 << (uVar5 & 0x7f);
            *(int *)(plVar9 + 1) = (int)(uVar6 - uVar5);
            if ((longlong)(uVar6 - uVar5) < 0) {
              fn_82C4E5E8(plVar9);
            }
            uVar6 = (ulonglong)*(uint *)(plVar9 + 1);
            uVar5 = uVar6 + 0x10;
          } while ((uVar5 & 0xffffffff) < (uVar7 & 0xffffffff));
        }
      }
      *plVar9 = *plVar9 << (uVar7 & 0x7f);
      *(int *)(plVar9 + 1) = (int)(uVar6 - uVar7);
      if ((longlong)(uVar6 - uVar7) < 0) {
        fn_82C4E5E8(plVar9);
      }
    }
  }
  return 0;
}

