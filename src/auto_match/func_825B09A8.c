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
extern int fn_8265CA60();
extern int fn_8265CAA0();
extern int fn_82849BD0();
extern int fn_8284D860();
extern int fn_8284E5C0();
extern int fn_8284E638();


void fn_825B09A8(int *param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  longlong lVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 auStack_40 [16];
  
  fn_8284D860(*param_1,param_1[1],param_1 + 2,auStack_40);
  if (param_1[2] != 0) {
    uVar2 = fn_8284E5C0(param_1[2],*(undefined4 *)(param_1[1] + 0x50),
                              *(undefined4 *)(*param_1 + 300));
    lVar6 = uVar2 + ((longlong)((int)uVar2 >> 4) + (ulonglong)((int)uVar2 < 0 && (uVar2 & 0xf) != 0)
                    & 0xfffffff) * -0x10;
    if (lVar6 < 1) {
      if ((int)lVar6 < 0) {
        uVar2 = uVar2 - lVar6;
      }
    }
    else {
      uVar2 = (uVar2 - lVar6) + 0x10;
    }
    iVar3 = *(int *)(param_2 + 0x14);
    *(int *)(param_2 + 0x14) = iVar3 + (int)uVar2;
    *(int *)(param_2 + 0x2c) = (int)uVar2 + *(int *)(param_2 + 0x2c);
    param_1[3] = iVar3;
    lVar6 = ((ulonglong)*(uint *)(*param_1 + 300) & 0x3fffffff) << 2;
    if (0x3fffffff < *(uint *)(*param_1 + 300)) {
      lVar6 = -1;
    }
    iVar3 = fn_8265CA60(lVar6);
    uVar5 = 0;
    if (*(int *)(*param_1 + 300) != 0) {
      iVar8 = 0;
      puVar4 = (undefined4 *)(iVar3 + -4);
      do {
        uVar5 = uVar5 + 1;
        iVar9 = *(int *)(param_1[1] + 0x4c) + iVar8;
        iVar8 = iVar8 + 0x10;
        puVar4 = puVar4 + 1;
        *puVar4 = *(undefined4 *)(iVar9 + 4);
      } while (uVar5 < *(uint *)(*param_1 + 300));
    }
    fn_8284E638(param_1[2],*(undefined4 *)(param_1[1] + 0x50),*(undefined4 *)(*param_1 + 300),
                      auStack_40[0],param_1[3],iVar3);
    uVar5 = 0;
    if (*(int *)(*param_1 + 300) != 0) {
      iVar8 = 0;
      iVar9 = 0;
      iVar10 = 0;
      do {
        piVar7 = (int *)(*(int *)(param_1[1] + 0x4c) + iVar8);
        iVar1 = *piVar7;
        if (iVar1 != 0) {
          if (*(int *)(*(int *)(param_1[3] + 0x28) + iVar10) != 0) {
            fn_82849BD0(iVar1,*(undefined4 *)(*(int *)(*param_1 + 0x128) + iVar9 + 0xc),
                            piVar7[3],*(undefined4 *)(*(int *)(param_1[3] + 0x28) + iVar10));
          }
        }
        uVar5 = uVar5 + 1;
        iVar10 = iVar10 + 4;
        iVar9 = iVar9 + 0x20;
        iVar8 = iVar8 + 0x10;
      } while (uVar5 < *(uint *)(*param_1 + 300));
    }
    fn_8265CAA0(iVar3);
  }
  return;
}

