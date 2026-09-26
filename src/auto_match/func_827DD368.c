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
extern unsigned int *auStack_20;
extern int fn_827D9ED0();
extern int fn_82A1E650();
extern int fn_82A29AC0();


undefined8 fn_827DD368(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar3;
  undefined8 uVar2;
  int iVar4;
  undefined1 auStack_20 [8];
  
  iVar4 = param_2[7];
  uVar1 = *param_2;
  iVar3 = fn_82A1E650(*(undefined4 *)(iVar4 + 0x10),0);
  if (iVar3 == 0x102) {
    uVar2 = 0x3e5;
  }
  else {
    uVar2 = fn_827D9ED0(uVar1);
    iVar4 = fn_82A29AC0(uVar2,iVar4,auStack_20,0);
    if (iVar4 == 0) {
      uVar2 = thunk_FUN_82a2b798();
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

