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


void fn_82F2CD38(int param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  
  iVar5 = (int)param_2;
  uVar9 = *(uint *)(param_1 + 0x60);
  trapWord(6,(ulonglong)uVar9,0);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x74) + 4);
  uVar6 = (int)(((ulonglong)uVar2 & 0x1ffffff) << 7) / (int)uVar9;
  uVar12 = (((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0) + -1) * uVar9;
  iVar7 = uVar2 * 2 * iVar5 + *(int *)(param_1 + 0x78);
  trapWord(5,(ulonglong)uVar9 &
             ~((((ulonglong)uVar2 & 0xffffff) << 8 | ((ulonglong)uVar2 & 0x1ffffff) >> 0x18) - 1),
           0xffff);
  lVar11 = (longlong)((int)uVar9 >> 1) + (ulonglong)((int)uVar9 < 0 && (uVar9 & 1) != 0);
  iVar1 = (int)uVar12 / (int)uVar2;
  trapWord(6,(ulonglong)uVar2,0);
  trapWord(5,(ulonglong)uVar2 &
             ~((((ulonglong)uVar12 & 0x7fffffff) << 1 | (ulonglong)(uVar12 >> 0x1f)) - 1),0xffff);
  uVar6 = 0xffffffffU - ((int)uVar6 >> 0x1f) & uVar6;
  if (iVar5 < (int)param_3) {
    param_3 = param_3 - param_2;
    puVar10 = (undefined1 *)(uVar9 * 2 * iVar5 + *(int *)(param_1 + 0x84) + -1);
    do {
      uVar9 = 0;
      if (0 < iVar1) {
        lVar13 = (longlong)iVar1;
        do {
          uVar12 = (int)uVar9 >> 6 & 0xfffffffe;
          uVar8 = uVar9 + uVar6;
          uVar3 = uVar8 & 0xff;
          puVar10[1] = (char)((int)((uint)*(byte *)(uVar12 + iVar7) * (0x80 - (uVar9 & 0x7f)) +
                                   (uint)*(byte *)(iVar7 + 2 + uVar12) * (uVar9 & 0x7f)) >> 7);
          uVar12 = (int)uVar8 >> 6 & 0xfffffffe;
          uVar4 = (int)uVar8 >> 6 & 0xfffffffc;
          uVar9 = uVar8 + uVar6;
          puVar10[3] = (char)((int)((uint)*(byte *)(uVar12 + iVar7) * (0x80 - (uVar8 & 0x7f)) +
                                   (uint)*(byte *)(iVar7 + 2 + uVar12) * (uVar8 & 0x7f)) >> 7);
          puVar10[2] = (char)(*(byte *)(iVar7 + 5 + uVar4) * uVar3 +
                              (uint)*(byte *)(iVar7 + 1 + uVar4) * (0x100 - uVar3) >> 8);
          puVar10[4] = (char)(*(byte *)(iVar7 + 7 + uVar4) * uVar3 +
                              (uint)*(byte *)(iVar7 + 3 + uVar4) * (0x100 - uVar3) >> 8);
          puVar10 = puVar10 + 4;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      if (iVar1 < (int)lVar11) {
        lVar13 = lVar11 - iVar1;
        do {
          uVar12 = (int)uVar9 >> 6;
          uVar3 = (int)(uVar9 + uVar6) >> 6;
          uVar9 = uVar9 + uVar6 + uVar6;
          uVar4 = uVar3 & 0xfffffffc;
          puVar10[1] = *(undefined1 *)((uVar12 & 0xfffffffe) + iVar7);
          puVar10[3] = *(undefined1 *)((uVar3 & 0xfffffffe) + iVar7);
          puVar10[2] = *(undefined1 *)(iVar7 + 1 + uVar4);
          puVar10 = puVar10 + 4;
          *puVar10 = *(undefined1 *)(iVar7 + 3 + uVar4);
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      param_3 = param_3 + -1;
      iVar7 = iVar7 + uVar2 * 2;
    } while (param_3 != 0);
  }
  return;
}

