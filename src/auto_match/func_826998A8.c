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
extern int fn_8267C498();
extern int fn_82698C48();
extern int fn_82698CC0();
extern int fn_826994A8();
extern int fn_826997B0();
extern int fn_82699828();


undefined8 fn_826998A8(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  int aiStack_50 [20];
  
  if (param_2 == param_3) {
    return 1;
  }
  uVar4 = fn_826994A8();
  if ((int)uVar4 == -1) {
    return 0;
  }
  aiStack_50[0] = param_3;
  uVar5 = fn_82698C48(param_1,0,param_1[1],aiStack_50,0xffffffff82698c28);
  param_1[3] = 0;
  if ((uVar5 & 0xffffffff) < (ulonglong)param_1[1]) {
    uVar1 = *param_1;
    lVar6 = (uVar5 & 0x3fffffff) * 4;
    lVar7 = lVar6 + (ulonglong)uVar1;
    if (*(int *)(*(int *)((int)lVar6 + uVar1) + 0x14) == param_3) {
      aiStack_50[0] = 0;
      lVar6 = (uVar4 & 0x3fffffff) * 4;
      iVar2 = (int)lVar6;
      fn_82698CC0(aiStack_50,*(undefined4 *)(iVar2 + uVar1));
      fn_82698CC0(lVar6 + (ulonglong)uVar1,*(undefined4 *)lVar7);
      iVar3 = aiStack_50[0];
      fn_82698CC0(lVar7,aiStack_50[0]);
      if (iVar3 != 0) {
        fn_8267C498(iVar3);
      }
      iVar2 = *(int *)(iVar2 + *param_1);
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x14) = param_2;
      }
      goto LAB_826999e0;
    }
  }
  aiStack_50[0] = 0;
  fn_82698CC0(aiStack_50,*(undefined4 *)((int)((uVar4 & 0xffffffff) << 2) + *param_1));
  fn_826997B0(param_1,uVar4);
  if ((uVar4 & 0xffffffff) < (uVar5 & 0xffffffff)) {
    uVar5 = uVar5 - 1;
  }
  fn_82699828(param_1,uVar5,aiStack_50);
  if (aiStack_50[0] != 0) {
    fn_8267C498();
  }
LAB_826999e0:
  iVar2 = *(int *)((int)((uVar5 & 0xffffffff) << 2) + *param_1);
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x14) = param_3;
  }
  return 1;
}

