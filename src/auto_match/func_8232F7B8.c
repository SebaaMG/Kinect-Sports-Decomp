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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_822BFB28();
extern int fn_822C1928();
extern U64 storeWordConditionalIndexed();


void fn_8232F7B8(int param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  longlong lVar6;
  undefined4 uVar7;
  uint *puVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  char in_RESERVE;
  byte in_cr0;
  undefined1 auStack_40 [4];
  int *piStack_3c;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  iVar3 = fn_822C1928((ulonglong)*param_2 + 4,0xffffffff821acc04,0,9);
  if (iVar3 != -1) {
    *(undefined4 *)(param_1 + 0x18) = 1;
  }
  iVar3 = fn_822C1928((ulonglong)*param_2 + 4,0xffffffff821acc10,0,8);
  if (iVar3 != -1) {
    *(undefined4 *)(param_1 + 0x14) = 1;
  }
  lVar10 = (ulonglong)*param_2 + 4;
  iVar3 = fn_822C1928(lVar10,0xffffffff821acc7c,0,5);
  if ((iVar3 == -1) && (iVar3 = fn_822C1928(lVar10,0xffffffff821acc30,0,9), iVar3 == -1)) {
    iVar3 = fn_822C1928(lVar10,0xffffffff821acce8,0,8);
    uVar7 = 0;
    if (iVar3 == -1) goto LAB_8232f8a0;
  }
  uVar7 = 1;
LAB_8232f8a0:
  *(uint *)(param_1 + 0x1c) = (uint)LZCOUNT(uVar7) >> 5;
  iVar3 = fn_822C1928((ulonglong)*param_2 + 4,0xffffffff821acc7c,0,5);
  if (iVar3 != -1) {
    piVar4 = (int *)fn_822BFB28(auStack_40,*(undefined4 *)(param_1 + 0xc));
    iVar3 = piVar4[1];
    iVar1 = *piVar4;
    iVar11 = 0;
    iVar9 = 0;
    if (iVar3 != 0) {
      cVar5 = fn_8223AAC0(iVar3);
      in_cr0 = (cVar5 == '\0') << 1;
      if (cVar5 != '\0') {
        iVar11 = iVar1;
        iVar9 = iVar3;
      }
    }
    if (ZEXT48(piStack_3c) != 0) {
      lVar10 = ZEXT48(piStack_3c) + 8;
      do {
        puVar8 = (uint *)lVar10;
        lVar6 = (ulonglong)*puVar8 - 1;
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed(lVar6,0,lVar10);
          *puVar8 = uVar2;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      if ((int)lVar6 == 0) {
        (**(code **)(*piStack_3c + 4))();
      }
    }
    if (iVar11 != 0) {
      *(undefined4 *)(iVar11 + 0x10) = 1;
      *(undefined4 *)(iVar11 + 0xc) = 5;
      *(undefined4 *)(iVar11 + 0x14) = 4;
    }
    if (iVar9 != 0) {
      fn_822315A0(iVar9);
    }
  }
  return;
}

