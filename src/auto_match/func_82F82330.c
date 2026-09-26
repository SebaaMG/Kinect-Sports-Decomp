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
extern int fn_82F87C88();


ulonglong fn_82F82330(ulonglong param_1,char *param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  char *pcVar5;
  ulonglong uVar4;
  ulonglong uVar6;
  
  pcVar5 = param_2;
  if (param_2[1] == ':') {
    pcVar5 = param_2 + 2;
  }
  cVar1 = *pcVar5;
  if ((((cVar1 == '\\') || (cVar1 == '/')) && (pcVar5[1] == '\0')) ||
     (((param_1 & 0x10) != 0 || (cVar1 == '\0')))) {
    uVar4 = 0x4040;
  }
  else {
    uVar4 = 0x8000;
  }
  uVar4 = (~(param_1 & 0xff) & 1) << 7 | uVar4;
  uVar6 = uVar4 | 0x100;
  lVar2 = thunk_FUN_82f6a4b0(param_2,0x2e);
  if ((lVar2 != 0) &&
     (((iVar3 = fn_82F87C88(lVar2,0xffffffff8216aab0), iVar3 == 0 ||
       (iVar3 = fn_82F87C88(lVar2,0xffffffff8216aaa8), iVar3 == 0)) ||
      ((iVar3 = fn_82F87C88(lVar2,0xffffffff8216aaa0), iVar3 == 0 ||
       (iVar3 = fn_82F87C88(lVar2,0xffffffff8216aa98), iVar3 == 0)))))) {
    uVar6 = uVar4 | 0x140;
  }
  return uVar6 >> 6 & 7 | uVar6 >> 3 & 0x38 | uVar6;
}

