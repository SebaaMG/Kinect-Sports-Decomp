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
extern int fn_8225F160();
extern int fn_8236C120();
extern int fn_823DBA60();
extern int fn_825275B0();


undefined8 fn_823693A0(int *param_1,int param_2)

{
  int iVar2;
  int iVar3;
  undefined8 uVar1;
  longlong lVar4;
  
  iVar3 = param_1[0x268];
  if ((iVar3 != 0) && (param_2 != iVar3)) {
    iVar2 = param_1[0x10b];
    if ((iVar2 == 3) || ((iVar2 == 5 || (iVar2 == 4)))) {
      fn_825275B0(param_1[900]);
    }
    if (param_1[0x10b] != 0) {
      fn_825275B0(param_1[900]);
    }
    param_1[0x10b] = 0;
  }
  if ((param_2 != 0) && (param_2 != iVar3)) {
    fn_8236C120(param_1);
  }
  iVar2 = (**(code **)(*param_1 + 200))(param_1);
  if ((((iVar2 == 0) && (param_2 != 0)) && (*(int *)(param_2 + 0x1ec) != 0)) &&
     ((param_2 != iVar3 && (*(int *)(param_2 + 0x2c) == 1)))) {
    iVar3 = fn_8225F160();
    if (*(int *)(iVar3 + 8) == 0) {
      lVar4 = 1 - (ulonglong)(uint)param_1[0x26b];
    }
    else {
      lVar4 = 0;
    }
    fn_823DBA60(param_1[300],lVar4);
    param_1[0x26a] = 0;
  }
  iVar3 = param_1[0x268];
  uVar1 = 0;
  if (iVar3 != param_2) {
    param_1[0x278] = 0;
    param_1[0x279] = 0;
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 0x120) = 0;
      param_1[0x26d] = param_1[0x26c];
      param_1[0x269] = param_1[0x268];
    }
    uVar1 = 1;
  }
  param_1[0x268] = param_2;
  if (param_2 == 0) {
    iVar3 = -1;
  }
  else {
    *(undefined4 *)(param_2 + 0x120) = 1;
    iVar3 = *(int *)(param_1[0x268] + 0x2c);
  }
  param_1[0x26c] = iVar3;
  return uVar1;
}

