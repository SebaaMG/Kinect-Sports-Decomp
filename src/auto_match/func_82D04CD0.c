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
extern unsigned int *auStack_60;
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CFBE40();
extern int fn_82CFC050();
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_82D04CD0(int *param_1,ulonglong param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar2;
  ulonglong uVar1;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int aiStack_80 [8];
  uint auStack_60 [4];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  iVar7 = 0;
  auStack_60[0] = (uint)param_2;
  iVar6 = param_1[1] + -1;
  aiStack_80[0] = 0;
  aiStack_80[1] = 0;
  iVar3 = 0;
  aiStack_80[2] = 0;
  aiStack_80[3] = 0;
  aiStack_80[4] = 0;
  aiStack_80[5] = 0;
  uStack_48 = 0;
  auStack_60[1] = param_3;
  auStack_60[2] = param_4;
  auStack_60[3] = param_5;
  uStack_50 = param_6;
  uStack_4c = param_7;
  iVar4 = iVar6;
  if ((param_2 & 0xffffffff) != 0) {
    iVar5 = 0;
    uVar1 = param_2;
    do {
      iVar2 = fn_82CFBE40(uVar1);
      iVar3 = iVar3 + 1;
      iVar4 = iVar2 + iVar4;
      *(int *)((int)aiStack_80 + iVar5) = iVar2;
      iVar5 = iVar3 * 4;
      uVar1 = (ulonglong)auStack_60[iVar3];
    } while (uVar1 != 0);
  }
  iVar5 = iVar4 + 1;
  iVar3 = fn_82CE5410();
  if ((int)(param_1[2] & 0x3fffffffU) < iVar5) {
    iVar2 = (param_1[2] & 0x3fffffffU) << 1;
    if (iVar2 <= iVar5) {
      iVar2 = iVar5;
    }
    fn_82CE6310(*(undefined4 *)(iVar3 + 0xc),param_1,iVar2,1);
  }
  param_1[1] = iVar5;
  *(undefined1 *)(*param_1 + iVar4) = 0;
  if ((param_2 & 0xffffffff) != 0) {
    iVar4 = 0;
    do {
      iVar3 = *(int *)((int)aiStack_80 + iVar4);
      fn_82CFC050(*param_1 + iVar6,param_2,iVar3);
      iVar7 = iVar7 + 1;
      iVar4 = iVar7 * 4;
      iVar6 = iVar3 + iVar6;
      param_2 = (ulonglong)auStack_60[iVar7];
    } while (param_2 != 0);
  }
  return;
}

