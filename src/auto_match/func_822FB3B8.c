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
extern int fn_822B83D0();
extern int fn_825200A8();
extern int fn_8255FD70();
extern int fn_8265CA20();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_40;


void fn_822FB3B8(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar6;
  undefined8 uVar5;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_40;
  
  puVar6 = (undefined4 *)(param_1 + 0x5c);
  if (0xf < *(uint *)(param_1 + 0x70)) {
    puVar6 = (undefined4 *)*puVar6;
  }
  fn_8255FD70(&uStack_40,**(undefined4 **)(param_1 + 0x58),puVar6);
  uVar5 = 0xffffffff83260000;
  uVar8 = (ulonglong)lbl_83265A28;
  iVar3 = (((U64)(uStack_40) >> 0) & 0xFFFFFFFF);
  uVar2 = (((U64)(uStack_40) >> 32) & 0xFFFFFFFF) - (((U64)(uStack_40) >> 0) & 0xFFFFFFFF) >> 2;
  dVar11 = (double)(longlong)(int)uVar2;
  dVar10 = (double)lbl_821CA460;
  do {
    uVar8 = (longlong)(int)uVar8 * 0x19660d + 0x3c6ef35f;
    *(uint *)((int)uVar5 + 0x5a28) = (uint)uVar8;
    iVar4 = (int)((double)(float)((double)(float)((uint)uVar8 & 0x7fffff | 0x3f800000) - dVar10) *
                 dVar11);
    uStack_40 = (longlong)iVar4;
    uVar7 = (ulonglong)*(uint *)(iVar4 * 4 + iVar3);
    lVar9 = uVar7 + 0x40;
    iVar4 = fn_825200A8((undefined4 *)(param_1 + 0x98),lVar9);
    if (iVar4 == 0) break;
  } while (1 < uVar2);
  fn_822B83D0(*(undefined4 *)(param_1 + 0x54),uVar7);
  uVar1 = *(undefined4 *)lVar9;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = uVar1;
  if (iVar3 != 0) {
    fn_8265CA20(iVar3);
  }
  return;
}

