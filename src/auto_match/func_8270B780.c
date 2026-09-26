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
extern int fn_8268EAC0();
extern int fn_8270B030();
extern int fn_8270B4A0();


undefined8 fn_8270B780(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar2;
  undefined8 uVar1;
  longlong lVar3;
  
  iVar2 = fn_8270B030(param_1 + 0x44);
  fn_8268EAC0(param_1 + 0x4c,iVar2,param_2,param_3,param_4);
  lVar3 = (ulonglong)*(uint *)(iVar2 + 0x18) - 1;
  *(int *)(iVar2 + 0x18) = (int)lVar3;
  if (lVar3 == 0) {
    uVar1 = fn_8270B4A0(param_1,iVar2);
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

