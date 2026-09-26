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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82A8BBF8();
extern int fn_8314304C();


longlong fn_82A8BC78(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  *param_4 = 0;
  uVar2 = fn_8265C940(param_3,0x20980000);
  if (uVar2 != 0) {
    uVar3 = fn_8265C940(0x59c0,0x20980000);
    if ((uVar3 & 0xffffffff) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = fn_82A8BBF8(uVar3,param_3,uVar2);
    }
    *param_4 = (int)uVar3;
    if ((uVar3 & 0xffffffff) != 0) {
      lVar4 = fn_8314304C(param_1,param_2,uVar3 + 0x2c,uVar3 + 0x10);
      if (-1 < lVar4) {
        return lVar4;
      }
      goto LAB_82a8bd0c;
    }
  }
  lVar4 = -0x7ff8fff2;
LAB_82a8bd0c:
  iVar1 = *param_4;
  if (iVar1 == 0) {
    if ((uVar2 & 0xffffffff) != 0) {
      fn_8265C990(uVar2,0x20980000);
    }
  }
  else {
    (**(code **)(*(int *)(iVar1 + 8) + 4))(iVar1 + 8);
    *param_4 = 0;
  }
  return lVar4;
}

