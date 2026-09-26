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
extern int fn_82CC8DE0();
extern int fn_82CCD608();
extern unsigned int lbl_82005710;


undefined8
fn_82C7F978(int *param_1,ulonglong param_2,int param_3,int *param_4,ulonglong param_5,int param_6,
             int *param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar7;
  ulonglong uVar6;
  
  if (((param_4 != (int *)0x0) && (param_7 != (int *)0x0)) && (param_1 != (int *)0x0)) {
    if (param_1[0x4a] == 0) {
      uVar4 = (ulonglong)(uint)param_1[8];
    }
    else {
      uVar7 = param_1[8];
      uVar4 = (longlong)((int)uVar7 >> 1) + (ulonglong)((int)uVar7 < 0 && (uVar7 & 1) != 0);
    }
    iVar2 = *param_1;
    iVar1 = *(int *)(iVar2 + 0x10);
    iVar5 = (int)uVar4;
    if (((iVar1 == 0x56555949) || (iVar1 == 0x30323449)) ||
       ((iVar1 == 0x31313450 || (iVar1 == 0x32315659)))) {
      uVar7 = *(int *)(iVar2 + 8) * *(int *)(iVar2 + 4) * 3;
      *param_4 = ((int)uVar7 >> 1) + (uint)((int)uVar7 < 0 && (uVar7 & 1) != 0);
      uVar7 = param_1[7] * iVar5 * 3;
      *param_7 = ((int)uVar7 >> 1) + (uint)((int)uVar7 < 0 && (uVar7 & 1) != 0);
    }
    else {
      uVar7 = (uint)*(ushort *)(iVar2 + 0xe) * *(int *)(iVar2 + 4);
      uVar7 = ((int)uVar7 >> 3) + (uint)((int)uVar7 < 0 && (uVar7 & 7) != 0) + 3;
      *param_4 = (((int)uVar7 >> 2) + (uint)((int)uVar7 < 0 && (uVar7 & 3) != 0)) *
                 *(int *)(iVar2 + 8) * 4;
      uVar7 = (uint)*(ushort *)(*param_1 + 0xe) * param_1[7];
      uVar7 = ((int)uVar7 >> 3) + (uint)((int)uVar7 < 0 && (uVar7 & 7) != 0) + 3;
      *param_7 = (((int)uVar7 >> 2) + (uint)((int)uVar7 < 0 && (uVar7 & 3) != 0)) * iVar5 * 4;
    }
    if ((param_6 < *param_7) || (param_3 < *param_4)) {
      *param_4 = 0;
      *param_7 = 0;
    }
    else if (((param_2 & 0xffffffff) != 0) && ((param_5 & 0xffffffff) != 0)) {
      if (param_1[0x49] != 0) {
        iVar2 = *param_1;
        if (*(int *)(iVar2 + 0x10) == 0x32323450) {
          uVar6 = (longlong)param_1[7] * (longlong)iVar5;
          uVar4 = (longlong)*(int *)(iVar2 + 4) * (longlong)*(int *)(iVar2 + 8);
          uVar7 = (int)uVar6 + (int)((uVar6 & 0xffffffff) << 1);
          uVar3 = (int)uVar4 + (int)((uVar4 & 0xffffffff) << 1);
          fn_82CCD608((double)(longlong)*(int *)(iVar2 + 4) / (double)(longlong)param_1[7],
                            lbl_82005710,
                            (double)(longlong)*(int *)(iVar2 + 8) / (double)(longlong)iVar5,
                            param_1 + 0x27,param_2,uVar4 + param_2,
                            (longlong)((int)uVar3 >> 1) +
                            (ulonglong)((int)uVar3 < 0 && (uVar3 & 1) != 0) + param_2,param_5,
                            uVar6 + param_5,
                            (longlong)((int)uVar7 >> 1) +
                            (ulonglong)((int)uVar7 < 0 && (uVar7 & 1) != 0) + param_5);
          return 0;
        }
        uVar4 = (longlong)param_1[7] * (longlong)iVar5;
        uVar6 = (longlong)*(int *)(iVar2 + 4) * (longlong)*(int *)(iVar2 + 8);
        uVar7 = (int)uVar4 + (int)((uVar4 & 0xffffffff) << 2);
        uVar3 = (int)uVar6 + (int)((uVar6 & 0xffffffff) << 2);
        fn_82CCD608((double)(longlong)*(int *)(iVar2 + 4) / (double)(longlong)param_1[7],
                          lbl_82005710,
                          (double)(longlong)*(int *)(iVar2 + 8) / (double)(longlong)iVar5,
                          param_1 + 0x27,param_2,uVar6 + param_2,
                          (longlong)((int)uVar3 >> 2) +
                          (ulonglong)((int)uVar3 < 0 && (uVar3 & 3) != 0) + param_2,param_5,
                          uVar4 + param_5,
                          (longlong)((int)uVar7 >> 2) +
                          (ulonglong)((int)uVar7 < 0 && (uVar7 & 3) != 0) + param_5);
        return 0;
      }
      iVar2 = fn_82CC8DE0(param_1 + 0xd,*param_1,param_2,param_5,param_1[7],uVar4);
      if (iVar2 != 0) {
        return 0;
      }
    }
  }
  return 1;
}

