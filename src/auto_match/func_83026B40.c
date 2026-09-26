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
extern int fn_82A1DDC0();
extern int fn_82FA5060();
extern int fn_82FA5190();
extern unsigned int lbl_831BC770;


void fn_83026B40(undefined8 param_1,int param_2,int param_3,uint param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  
  if (*(int *)(param_2 + 0x14) != 0) {
    uVar8 = (ulonglong)*(ushort *)(param_2 + 0x10);
    uVar10 = 0;
    if (uVar8 != 0) {
      puVar6 = (uint *)(*(int *)(param_2 + 0x14) + 4);
      do {
        if ((param_4 <= *puVar6) && (*puVar6 < param_4 + param_5)) {
          uVar10 = uVar10 + 1 & 0xffff;
        }
        puVar6 = puVar6 + 5;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    if (uVar10 != 0) {
      iVar2 = fn_82FA5060(lbl_831BC770,(*(ushort *)(param_3 + 0x10) + uVar10) * 0x14);
      iVar5 = *(int *)(param_3 + 0x14);
      if (iVar2 == 0) {
        if (iVar5 != 0) {
          fn_82FA5190(lbl_831BC770);
        }
        *(undefined4 *)(param_3 + 0x14) = 0;
        *(undefined2 *)(param_3 + 0x10) = 0;
      }
      else {
        if (iVar5 != 0) {
          fn_82A1DDC0(iVar2,iVar5,(ulonglong)*(ushort *)(param_3 + 0x10) * 0x14);
        }
        uVar4 = 0;
        puVar9 = *(undefined4 **)(param_2 + 0x14);
        iVar5 = (uint)*(ushort *)(param_3 + 0x10) * 0x14 + iVar2;
        if (*(short *)(param_2 + 0x10) != 0) {
          puVar7 = (undefined4 *)(iVar5 + 8);
          puVar3 = (undefined4 *)(iVar5 + -0x14);
          do {
            if ((param_4 <= (uint)puVar9[1]) && ((uint)puVar9[1] < param_4 + param_5)) {
              uVar1 = *puVar9;
              puVar7[-1] = 0;
              puVar3 = puVar3 + 5;
              *puVar3 = uVar1;
              *puVar7 = puVar9[2];
              puVar7[1] = puVar9[3];
              puVar7[2] = puVar9[4];
              puVar7 = puVar7 + 5;
            }
            uVar4 = uVar4 + 1;
            puVar9 = puVar9 + 5;
          } while (uVar4 < *(ushort *)(param_2 + 0x10));
        }
        if (*(int *)(param_3 + 0x14) != 0) {
          fn_82FA5190(lbl_831BC770);
        }
        *(int *)(param_3 + 0x14) = iVar2;
        *(short *)(param_3 + 0x10) = *(short *)(param_3 + 0x10) + (short)uVar10;
      }
    }
  }
  return;
}

