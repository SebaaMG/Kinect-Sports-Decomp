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
extern int fn_827D50B8();
extern int fn_827D9ED0();
extern int fn_82A1E810();
extern int fn_82A29AC0();


ulonglong fn_827DD6F8(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar4;
  undefined8 uVar2;
  int iVar5;
  ulonglong uVar3;
  
  uVar1 = *param_2;
  iVar5 = param_2[7];
  iVar4 = fn_827D9ED0(uVar1);
  if ((iVar4 == -1) ||
     ((iVar4 = fn_827D50B8(param_2[1]), iVar4 != 0x3e5 &&
      (iVar4 = fn_827D50B8(param_2[1]), iVar4 != 0x3e4)))) {
    if (*(int *)(iVar5 + 0x10) != 0) {
      fn_82A1E810();
    }
    uVar3 = 6;
  }
  else {
    uVar2 = fn_827D9ED0(uVar1);
    iVar5 = fn_82A29AC0(uVar2,iVar5,param_2 + 6,0);
    if (iVar5 == 0) {
      uVar3 = thunk_FUN_82a2b798();
      uVar3 = -(ulonglong)(uVar3 != 0x26) & uVar3;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

