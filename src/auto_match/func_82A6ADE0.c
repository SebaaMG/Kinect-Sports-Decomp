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
extern int fn_82A6AD30();
extern int fn_82A7EB68();
extern int fn_82A7F048();
extern int fn_82A7F400();
extern int fn_82C2CED0();
extern int fn_82C2CFE8();


undefined8 fn_82A6ADE0(longlong param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  
  fn_82A6AD30(param_1 + 0x20c,param_1 + 0x208,*(undefined4 *)((int)param_1 + 0x60));
  iVar2 = (int)param_1;
  iVar1 = *(int *)(iVar2 + 100);
  if (iVar1 == 0) {
    pcVar3 = fn_82C2CED0;
  }
  else {
    pcVar3 = fn_82C2CFE8;
  }
  *(code **)(iVar2 + 0x1e8) = pcVar3;
  if (iVar1 == 0) {
    if (*(int *)(iVar2 + 0x60) == 0x3d) {
      pcVar3 = fn_82A7EB68;
    }
    else {
      if (*(int *)(iVar2 + 0x60) != 0x5e) goto LAB_82a6ae58;
      pcVar3 = fn_82A7F048;
    }
    *(code **)(iVar2 + 0x1e8) = pcVar3;
  }
LAB_82a6ae58:
  if (iVar1 == 1) {
    *(code **)(iVar2 + 0x1e8) = fn_82A7F400;
  }
  return 0;
}

