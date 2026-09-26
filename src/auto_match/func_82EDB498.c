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
extern int fn_82F2EFA8();
extern int fn_82F338B8();
extern unsigned int lbl_82005710;


undefined8
fn_82EDB498(int param_1,ulonglong param_2,uint param_3,uint *param_4,ulonglong param_5,
             uint param_6,uint *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  if (((param_4 != (uint *)0x0) && (param_7 != (uint *)0x0)) && (param_1 != 0)) {
    uVar6 = *(uint *)(param_1 + 0x24);
    uVar7 = (ulonglong)uVar6;
    if (*(int *)(param_1 + 0x158) != 0) {
      uVar7 = (longlong)((int)uVar6 >> 1) + (ulonglong)((int)uVar6 < 0 && (uVar6 & 1) != 0);
    }
    iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
    iVar8 = (int)uVar7;
    if (((iVar3 == 0x56555949) || (iVar3 == 0x30323449)) || (iVar3 == 0x32315659)) {
      uVar6 = *(int *)(*(int *)(param_1 + 4) + 8) * *(int *)(*(int *)(param_1 + 4) + 4) * 3;
      *param_4 = ((int)uVar6 >> 1) + (uint)((int)uVar6 < 0 && (uVar6 & 1) != 0);
      uVar6 = *(int *)(param_1 + 0x20) * iVar8 * 3;
      uVar6 = ((int)uVar6 >> 1) + (uint)((int)uVar6 < 0 && (uVar6 & 1) != 0);
    }
    else {
      iVar3 = *(int *)(param_1 + 4);
      uVar6 = (uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4);
      uVar6 = ((int)uVar6 >> 3) + (uint)((int)uVar6 < 0 && (uVar6 & 7) != 0) + 3;
      *param_4 = (((int)uVar6 >> 2) + (uint)((int)uVar6 < 0 && (uVar6 & 3) != 0)) *
                 *(int *)(iVar3 + 8) * 4;
      uVar6 = (uint)*(ushort *)(*(int *)(param_1 + 4) + 0xe) * *(int *)(param_1 + 0x20);
      uVar6 = ((int)uVar6 >> 3) + (uint)((int)uVar6 < 0 && (uVar6 & 7) != 0) + 3;
      uVar6 = (((int)uVar6 >> 2) + (uint)((int)uVar6 < 0 && (uVar6 & 3) != 0)) * iVar8 * 4;
    }
    *param_7 = uVar6;
    if ((param_6 < uVar6) || (param_3 < *param_4)) {
      *param_4 = 0;
      *param_7 = 0;
      return 0xffffffff80004005;
    }
    if (((param_2 & 0xffffffff) != 0) && ((param_5 & 0xffffffff) != 0)) {
      if (*(int *)(param_1 + 0x154) == 0) {
        iVar3 = fn_82F2EFA8(param_1 + 0x40,*(undefined4 *)(param_1 + 4),param_2,param_5,
                                  *(undefined4 *)(param_1 + 0x20),uVar7);
        if (iVar3 == 0) {
          return 0xffffffff80004005;
        }
      }
      else {
        iVar3 = *(int *)(param_1 + 4);
        iVar1 = *(int *)(iVar3 + 4);
        iVar2 = *(int *)(param_1 + 0x20);
        uVar7 = (longlong)iVar2 * (longlong)iVar8;
        if (*(int *)(iVar3 + 0x10) != 0x50343232) {
          uVar5 = (longlong)iVar1 * (longlong)*(int *)(iVar3 + 8);
          uVar6 = (int)uVar7 + (int)((uVar7 & 0xffffffff) << 2);
          uVar4 = (int)uVar5 + (int)((uVar5 & 0xffffffff) << 2);
          fn_82F338B8((double)(longlong)iVar1 / (double)(longlong)iVar2,lbl_82005710,
                            (double)(longlong)*(int *)(iVar3 + 8) / (double)(longlong)iVar8,
                            param_1 + 0xcc,param_2,uVar5 + param_2,
                            (longlong)((int)uVar4 >> 2) +
                            (ulonglong)((int)uVar4 < 0 && (uVar4 & 3) != 0) + param_2,param_5,
                            uVar7 + param_5,
                            (longlong)((int)uVar6 >> 2) +
                            (ulonglong)((int)uVar6 < 0 && (uVar6 & 3) != 0) + param_5);
          return 0;
        }
        uVar5 = (longlong)iVar1 * (longlong)*(int *)(iVar3 + 8);
        uVar6 = (int)uVar7 + (int)((uVar7 & 0xffffffff) << 1);
        uVar4 = (int)uVar5 + (int)((uVar5 & 0xffffffff) << 1);
        fn_82F338B8((double)(longlong)iVar1 / (double)(longlong)iVar2,lbl_82005710,
                          (double)(longlong)*(int *)(iVar3 + 8) / (double)(longlong)iVar8,
                          param_1 + 0xcc,param_2,uVar5 + param_2,
                          (longlong)((int)uVar4 >> 1) +
                          (ulonglong)((int)uVar4 < 0 && (uVar4 & 1) != 0) + param_2,param_5,
                          uVar7 + param_5,
                          (longlong)((int)uVar6 >> 1) +
                          (ulonglong)((int)uVar6 < 0 && (uVar6 & 1) != 0) + param_5);
      }
      return 0;
    }
  }
  return 1;
}

