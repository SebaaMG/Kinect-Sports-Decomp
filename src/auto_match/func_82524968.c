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
extern int fn_8265CA60();
extern int fn_82F664B0();
extern unsigned int lbl_821902F0;
extern unsigned int lbl_821CA460;
extern unsigned int *lbl_832767EC;


undefined8 fn_82524968(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  if (*(int *)(param_1 + 0xb7c) == 0) {
    puVar1 = (uint *)*lbl_832767EC;
    uVar2 = puVar1[1];
    uVar4 = fn_8265C9E0(0x34);
    *(int *)(param_1 + 0xb7c) = (int)uVar4;
    fn_82F664B0(uVar4,10,0xffffffff821c2f50);
    *(undefined1 *)(*(int *)(param_1 + 0xb7c) + 10) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0xb7c) + 0x18) = 0;
    *(short *)(*(int *)(param_1 + 0xb7c) + 0x1a) = (short)*puVar1;
    *(undefined2 *)(*(int *)(param_1 + 0xb7c) + 0x1c) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xb7c) + 0x1e) = 3;
    uVar5 = fn_8265CA60(0xe6c);
    *(undefined4 *)(*(int *)(param_1 + 0xb7c) + 0x2c) = uVar5;
    *(undefined4 *)(*(int *)(param_1 + 0xb7c) + 0x20) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xb7c) + 0x24) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xb7c) + 0x28) = 0;
    uVar5 = lbl_821CA460;
    if (*puVar1 != 0) {
      uVar7 = 0;
      do {
        iVar3 = *(int *)(&lbl_821902F0 + uVar7 * 4);
        puVar10 = (uint *)(uVar7 * 0x60 + uVar2);
        iVar9 = iVar3 * 0x34;
        *(uint *)(*(int *)(*(int *)(param_1 + 0xb7c) + 0x2c) + iVar9) = puVar10[0xc];
        *(uint *)(*(int *)(*(int *)(param_1 + 0xb7c) + 0x2c) + iVar9 + 4) = puVar10[0xd];
        *(uint *)(*(int *)(*(int *)(param_1 + 0xb7c) + 0x2c) + iVar9 + 8) = puVar10[0xe];
        *(uint *)(*(int *)(*(int *)(param_1 + 0xb7c) + 0x2c) + iVar9 + 0xc) = puVar10[4];
        *(uint *)(*(int *)(*(int *)(param_1 + 0xb7c) + 0x2c) + iVar9 + 0x10) = puVar10[5];
        *(uint *)(*(int *)(*(int *)(param_1 + 0xb7c) + 0x2c) + iVar9 + 0x14) = puVar10[6];
        *(uint *)(*(int *)(*(int *)(param_1 + 0xb7c) + 0x2c) + iVar9 + 0x18) = puVar10[8];
        *(uint *)(*(int *)(*(int *)(param_1 + 0xb7c) + 0x2c) + iVar9 + 0x1c) = puVar10[9];
        *(uint *)(*(int *)(*(int *)(param_1 + 0xb7c) + 0x2c) + iVar9 + 0x20) = puVar10[10];
        *(uint *)(*(int *)(*(int *)(param_1 + 0xb7c) + 0x2c) + iVar9 + 0x24) = puVar10[0xb];
        if (*puVar10 == 0xff) {
          uVar6 = 0xffff;
        }
        else {
          uVar6 = (undefined2)*(undefined4 *)(&lbl_821902F0 + (*puVar10 & 0xffff) * 4);
        }
        *(undefined2 *)(*(int *)(*(int *)(param_1 + 0xb7c) + 0x2c) + iVar9 + 0x28) = uVar6;
        if (puVar10[1] == 0xff) {
          uVar6 = 0xffff;
        }
        else {
          uVar6 = (undefined2)*(undefined4 *)(&lbl_821902F0 + (puVar10[1] & 0xffff) * 4);
        }
        *(undefined2 *)(*(int *)(*(int *)(param_1 + 0xb7c) + 0x2c) + iVar9 + 0x2a) = uVar6;
        if (puVar10[2] == 0xff) {
          uVar6 = 0xffff;
        }
        else {
          uVar6 = (undefined2)*(undefined4 *)(&lbl_821902F0 + (puVar10[2] & 0xffff) * 4);
        }
        iVar8 = iVar3 * 0x10 + param_1;
        uVar7 = uVar7 + 1 & 0xffff;
        *(undefined2 *)(*(int *)(*(int *)(param_1 + 0xb7c) + 0x2c) + iVar9 + 0x2c) = uVar6;
        *(undefined1 *)(*(int *)(*(int *)(param_1 + 0xb7c) + 0x2c) + iVar9 + 0x32) = 0;
        *(undefined2 *)(*(int *)(*(int *)(param_1 + 0xb7c) + 0x2c) + iVar9 + 0x30) = 0xffff;
        *(short *)(*(int *)(*(int *)(param_1 + 0xb7c) + 0x2c) + iVar9 + 0x2e) = (short)iVar3;
        *(uint *)((iVar3 + 0x195) * 0x10 + param_1) = puVar10[0x14];
        *(uint *)(iVar8 + 0x1954) = puVar10[0x15];
        *(uint *)(iVar8 + 0x1958) = puVar10[0x16];
        *(undefined4 *)(iVar8 + 0x195c) = uVar5;
      } while (uVar7 < *puVar1);
    }
  }
  return 0;
}

