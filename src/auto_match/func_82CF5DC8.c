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
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82CF1790();
extern int fn_82CF3C90();
extern int fn_82CF52E0();
extern unsigned int iStack_58;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_60;


void fn_82CF5DC8(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined1 uStack_60;
  int iStack_58;
  uint uStack_54;
  uint uStack_50;
  
  iStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0x80000000;
  lVar6 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      uVar2 = fn_82CF3C90(param_1,lVar6,uStack_60);
      iVar3 = fn_82CE5410();
      if (uStack_54 == (uStack_50 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(undefined4 *)(iVar3 + 0x10),&iStack_58,4);
      }
      lVar6 = lVar6 + 1;
      *(undefined4 *)(uStack_54 * 4 + iStack_58) = uVar2;
      uStack_54 = uStack_54 + 1;
    } while ((int)lVar6 < *(int *)(param_1 + 4));
  }
  fn_82CF52E0(param_2,&iStack_58,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                param_3,*(undefined4 *)(param_1 + 0x20),1);
  iVar3 = 0;
  if (0 < (int)uStack_54) {
    iVar5 = 0;
    do {
      iVar1 = *(int *)(iVar5 + iStack_58);
      if (iVar1 != 0) {
        fn_82CF1790(iVar1);
        iVar4 = fn_82CE5410();
        (**(code **)(**(int **)(iVar4 + 0x10) + 8))(*(int **)(iVar4 + 0x10),iVar1,0x58);
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar3 < (int)uStack_54);
  }
  iVar3 = fn_82CE5410();
  uStack_54 = 0;
  if ((uStack_50 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar3 + 0x10) + 0x10))
              (*(int **)(iVar3 + 0x10),iStack_58,uStack_50 & 0x3fffffff,4);
  }
  return;
}

