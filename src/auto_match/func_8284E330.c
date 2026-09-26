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
extern int fn_82815400();
extern int fn_828176F0();
extern int fn_82817868();
extern int fn_82817870();
extern int fn_82840000();
extern int fn_8284E1F0();
extern int fn_8284FD98();


void fn_8284E330(undefined8 param_1,int param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int aiStack_50 [20];
  
  fn_828176F0(*(undefined4 *)(param_2 + 0x124),0xffffffff8201f514,aiStack_50);
  if (aiStack_50[0] != 0) {
    uVar2 = fn_82817868();
    uVar3 = fn_82817870(aiStack_50[0]);
    if ((uVar2 & 0xffffffff) != 0) {
      lVar4 = fn_8284FD98(param_2);
      lVar4 = lVar4 + (uVar2 + 0xf & 0xfffffff0);
      uVar3 = (*(code *)*param_4)(lVar4,uVar3);
      *param_3 = (int)uVar3;
      (*(code *)param_4[1])(uVar3,0,lVar4);
      fn_828176F0(*(undefined4 *)(param_2 + 0x124),0xffffffff8201f51c,aiStack_50);
      if (aiStack_50[0] != 0) {
        uVar2 = fn_82817868();
        uVar3 = fn_82817870(aiStack_50[0]);
        if ((uVar2 & 0xffffffff) != 0) {
          uVar5 = (*(code *)param_4[4])(uVar2,uVar3);
          *(undefined4 *)(*param_3 + 0x20) = uVar5;
        }
      }
      fn_828176F0(*(undefined4 *)(param_2 + 0x124),0xffffffff8201f524,aiStack_50);
      if (aiStack_50[0] != 0) {
        uVar2 = fn_82817868();
        uVar3 = fn_82817870(aiStack_50[0]);
        if ((uVar2 & 0xffffffff) != 0) {
          uVar5 = (*(code *)param_4[8])(uVar2,uVar3);
          *(undefined4 *)(*param_3 + 0x24) = uVar5;
        }
      }
    }
  }
  fn_8284E1F0(param_2,*param_3,param_4);
  if (((*(int *)(param_2 + 300) != 0) && (*(int *)(*(int *)(param_2 + 0x128) + 4) != 0)) &&
     (uVar6 = 0, *(int *)(param_2 + 300) != 0)) {
    iVar7 = 0;
    iVar8 = 0;
    iVar9 = 0;
    do {
      iVar1 = *(int *)(*(int *)(param_2 + 0x128) + iVar8 + 4);
      if (iVar1 != 0) {
        fn_82815400(param_1,iVar1,*(int *)(*param_3 + 0x4c) + iVar9 + 4);
        fn_82840000(*(undefined4 *)(*(int *)(param_2 + 0x128) + iVar8 + 4),
                          *(undefined4 *)(((undefined4 *)*param_3)[0x13] + iVar9 + 4),
                          *(undefined4 *)*param_3);
        iVar1 = *(int *)(*(int *)(param_2 + 0x128) + iVar8 + 0xc);
        if (iVar1 != 0) {
          *(int *)(*(int *)(*param_3 + 0x4c) + iVar9 + 8) = iVar1;
          *(undefined4 *)(*(int *)(*param_3 + 0x4c) + iVar9 + 0xc) = 0;
        }
        *(undefined4 *)(*(int *)(*param_3 + 0x50) + iVar7) =
             *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x128) + iVar8 + 4) + 0x30);
      }
      uVar6 = uVar6 + 1;
      iVar9 = iVar9 + 0x10;
      iVar8 = iVar8 + 0x20;
      iVar7 = iVar7 + 4;
    } while (uVar6 < *(uint *)(param_2 + 300));
  }
  return;
}

