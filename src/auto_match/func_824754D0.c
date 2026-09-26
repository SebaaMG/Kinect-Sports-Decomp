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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82475C28();
extern int fn_8249ABC0();
extern int fn_8249B598();
extern int fn_824FC118();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8252AFE0();
extern int fn_8252CAF8();
extern int fn_8265C9E0();
extern int fn_82F4EBE8();
extern int fn_82F52188();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831C6674;
extern unsigned int lbl_831C667C;
extern unsigned int lbl_831C6698;


void fn_824754D0(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int *piVar6;
  ulonglong uVar7;
  uint *puVar8;
  int iVar9;
  longlong lVar10;
  double dVar11;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [64];
  
  iVar9 = param_2 * 0x18 + param_1;
  dVar11 = (double)lbl_821CC160;
  if (*(int *)(iVar9 + 0x54) == 0) {
    puVar8 = (uint *)(param_1 + 0xc);
    if (puVar8 == (uint *)0x0) {
      return;
    }
    uVar7 = (ulonglong)*puVar8;
    if (uVar7 == (uVar7 - 1) + (ulonglong)(uVar7 == 0)) {
      return;
    }
    uVar4 = fn_8249ABC0();
    fn_8249B598(uVar4,param_2);
    uVar4 = fn_82F4EBE8();
    fn_82F52188(auStack_40,uVar4,1);
    fn_82475C28(auStack_50,param_1);
    uVar7 = fn_8251F720(puVar8,0);
    uVar5 = fn_8265C9E0(0x60);
    if ((uVar5 & 0xffffffff) == 0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)fn_824FC118(uVar5,uVar7,*(undefined4 *)(param_1 + 0x50),param_2);
    }
    *(int **)(iVar9 + 0x54) = piVar6;
    puVar8 = (uint *)(*piVar6 + 0x1dc);
    lVar10 = 2;
    do {
      puVar1 = puVar8 + 1;
      puVar8 = puVar8 + 1;
      *puVar8 = *puVar1 | 8;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    fn_8252AFE0(dVar11,**(undefined4 **)(iVar9 + 0x54));
    fn_8252CAF8(**(undefined4 **)(iVar9 + 0x54),1,0);
    fn_8252CAF8(**(undefined4 **)(iVar9 + 0x54),3,0);
    fn_8252CAF8(**(undefined4 **)(iVar9 + 0x54),2,1);
    if ((uVar7 & 0xffffffff) != 0) {
      fn_8251FA58(uVar7);
    }
  }
  *(float *)(iVar9 + 100) = (float)dVar11;
  uVar3 = lbl_831C667C;
  uVar2 = lbl_831C6674;
  *(undefined4 *)(iVar9 + 0x5c) = lbl_831C6698;
  *(undefined4 *)(iVar9 + 0x58) = uVar3;
  *(undefined4 *)((param_2 + 4) * 0x18 + param_1) = uVar2;
  return;
}

