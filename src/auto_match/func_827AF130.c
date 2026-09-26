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
extern int fn_827AED80();
extern unsigned int iStack_30;
extern unsigned int iStack_34;
extern unsigned int iStack_38;
extern unsigned int uStack_2c;


void fn_827AF130(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  ulonglong uVar9;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined1 uStack_2c;
  
  piVar8 = (int *)param_1;
  if ((uint)piVar8[1] < (uint)piVar8[2]) {
    uVar9 = (ulonglong)*(uint *)(*piVar8 + 4);
    iStack_30 = 0;
    iStack_34 = 0;
    iStack_38 = 0;
    uStack_2c = 0;
    if (uVar9 != 0) {
      lVar6 = 0;
      do {
        uVar1 = ((undefined4 *)param_1)[1];
        lVar7 = (ulonglong)*(uint *)*(undefined4 *)param_1 + lVar6;
        iVar4 = (int)lVar7;
        iVar2 = *(int *)(iVar4 + 0x10);
        if ((iVar2 == 0) || (uVar3 = *(uint *)(iVar4 + 0xc), uVar1 < uVar3)) {
LAB_827af1d4:
          bVar5 = false;
        }
        else {
          bVar5 = true;
          if (uVar3 + iVar2 <= uVar1) goto LAB_827af1d4;
        }
        if (bVar5) {
          fn_827AED80(&iStack_38,lVar7 + 0x18);
        }
        piVar8 = (int *)param_1;
        uVar9 = uVar9 - 1;
        lVar6 = lVar6 + 0x28;
      } while (uVar9 != 0);
    }
    piVar8[3] = -1;
    piVar8[4] = 0;
    piVar8[5] = -1;
    piVar8[6] = 0;
    piVar8[7] = 0;
    piVar8[8] = 0;
    piVar8[9] = iStack_38;
    piVar8[10] = iStack_34;
    piVar8[0xb] = iStack_30;
    *(undefined1 *)(piVar8 + 0xc) = uStack_2c;
    piVar8[7] = 1;
  }
  else {
    piVar8[0xb] = 0;
    piVar8[10] = 0;
    piVar8[9] = 0;
    *(undefined1 *)(piVar8 + 0xc) = 0;
    piVar8[7] = 0;
  }
  piVar8[8] = 0;
  piVar8[6] = piVar8[1];
  return;
}

