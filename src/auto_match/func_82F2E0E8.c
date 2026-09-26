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


void fn_82F2E0E8(int param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  uint uVar11;
  longlong lVar12;
  
  uVar3 = *(uint *)(param_1 + 0x60);
  trapWord(6,(ulonglong)uVar3,0);
  uVar4 = *(uint *)(*(int *)(param_1 + 0x74) + 4);
  uVar7 = (uint)*(ushort *)(*(int *)(param_1 + 0x74) + 0xe);
  uVar11 = (uVar4 - 1) * uVar3;
  iVar2 = (int)(((ulonglong)uVar4 & 0x1ffffff) << 7) / (int)uVar3;
  trapWord(5,(ulonglong)uVar3 &
             ~((((ulonglong)uVar4 & 0xffffff) << 8 | ((ulonglong)uVar4 & 0x1ffffff) >> 0x18) - 1),
           0xffff);
  iVar1 = (int)uVar11 / (int)uVar4;
  trapWord(6,(ulonglong)uVar4,0);
  trapWord(5,(ulonglong)uVar4 &
             ~((((ulonglong)uVar11 & 0x7fffffff) << 1 | (ulonglong)(uVar11 >> 0x1f)) - 1),0xffff);
  if (0 < iVar2) {
    iVar6 = (int)param_2;
    iVar8 = *(int *)(param_1 + 0x58) * iVar6 * 4 + *(int *)(param_1 + 0x78);
    puVar10 = (undefined1 *)(*(int *)(param_1 + 0x60) * iVar6 * 4 + *(int *)(param_1 + 0x84));
    if (iVar6 < (int)param_3) {
      param_3 = param_3 - param_2;
      do {
        uVar11 = 0;
        if (0 < iVar1) {
          lVar12 = (longlong)iVar1;
          do {
            uVar5 = uVar11 & 0x7f;
            iVar6 = ((int)uVar11 >> 7) * 4;
            iVar9 = 0x80 - uVar5;
            uVar11 = uVar11 + iVar2;
            *puVar10 = (char)((int)(*(byte *)(iVar8 + 4 + iVar6) * uVar5 +
                                   (uint)*(byte *)(iVar6 + iVar8) * iVar9) >> 7);
            puVar10[1] = (char)((int)(*(byte *)(iVar8 + 5 + iVar6) * uVar5 +
                                     (uint)*(byte *)(iVar8 + 1 + iVar6) * iVar9) >> 7);
            puVar10[2] = (char)((int)(*(byte *)(iVar8 + 6 + iVar6) * uVar5 +
                                     (uint)*(byte *)(iVar8 + 2 + iVar6) * iVar9) >> 7);
            puVar10[3] = (char)((int)(*(byte *)(iVar8 + 7 + iVar6) * uVar5 +
                                     (uint)*(byte *)(iVar8 + 3 + iVar6) * iVar9) >> 7);
            puVar10 = puVar10 + 4;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
        }
        if (iVar1 < *(int *)(param_1 + 0x60)) {
          lVar12 = (longlong)iVar1;
          do {
            lVar12 = lVar12 + 1;
            iVar6 = ((int)uVar11 >> 7) * 4;
            uVar11 = uVar11 + iVar2;
            *puVar10 = *(undefined1 *)(iVar6 + iVar8);
            puVar10[1] = *(undefined1 *)(iVar8 + 1 + iVar6);
            puVar10[2] = *(undefined1 *)(iVar8 + 2 + iVar6);
            puVar10[3] = *(undefined1 *)(iVar8 + 3 + iVar6);
            puVar10 = puVar10 + 4;
          } while ((int)lVar12 < *(int *)(param_1 + 0x60));
        }
        param_3 = param_3 + -1;
        puVar10 = puVar10 + ((int)(uVar7 * uVar3 + 0x1f & 0xffffffe0) >> 3) +
                            (uVar3 & 0x3fffffff) * -4;
        iVar8 = iVar8 + ((int)(uVar7 * uVar4 + 0x1f & 0xffffffe0) >> 3);
      } while (param_3 != 0);
    }
  }
  return;
}

