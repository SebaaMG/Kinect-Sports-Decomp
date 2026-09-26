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
extern int fn_82271C18();
extern int fn_8228C2C8();
extern unsigned int lbl_821CC160;


undefined4 fn_822724D0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  undefined4 uVar4;
  int in_r0;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  uVar7 = *(undefined4 *)(param_1 + 0xa0);
  if (*(int *)(param_1 + 0x98) != 0) {
    piVar6 = *(int **)(param_1 + 0x5c);
    *(undefined4 *)(param_1 + 0xd0) = 0;
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0xbc);
    *(uint *)(param_1 + 0xc4) = (uint)LZCOUNT(*(undefined4 *)(param_1 + 0xbc)) >> 5;
    uVar4 = lbl_821CC160;
    iVar5 = *piVar6;
    if (iVar5 != piVar6[1]) {
      do {
        iVar1 = *(int *)(iVar5 + 0x24);
        if (iVar1 != 0) {
          puVar2 = (undefined4 *)(in_r0 + iVar5 & 0xfffffff0);
          uVar8 = *puVar2;
          uVar9 = puVar2[1];
          uVar10 = puVar2[2];
          uVar11 = puVar2[3];
          *(undefined4 *)(iVar1 + 0x520) = uVar4;
          *(undefined4 *)(iVar1 + 0x548) = 0;
          *(undefined4 *)(iVar1 + 0x544) = 1;
          *(undefined4 *)(iVar1 + 0x534) = 0;
          puVar2 = (undefined4 *)(iVar1 + 0x510U & 0xfffffff0);
          *puVar2 = uVar8;
          puVar2[1] = uVar9;
          puVar2[2] = uVar10;
          puVar2[3] = uVar11;
        }
        iVar5 = iVar5 + 0x30;
      } while (iVar5 != piVar6[1]);
    }
    iVar5 = *(int *)(*(int *)(param_1 + 0xa8) + 4);
    if (*(int *)(param_1 + 0x110) != 0) {
      fn_8228C2C8(*(int *)(param_1 + 0x110),0xffffffff820e975c);
    }
    if (*(int *)(param_1 + 0x118) != 0) {
      fn_8228C2C8(*(int *)(param_1 + 0x118),0xffffffff820e975c);
    }
    fn_82271C18(param_1,*(undefined4 *)(iVar5 + 0x2c),0,0);
  }
  piVar6 = *(int **)(*(int *)(param_1 + 0x4c) + 0xc);
  do {
    if (piVar6 == *(int **)(*(int *)(param_1 + 0x4c) + 0x10)) {
      bVar3 = false;
LAB_822725e0:
      if (!bVar3) {
        uVar7 = 0;
        *(undefined4 *)(param_1 + 0x50) = 0;
      }
      return uVar7;
    }
    if (*piVar6 == *(int *)(param_1 + 0x50)) {
      bVar3 = true;
      goto LAB_822725e0;
    }
    piVar6 = piVar6 + 1;
  } while( true );
}

