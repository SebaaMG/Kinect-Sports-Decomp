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
extern int fn_8267BE38();
extern int fn_82688D90();
extern int fn_8268C510();
extern int fn_826D6D98();
extern U64 storeWordConditionalIndexed();


void fn_82688E90(int param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint *puVar4;
  ulonglong uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  char in_RESERVE;
  byte in_cr0;
  uint auStack_40 [2];
  uint *puStack_38;
  uint *puStack_34;
  
  piVar6 = *(int **)(param_1 + 0xc);
  if (piVar6 != (int *)0x0) {
    uVar7 = 0;
    if (piVar6[1] != 0) {
      iVar8 = 0;
      do {
        iVar9 = *(int *)(*piVar6 + iVar8);
        fn_826D6D98(*(undefined4 *)(iVar9 + 0x20));
        iVar9 = *(int *)(*(int *)(iVar9 + 0x20) + 0x98);
        sync(1);
        if (iVar9 != 0) {
          puStack_38 = auStack_40;
          puStack_34 = auStack_40;
          do {
            uVar2 = (**(code **)(**(int **)(iVar9 + 4) + 0x3c))();
            fn_8268C510(auStack_40,uVar2);
            fn_82688D90(param_2,param_2,&puStack_38);
            lVar3 = ((ulonglong)auStack_40[0] & 0xfffffffc) + 4;
            do {
              puVar4 = (uint *)lVar3;
              uVar5 = (ulonglong)*puVar4;
              if (in_RESERVE != '\0') {
                uVar1 = storeWordConditionalIndexed(uVar5 - 1,0,lVar3);
                *puVar4 = uVar1;
                in_cr0 = 2;
              }
            } while (!(bool)(in_cr0 >> 1 & 1));
            in_cr0 = (uVar5 == 1) << 1;
            if (uVar5 == 1) {
              fn_8267BE38();
            }
            iVar9 = *(int *)(iVar9 + 0xc);
            sync(1);
          } while (iVar9 != 0);
        }
        piVar6 = *(int **)(param_1 + 0xc);
        uVar7 = uVar7 + 1;
        iVar8 = iVar8 + 4;
      } while (uVar7 < (uint)piVar6[1]);
    }
  }
  return;
}

