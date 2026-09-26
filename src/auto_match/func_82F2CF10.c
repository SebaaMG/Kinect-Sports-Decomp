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


void fn_82F2CF10(int param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined2 *puVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  
  iVar6 = (int)param_2;
  uVar9 = *(uint *)(param_1 + 0x60);
  trapWord(6,(ulonglong)uVar9,0);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x74) + 4);
  uVar7 = (int)(((ulonglong)uVar2 & 0x1ffffff) << 7) / (int)uVar9;
  uVar12 = (((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0) + -1) * uVar9;
  trapWord(6,(ulonglong)uVar2,0);
  lVar13 = (longlong)((int)uVar9 >> 1) + (ulonglong)((int)uVar9 < 0 && (uVar9 & 1) != 0);
  trapWord(5,(ulonglong)uVar9 &
             ~((((ulonglong)uVar2 & 0xffffff) << 8 | ((ulonglong)uVar2 & 0x1ffffff) >> 0x18) - 1),
           0xffff);
  iVar1 = (int)uVar12 / (int)uVar2;
  trapWord(5,(ulonglong)uVar2 &
             ~((((ulonglong)uVar12 & 0x7fffffff) << 1 | (ulonglong)(uVar12 >> 0x1f)) - 1),0xffff);
  uVar7 = 0xffffffffU - ((int)uVar7 >> 0x1f) & uVar7;
  iVar11 = uVar2 * 2 * iVar6 * 2 + *(int *)(param_1 + 0x78);
  if (iVar6 < (int)param_3) {
    param_3 = param_3 - param_2;
    puVar10 = (undefined2 *)(uVar9 * 2 * iVar6 * 2 + *(int *)(param_1 + 0x84) + -4);
    do {
      uVar9 = 0;
      lVar14 = (longlong)iVar1;
      if (0 < iVar1) {
        do {
          uVar3 = (int)uVar9 >> 6 & 0xfffffffe;
          uVar8 = uVar9 + uVar7;
          uVar4 = uVar8 & 0xff;
          uVar12 = (int)uVar8 >> 6;
          puVar10[3] = (short)((int)((uint)*(ushort *)((uVar3 + 1) * 2 + iVar11) *
                                     (0x80 - (uVar9 & 0x7f)) +
                                    (uint)*(ushort *)((uVar3 + 3) * 2 + iVar11) * (uVar9 & 0x7f)) >>
                              7);
          uVar5 = (ulonglong)uVar12 & 0xfffffffc;
          uVar9 = uVar8 + uVar7;
          puVar10[5] = (short)((int)((uint)*(ushort *)(((uVar12 & 0xfffffffe) + 1) * 2 + iVar11) *
                                     (0x80 - (uVar8 & 0x7f)) +
                                    (uint)*(ushort *)(((uVar12 & 0xfffffffe) + 3) * 2 + iVar11) *
                                    (uVar8 & 0x7f)) >> 7);
          puVar10[2] = (short)(*(ushort *)((int)((uVar5 + 4 & 0xffffffff) << 1) + iVar11) * uVar4 +
                               (uint)*(ushort *)((uVar12 & 0x7ffffffc) * 2 + iVar11) *
                               (0x100 - uVar4) >> 8);
          puVar10[4] = (short)((uint)*(ushort *)(((int)uVar5 + 2) * 2 + iVar11) * (0x100 - uVar4) +
                               *(ushort *)((int)((uVar5 + 6 & 0xffffffff) << 1) + iVar11) * uVar4 >>
                              8);
          puVar10 = puVar10 + 4;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      if (iVar1 < (int)lVar13) {
        lVar14 = lVar13 - iVar1;
        do {
          uVar12 = (int)uVar9 >> 6;
          uVar3 = (int)(uVar9 + uVar7) >> 6;
          uVar9 = uVar9 + uVar7 + uVar7;
          puVar10[3] = *(undefined2 *)(((uVar12 & 0xfffffffe) + 1) * 2 + iVar11);
          puVar10[5] = *(undefined2 *)(((uVar3 & 0xfffffffe) + 1) * 2 + iVar11);
          puVar10[2] = *(undefined2 *)((uVar3 & 0x7ffffffc) * 2 + iVar11);
          puVar10 = puVar10 + 4;
          *puVar10 = *(undefined2 *)(((uVar3 & 0xfffffffc) + 2) * 2 + iVar11);
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      param_3 = param_3 + -1;
      iVar11 = uVar2 * 4 + iVar11;
    } while (param_3 != 0);
  }
  return;
}

