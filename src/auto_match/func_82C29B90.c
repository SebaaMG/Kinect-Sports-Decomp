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
extern int fn_82C27A68();
extern int fn_82C297F8();
extern unsigned int iStack_3c;
extern unsigned int iStack_40;


undefined8 fn_82C29B90(undefined8 param_1,undefined8 param_2,int *param_3,uint *param_4)

{
  uint uVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  int iStack_40;
  int iStack_3c;
  int *piStack_38;
  int *apiStack_34 [13];
  
  iStack_3c = 0;
  piStack_38 = (int *)0x0;
  *param_3 = 0;
  *param_4 = 0;
  apiStack_34[0] = (int *)0x0;
  iStack_40 = 0;
  uVar3 = fn_82C27A68(param_1,param_2,&iStack_3c);
  plVar4 = (longlong *)param_2;
  if ((int)uVar3 < 0) {
    return uVar3;
  }
  if (iStack_3c == 0) {
    return 0xffffffff80500009;
  }
  if (*(int *)((int)plVar4 + 0x1c) != 0) {
    uVar3 = fn_82C297F8(param_1,*plVar4,&piStack_38,&iStack_40);
    piVar2 = piStack_38;
    if ((int)uVar3 < 0) {
      return uVar3;
    }
    if (iStack_40 == 0) {
      return 0xffffffff80500008;
    }
    if (*(int *)(plVar4 + 1) != 0) {
      uVar3 = fn_82C297F8(param_1,plVar4[2],apiStack_34,&iStack_40);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      if (iStack_40 == 0) {
        return 0xffffffff80500008;
      }
      if (apiStack_34[0] != piVar2) {
        apiStack_34[0][1] = apiStack_34[0][1] + -1;
      }
    }
    uVar5 = *(uint *)((int)plVar4 + 0x1c);
    uVar1 = *(uint *)(*piVar2 + 4);
    lVar6 = *(longlong *)(*piVar2 + 8);
    if (((ulonglong)uVar1 - *plVar4) + lVar6 < (ulonglong)uVar5) {
      uVar5 = ((int)lVar6 - (int)*plVar4) + uVar1;
    }
    *param_4 = uVar5;
    *(uint *)((int)plVar4 + 0x1c) = *(int *)((int)plVar4 + 0x1c) - uVar5;
    *param_3 = ((int)*plVar4 - (int)*(undefined8 *)((int *)*piVar2 + 2)) + *(int *)*piVar2;
    plVar4[2] = *plVar4;
    *(undefined4 *)(plVar4 + 1) = 1;
    *plVar4 = (ulonglong)*param_4 + *plVar4;
    if (*(int *)((int)plVar4 + 0x1c) != 0) {
      return uVar3;
    }
  }
  return 0x500001;
}

