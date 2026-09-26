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
extern int fn_8267C498();
extern int fn_826824B0();
extern int fn_82695750();
extern int fn_82696330();
extern int fn_8269A678();
extern int fn_826AEC60();


undefined8
fn_82700C78(int param_1,undefined8 param_2,int *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  int iVar1;
  int iVar3;
  undefined8 uVar2;
  int iVar4;
  undefined1 auStack_60 [96];
  
  if (*(int *)(param_1 + 0x68) == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = *param_3;
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1U & 0x8fffffff;
    }
    iVar3 = 0;
    iVar1 = *param_3;
    if ((param_3[1] != 0) && (iVar3 = fn_8269A678(param_3[1],param_1), iVar3 != 0)) {
      *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
    }
    if (iVar1 == 0) {
      iVar4 = iVar3 + 0x68;
      if (iVar3 == 0) {
        iVar4 = 0;
      }
    }
    else {
      iVar4 = iVar1 + 0x10;
    }
    uVar2 = (**(code **)(**(int **)(param_1 + 0x68) + 0x5c))();
    fn_82695750(auStack_60,param_3 + 2);
    uVar2 = fn_826AEC60(auStack_60,param_4,iVar4,uVar2,param_5,param_6,param_2);
    fn_82696330(auStack_60);
    if (iVar3 != 0) {
      fn_8267C498(iVar3);
    }
    if (iVar1 != 0) {
      fn_826824B0(iVar1);
    }
  }
  return uVar2;
}

