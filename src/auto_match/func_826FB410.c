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
extern int fn_8267C498();
extern unsigned int iStack_40;


void fn_826FB410(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  longlong lVar9;
  byte bStack_41;
  int iStack_40;
  
  if (*param_1 != 0) {
    iStack_40 = *param_2;
    if (iStack_40 != 0) {
      *(int *)(iStack_40 + 4) = *(int *)(iStack_40 + 4) + 1;
    }
    uVar7 = 0x1505;
    lVar9 = 4;
    iVar5 = 4;
    do {
      uVar7 = (uint)(&bStack_41)[iVar5] + uVar7 * 0x1003f;
      lVar9 = lVar9 + -1;
      iVar5 = iVar5 + -1;
    } while (lVar9 != 0);
    if (iStack_40 != 0) {
      fn_8267C498();
    }
    iVar5 = *param_1;
    uVar7 = *(uint *)(iVar5 + 4) & uVar7;
    iVar4 = uVar7 * 0xc + iVar5;
    if ((*(int *)(iVar4 + 8) != -2) && (*(uint *)(iVar4 + 0xc) == uVar7)) {
      uVar1 = uVar7;
      uVar3 = 0xffffffff;
      while ((uVar6 = uVar1, puVar8 = (uint *)(iVar4 + 8), *(uint *)(iVar4 + 0xc) != uVar7 ||
             (*(int *)(iVar4 + 0x10) != *param_2))) {
        uVar1 = *puVar8;
        if (uVar1 == 0xffffffff) {
          return;
        }
        iVar4 = uVar1 * 0xc + iVar5;
        uVar3 = uVar6;
      }
      if (uVar7 == uVar6) {
        if (*puVar8 != 0xffffffff) {
          iVar5 = *puVar8 * 0xc + iVar5;
          if (*(int *)(iVar4 + 0x10) != 0) {
            fn_8267C498();
          }
          *puVar8 = 0xfffffffe;
          *puVar8 = *(uint *)(iVar5 + 8);
          *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar5 + 0xc);
          iVar2 = *(int *)(iVar5 + 0x10);
          if (iVar2 != 0) {
            *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
          }
          *(int *)(iVar4 + 0x10) = *(int *)(iVar5 + 0x10);
          puVar8 = (uint *)(iVar5 + 8);
        }
      }
      else {
        *(uint *)(uVar3 * 0xc + iVar5 + 8) = *puVar8;
      }
      if (puVar8[2] != 0) {
        fn_8267C498();
      }
      *puVar8 = 0xfffffffe;
      *(int *)*param_1 = *(int *)*param_1 + -1;
      return;
    }
  }
  return;
}

