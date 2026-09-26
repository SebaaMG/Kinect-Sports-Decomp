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
extern int fn_82C56398();


undefined8 fn_82C7BB28(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  uVar1 = param_2 + 0xfU & 0xfffffff0;
  lVar11 = (ulonglong)*(uint *)(param_1 + 0x6070) + 8;
  iVar6 = (int)(param_2 + 0xfU) >> 4;
  uVar10 = (ulonglong)(uint)(param_3 + 0xf >> 4) / (ulonglong)*(uint *)(param_1 + 0xd40);
  trapWord(6,(ulonglong)*(uint *)(param_1 + 0xd40),0);
  uVar4 = fn_82C56398(lVar11,((longlong)*(int *)(param_1 + 0x88) *
                                (longlong)*(int *)(param_1 + 0x8c) & 0x7fffffffU) << 1,
                        0xffffffff82196582);
  *(undefined4 *)(param_1 + 0x3d68) = uVar4;
  iVar5 = fn_82C56398(lVar11,(longlong)*(int *)(param_1 + 0x88) *
                               (longlong)*(int *)(param_1 + 0x8c),0xffffffff82196582);
  *(int *)(param_1 + 0x3d70) = iVar5;
  if ((*(int *)(param_1 + 0x3d68) != 0) && (iVar5 != 0)) {
    uVar4 = fn_82C56398(lVar11,((longlong)*(int *)(param_1 + 0x88) *
                                  (longlong)*(int *)(param_1 + 0x8c) & 0x7fffffffU) << 1,
                          0xffffffff82196582);
    *(undefined4 *)(param_1 + 0x3d6c) = uVar4;
    iVar5 = fn_82C56398(lVar11,(longlong)*(int *)(param_1 + 0x88) *
                                 (longlong)*(int *)(param_1 + 0x8c),0xffffffff82196582);
    *(int *)(param_1 + 0x3d74) = iVar5;
    if ((*(int *)(param_1 + 0x3d6c) != 0) && (iVar5 != 0)) {
      if ((*(int *)(param_1 + 0x10) != 0) &&
         (iVar5 = *(int *)(*(int *)(param_1 + 0x6070) + 0x43d8), param_1 != iVar5)) {
        *(undefined4 *)(param_1 + 0x3d78) = *(undefined4 *)(iVar5 + 0x3d78);
        *(undefined4 *)(param_1 + 0x3d80) = *(undefined4 *)(iVar5 + 0x3d80);
        *(undefined4 *)(param_1 + 0x3d88) = *(undefined4 *)(iVar5 + 0x3d88);
        *(undefined4 *)(param_1 + 0x3d90) = *(undefined4 *)(iVar5 + 0x3d90);
        *(undefined4 *)(param_1 + 0x3d98) = *(undefined4 *)(iVar5 + 0x3d98);
        *(undefined4 *)(param_1 + 0x3da0) = *(undefined4 *)(iVar5 + 0x3da0);
        *(undefined4 *)(param_1 + 0x3da8) = *(undefined4 *)(iVar5 + 0x3da8);
        *(undefined4 *)(param_1 + 0x3db0) = *(undefined4 *)(iVar5 + 0x3db0);
        *(undefined4 *)(param_1 + 0x3db8) = *(undefined4 *)(iVar5 + 0x3db8);
        *(undefined4 *)(param_1 + 0x3dc0) = *(undefined4 *)(iVar5 + 0x3dc0);
        *(undefined4 *)(param_1 + 0x3dc8) = *(undefined4 *)(iVar5 + 0x3dc8);
        *(undefined4 *)(param_1 + 0x3dd0) = *(undefined4 *)(iVar5 + 0x3dd0);
        return 0;
      }
      uVar7 = (uVar10 & 0x7fffffff) * 2 - 1;
      iVar5 = (int)(uVar1 + 0x1f) >> 5;
      uVar4 = fn_82C56398(lVar11,(longlong)iVar5 * (longlong)(int)uVar7,0xffffffff82196582);
      *(undefined4 *)(param_1 + 0x3d78) = uVar4;
      uVar4 = fn_82C56398(lVar11,((longlong)iVar5 * (longlong)(int)(uint)uVar10 & 0x7fffffffU) <<
                                   1,0xffffffff82196582);
      *(undefined4 *)(param_1 + 0x3d80) = uVar4;
      iVar5 = ((int)uVar1 >> 1) + 0x1f >> 5;
      lVar8 = (longlong)(int)((uVar7 & 0xffffffff) >> 1) * (longlong)iVar5;
      uVar4 = fn_82C56398(lVar11,lVar8,0xffffffff82196582);
      *(undefined4 *)(param_1 + 0x3d88) = uVar4;
      lVar9 = (longlong)(int)((uint)uVar10 & 0x7fffffff) * (longlong)iVar5;
      uVar4 = fn_82C56398(lVar11,lVar9,0xffffffff82196582);
      *(undefined4 *)(param_1 + 0x3d90) = uVar4;
      uVar4 = fn_82C56398(lVar11,lVar8,0xffffffff82196582);
      *(undefined4 *)(param_1 + 0x3d98) = uVar4;
      iVar5 = fn_82C56398(lVar11,lVar9,0xffffffff82196582);
      *(int *)(param_1 + 0x3da0) = iVar5;
      if ((((*(int *)(param_1 + 0x3d78) != 0) && (*(int *)(param_1 + 0x3d80) != 0)) &&
          (*(int *)(param_1 + 0x3d88) != 0)) &&
         (((*(int *)(param_1 + 0x3d90) != 0 && (*(int *)(param_1 + 0x3d98) != 0)) && (iVar5 != 0))))
      {
        iVar3 = (int)(uVar10 << 4);
        iVar2 = iVar6 * 2;
        iVar5 = iVar3 + 0x1f >> 5;
        uVar4 = fn_82C56398(lVar11,(longlong)(iVar2 + -1) * (longlong)iVar5,0xffffffff82196582);
        *(undefined4 *)(param_1 + 0x3da8) = uVar4;
        uVar4 = fn_82C56398(lVar11,((longlong)iVar5 * (longlong)iVar6 & 0x7fffffffU) << 1,
                              0xffffffff82196582);
        *(undefined4 *)(param_1 + 0x3db0) = uVar4;
        iVar6 = (iVar3 >> 1) + 0x1f >> 5;
        lVar8 = (longlong)(iVar2 + -1 >> 1) * (longlong)iVar6;
        uVar4 = fn_82C56398(lVar11,lVar8,0xffffffff82196582);
        *(undefined4 *)(param_1 + 0x3db8) = uVar4;
        lVar9 = (longlong)(iVar2 >> 1) * (longlong)iVar6;
        uVar4 = fn_82C56398(lVar11,lVar9,0xffffffff82196582);
        *(undefined4 *)(param_1 + 0x3dc0) = uVar4;
        uVar4 = fn_82C56398(lVar11,lVar8,0xffffffff82196582);
        *(undefined4 *)(param_1 + 0x3dc8) = uVar4;
        iVar6 = fn_82C56398(lVar11,lVar9,0xffffffff82196582);
        *(int *)(param_1 + 0x3dd0) = iVar6;
        if (((*(int *)(param_1 + 0x3da8) != 0) && (*(int *)(param_1 + 0x3db0) != 0)) &&
           ((*(int *)(param_1 + 0x3db8) != 0 &&
            (((*(int *)(param_1 + 0x3dc0) != 0 && (*(int *)(param_1 + 0x3dc8) != 0)) && (iVar6 != 0)
             ))))) {
          return 0;
        }
      }
    }
  }
  return 0xfffffffffffffff7;
}

