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
extern int fn_82C4E470();
extern int fn_82C4E5E8();


void fn_82C66328(int param_1,undefined4 *param_2,int param_3,longlong param_4)

{
  char cVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar9;
  int iVar8;
  
  puVar2 = *(ulonglong **)(param_1 + 0x54);
  iVar8 = (int)((*puVar2 >> (0x40U - param_4 & 0x7f) & 0xffffffff) << 1);
  fn_82C4E470(puVar2,*(undefined1 *)(iVar8 + param_3));
  cVar1 = *(char *)(iVar8 + param_3 + 1);
  if (cVar1 == -1) {
    *(undefined4 *)((int)puVar2 + 0x14) = 3;
  }
  puVar2 = *(ulonglong **)(param_1 + 0x54);
  if (*(int *)((int)puVar2 + 0x14) == 0) {
    uVar6 = (ulonglong)cVar1;
    if (cVar1 == '\0') {
      *param_2 = 0;
      **(undefined4 **)(param_1 + 0x6e4) = 0;
      return;
    }
    uVar4 = (ulonglong)*(uint *)(puVar2 + 1);
    lVar7 = 0;
    iVar8 = 0;
    uVar5 = uVar4 + 0x10;
    if (cVar1 < '\t') {
      if ((uVar6 & 0xffffffff) < 0x21) {
        if ((uVar5 & 0xffffffff) < (uVar6 & 0xffffffff)) {
          do {
            iVar8 = (int)lVar7;
            if ((uVar5 & 0xffffffff) == 0) break;
            uVar6 = uVar6 - uVar5;
            *(int *)(puVar2 + 1) = (int)(uVar4 - uVar5);
            lVar7 = (ulonglong)
                    (uint)((int)(*puVar2 >> (0x40 - uVar5 & 0x7f)) << ((uint)uVar6 & 0x3f)) + lVar7;
            iVar8 = (int)lVar7;
            *puVar2 = *puVar2 << (uVar5 & 0x7f);
            if ((longlong)(uVar4 - uVar5) < 0) {
              fn_82C4E5E8(puVar2);
            }
            uVar4 = (ulonglong)*(uint *)(puVar2 + 1);
            uVar5 = uVar4 + 0x10;
          } while ((uVar5 & 0xffffffff) < (uVar6 & 0xffffffff));
        }
        *(int *)(puVar2 + 1) = (int)(uVar4 - uVar6);
        uVar9 = (int)(*puVar2 >> (0x40 - uVar6 & 0x7f)) + iVar8;
        *puVar2 = *puVar2 << (uVar6 & 0x7f);
        if ((longlong)(uVar4 - uVar6) < 0) {
          fn_82C4E5E8(puVar2);
        }
      }
      else {
        uVar9 = 0;
      }
      uVar9 = uVar9 & 0xff;
      if (*(int *)(*(int *)(param_1 + 0x54) + 0x14) == 0) {
        *param_2 = 0;
        if ((1 << ((int)cVar1 - 1U & 0x3f) & uVar9) == 0) {
          **(int **)(param_1 + 0x6e4) = -(0xff >> (8U - (int)cVar1 & 0x3f) & ~uVar9);
          return;
        }
        **(uint **)(param_1 + 0x6e4) = uVar9;
        return;
      }
    }
    else {
      if ((uVar6 & 0xffffffff) < 0x21) {
        if ((uVar5 & 0xffffffff) < (uVar6 & 0xffffffff)) {
          do {
            if ((uVar5 & 0xffffffff) == 0) break;
            uVar6 = uVar6 - uVar5;
            *(int *)(puVar2 + 1) = (int)(uVar4 - uVar5);
            lVar7 = (ulonglong)
                    (uint)((int)(*puVar2 >> (0x40 - uVar5 & 0x7f)) << ((uint)uVar6 & 0x3f)) + lVar7;
            *puVar2 = *puVar2 << (uVar5 & 0x7f);
            if ((longlong)(uVar4 - uVar5) < 0) {
              fn_82C4E5E8(puVar2);
            }
            uVar4 = (ulonglong)*(uint *)(puVar2 + 1);
            uVar5 = uVar4 + 0x10;
          } while ((uVar5 & 0xffffffff) < (uVar6 & 0xffffffff));
        }
        *(int *)(puVar2 + 1) = (int)(uVar4 - uVar6);
        uVar5 = (*puVar2 >> (0x40 - uVar6 & 0x7f) & 0xffffffff) + lVar7;
        *puVar2 = *puVar2 << (uVar6 & 0x7f);
        if ((longlong)(uVar4 - uVar6) < 0) {
          fn_82C4E5E8(puVar2);
        }
      }
      else {
        uVar5 = 0;
      }
      if (*(int *)(*(int *)(param_1 + 0x54) + 0x14) == 0) {
        *param_2 = 0;
        if (((uint)(1 << ((int)cVar1 - 1U & 0x3f)) & uVar5) == 0) {
          **(int **)(param_1 + 0x6e4) = -(0xffff >> (0x10U - (int)cVar1 & 0x3f) & ~(uint)uVar5);
        }
        else {
          **(uint **)(param_1 + 0x6e4) = (uint)uVar5;
        }
        plVar3 = *(longlong **)(param_1 + 0x54);
        uVar9 = *(uint *)(plVar3 + 1);
        *plVar3 = *plVar3 << 1;
        *(int *)(plVar3 + 1) = (int)((ulonglong)uVar9 - 1);
        if (-1 < (longlong)((ulonglong)uVar9 - 1)) {
          return;
        }
        fn_82C4E5E8();
        return;
      }
    }
  }
  *param_2 = 1;
  **(undefined4 **)(param_1 + 0x6e4) = 0;
  return;
}

