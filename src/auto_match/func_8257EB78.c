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
extern int fn_82230360();
extern int fn_82665348();
extern int fn_8266A4E8();
extern unsigned int uStack_80;


longlong fn_8257EB78(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  longlong lVar4;
  undefined4 uStack_80;
  char acStack_7c [100];
  
  lVar4 = 0;
  uStack_80 = 0x5c;
  acStack_7c[0] = '\0';
  iVar2 = fn_8266A4E8(&uStack_80);
  if (iVar2 == 0) {
    lVar4 = thunk_FUN_82a2b798();
  }
  else if (((acStack_7c[0] != '\0') || (iVar2 = fn_82665348(acStack_7c,0x55), -1 < iVar2)) ||
          (lVar4 = thunk_FUN_82a2b798(), lVar4 == 0)) {
    pcVar3 = acStack_7c;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    fn_82230360(param_1,acStack_7c,pcVar3 + (-1 - (int)acStack_7c));
  }
  return lVar4;
}

