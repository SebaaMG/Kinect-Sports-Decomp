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
extern int fn_82C7F978();
extern int fn_82C7FD00();


undefined8
fn_82C80930(int *param_1,undefined8 param_2,undefined8 param_3,int *param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  iVar1 = *param_1;
  iVar2 = param_1[0x4b];
  if (iVar2 == 0) {
    uVar3 = fn_82C7F978();
    return uVar3;
  }
  if (iVar2 == 1) {
    if (param_1[0x4c] == 0) {
      return 1;
    }
    uVar4 = (ulonglong)*(uint *)(iVar1 + 8);
    if ((int)*(uint *)(iVar1 + 8) < 1) {
      uVar4 = -uVar4;
    }
    fn_82C7FD00(param_1,param_1[0x4c],param_2,param_1[9],param_1[10],*(undefined4 *)(iVar1 + 4),
                  uVar4,param_1[1]);
    uVar3 = fn_82C7F978(param_1,param_1[0x4c],param_3,param_4,param_5,param_6,param_7);
  }
  else if (iVar2 == 2) {
    if (param_1[0x4d] == 0) {
      return 1;
    }
    uVar3 = fn_82C7F978(param_1,param_2,param_3,param_4,param_1[0x4d],param_6,param_7);
    fn_82C7FD00(param_1,param_5,param_1[0x4d],param_1[7],param_1[8],param_1[0xb],param_1[0xc],0);
  }
  else {
    if (iVar2 != 3) {
      return 1;
    }
    if (param_1[0x4d] == 0) {
      return 1;
    }
    if (param_1[0x4c] == 0) {
      return 1;
    }
    uVar4 = (ulonglong)*(uint *)(iVar1 + 8);
    if ((int)*(uint *)(iVar1 + 8) < 1) {
      uVar4 = -uVar4;
    }
    fn_82C7FD00(param_1,param_1[0x4c],param_2,param_1[9],param_1[10],*(undefined4 *)(iVar1 + 4),
                  uVar4,param_1[1]);
    uVar3 = fn_82C7F978(param_1,param_1[0x4c],param_3,param_4,param_1[0x4d],param_6,param_7);
    fn_82C7FD00(param_1,param_5,param_1[0x4d],param_1[7],param_1[8],param_1[0xb],param_1[0xc],0);
  }
  if (*param_4 == 0) {
    return 1;
  }
  return uVar3;
}

