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


void fn_82F2EC80(int param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  
  iVar5 = (int)param_2;
  uVar1 = *(uint *)(param_1 + 0x60);
  uVar9 = (ulonglong)uVar1;
  trapWord(6,uVar9,0);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x74) + 4);
  uVar7 = (uint)*(ushort *)(*(int *)(param_1 + 0x74) + 0xe);
  uVar10 = (uVar2 - 1) * uVar1;
  iVar3 = (int)(uVar7 * uVar1 + 0x1f & 0xffffffe0) >> 3;
  uVar1 = (int)(((ulonglong)uVar2 & 0x1ffffff) << 7) / (int)uVar1;
  iVar4 = (int)(uVar7 * uVar2 + 0x1f & 0xffffffe0) >> 3;
  trapWord(6,(ulonglong)uVar2,0);
  trapWord(5,uVar9 & ~((((ulonglong)uVar2 & 0xffffff) << 8 | ((ulonglong)uVar2 & 0x1ffffff) >> 0x18)
                      - 1),0xffff);
  trapWord(5,(ulonglong)uVar2 &
             ~((((ulonglong)uVar10 & 0x7fffffff) << 1 | (ulonglong)(uVar10 >> 0x1f)) - 1),0xffff);
  iVar6 = iVar4 * iVar5 + *(int *)(param_1 + 0x78);
  lVar8 = (longlong)iVar3 * (longlong)iVar5 + (ulonglong)*(uint *)(param_1 + 0x84);
  if (iVar5 < (int)param_3) {
    param_3 = param_3 - param_2;
    do {
      uVar7 = 0;
      iVar5 = 0;
      if (0 < *(int *)(param_1 + 0x60)) {
        do {
          if ((0x80 - (uVar7 & 0x7f) < (uVar7 & 0x7f)) && (iVar5 < (int)uVar10 / (int)uVar2)) {
            *(undefined1 *)lVar8 = *(undefined1 *)(((int)uVar7 >> 7) + iVar6 + 1);
          }
          else {
            *(undefined1 *)lVar8 = *(undefined1 *)(((int)uVar7 >> 7) + iVar6);
          }
          iVar5 = iVar5 + 1;
          lVar8 = lVar8 + 1;
          uVar7 = uVar7 + (0xffffffffU - ((int)uVar1 >> 0x1f) & uVar1);
        } while (iVar5 < *(int *)(param_1 + 0x60));
      }
      lVar8 = lVar8 + ((longlong)iVar3 - uVar9);
      iVar6 = iVar6 + iVar4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

