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
extern int fn_82FA5060();
extern int fn_82FA5190();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_831BC768;


undefined4 fn_82FF3940(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  
  iVar1 = param_1[2];
  iVar5 = fn_82FA5060(lbl_831BC768,(param_2 + iVar1) * 8);
  uVar3 = lbl_8200133C;
  uVar4 = 0;
  if (iVar5 != 0) {
    uVar2 = param_1[1] - *param_1 >> 3;
    if (*param_1 != 0) {
      uVar6 = 0;
      if (3 < (int)uVar2) {
        iVar8 = -0x14 - iVar5;
        puVar10 = (undefined4 *)(iVar5 + 0x14);
        do {
          if (puVar10 != (undefined4 *)0x14) {
            puVar10[-5] = 0xffffffff;
            puVar10[-4] = uVar3;
          }
          iVar9 = *param_1;
          puVar10[-5] = *(undefined4 *)((int)puVar10 + iVar9 + iVar8);
          puVar10[-4] = *(undefined4 *)((int)puVar10 + iVar9 + iVar8 + 4);
          if (puVar10 != (undefined4 *)0xc) {
            puVar10[-3] = 0xffffffff;
            puVar10[-2] = uVar3;
          }
          iVar9 = *param_1;
          puVar10[-3] = *(undefined4 *)((int)puVar10 + iVar9 + iVar8 + 8);
          puVar10[-2] = *(undefined4 *)((int)puVar10 + iVar9 + iVar8 + 0xc);
          if (puVar10 != (undefined4 *)0x4) {
            puVar10[-1] = 0xffffffff;
            *puVar10 = uVar3;
          }
          iVar9 = *param_1;
          puVar7 = puVar10 + 1;
          puVar10[-1] = *(undefined4 *)((int)puVar10 + iVar9 + (-4 - iVar5));
          *puVar10 = *(undefined4 *)((int)puVar10 + iVar9 + (-4 - iVar5) + 4);
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = 0xffffffff;
            puVar10[2] = uVar3;
          }
          iVar9 = *param_1;
          uVar6 = uVar6 + 4;
          *puVar7 = *(undefined4 *)((int)puVar10 + iVar9 + (4 - iVar5));
          puVar10[2] = *(undefined4 *)((int)puVar10 + iVar9 + (4 - iVar5) + 4);
          puVar10 = puVar10 + 8;
        } while (uVar6 < uVar2 - 3);
      }
      if (uVar6 < uVar2) {
        iVar8 = uVar6 * 8;
        iVar9 = uVar2 - uVar6;
        puVar10 = (undefined4 *)(iVar8 + iVar5);
        do {
          if (puVar10 != (undefined4 *)0x0) {
            puVar10[1] = uVar3;
            *puVar10 = 0xffffffff;
          }
          iVar9 = iVar9 + -1;
          puVar7 = (undefined4 *)(iVar8 + *param_1);
          iVar8 = iVar8 + 8;
          *puVar10 = *puVar7;
          puVar10[1] = puVar7[1];
          puVar10 = puVar10 + 2;
        } while (iVar9 != 0);
      }
      fn_82FA5190(lbl_831BC768,*param_1);
    }
    *param_1 = iVar5;
    param_1[2] = param_2 + iVar1;
    uVar4 = 1;
    param_1[1] = uVar2 * 8 + iVar5;
  }
  return uVar4;
}

