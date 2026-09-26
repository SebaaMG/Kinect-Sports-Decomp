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
extern int fn_8265C9E0();
extern unsigned int lbl_83212A1C;
extern unsigned int lbl_83212A24;
extern unsigned int lbl_83212A30;


void fn_82886800(void)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  
  uVar7 = (ulonglong)lbl_83212A24;
  lbl_83212A30 = 1;
  lVar2 = ((ulonglong)lbl_83212A24 & 0x3fffffff) << 2;
  puVar6 = lbl_83212A1C;
  if (0 < (int)lbl_83212A24) {
    do {
      if (0 < (int)*puVar6) {
        lVar2 = (((ulonglong)(uint)(1 << (*puVar6 & 0x3f)) + 7 & 0xffffffff) >> 3) + lVar2 + 0x1c;
      }
      uVar7 = uVar7 - 1;
      puVar6 = puVar6 + 1;
    } while (uVar7 != 0);
  }
  iVar3 = fn_8265C9E0(lVar2);
  uVar7 = (ulonglong)lbl_83212A24;
  puVar8 = (undefined4 *)(lbl_83212A24 * 4 + iVar3);
  if (0 < (int)lbl_83212A24) {
    iVar3 = iVar3 - (int)lbl_83212A1C;
    puVar6 = lbl_83212A1C;
    do {
      if ((int)*puVar6 < 1) {
        *(undefined4 *)(iVar3 + (int)puVar6) = 0;
      }
      else {
        *(undefined4 **)(iVar3 + (int)puVar6) = puVar8;
        *puVar8 = 0;
        uVar9 = *puVar6;
        puVar8[2] = 0;
        puVar8[1] = (1 << (uVar9 & 0x3f)) + -1;
        iVar4 = (1 << (*puVar6 & 0x3f)) + -1;
        puVar8[3] = iVar4;
        uVar9 = *puVar6;
        puVar8[5] = 0;
        puVar8[6] = 0xffffffff;
        puVar8[4] = (1 << (uVar9 & 0x3f)) + -1;
        uVar9 = 1 << (*puVar6 & 0x3f);
        uVar5 = (uVar9 >> 2) + iVar4;
        uVar1 = uVar9 + 7 >> 3;
        if (uVar9 <= uVar5) {
          uVar5 = uVar5 - uVar9;
        }
        uVar9 = 0;
        for (uVar10 = uVar1; uVar10 != 0; uVar10 = uVar10 - 1) {
          if ((int)uVar9 < (int)(uVar5 >> 3)) {
            *(undefined1 *)((int)puVar8 + uVar9 + 0x1c) = 0;
          }
          else if (uVar9 == uVar5 >> 3) {
            *(char *)((int)puVar8 + uVar9 + 0x1c) =
                 (char)(0xff << ((uVar5 - (uVar5 & 0xfffffff8)) + 1 & 0x3f));
          }
          else {
            *(undefined1 *)((int)puVar8 + uVar9 + 0x1c) = 0xff;
          }
          uVar9 = uVar9 + 1;
        }
        puVar8 = (undefined4 *)((int)puVar8 + uVar1 + 0x1c);
      }
      uVar7 = uVar7 - 1;
      puVar6 = puVar6 + 1;
    } while (uVar7 != 0);
  }
  return;
}

