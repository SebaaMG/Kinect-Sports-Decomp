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
extern int fn_82CE5410();
extern int fn_82CEA650();
extern int fn_82CEA748();
extern int fn_82CEAB20();


ulonglong fn_82DC9B80(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar4 = (ulonglong)param_2;
  uVar3 = (ulonglong)param_3;
  if (uVar4 < uVar3) {
    lVar5 = (uVar4 << 0x20) + uVar3;
  }
  else {
    lVar5 = (uVar3 << 0x20) + uVar4;
  }
  param_1 = param_1 + 0x30;
  lVar1 = fn_82CEA748(param_1,lVar5,0);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = lVar1 - 1;
    if (uVar3 == 0) {
      fn_82CEAB20(param_1,lVar5);
      uVar3 = 0;
    }
    else {
      iVar2 = fn_82CE5410();
      fn_82CEA650(param_1,*(undefined4 *)(iVar2 + 0x10),lVar5,uVar3);
      uVar3 = uVar3 & 0xffffffff;
    }
  }
  return uVar3;
}

