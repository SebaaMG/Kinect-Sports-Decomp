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
extern int fn_8265D5A8();
extern int fn_82F953A8();
extern int fn_82F953B8();
extern int fn_82F95C18();
extern int fn_82F95C50();
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack_10;


void fn_82F96A10(uint param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  uint uStack00000014;
  undefined4 uStack0000001c;
  undefined4 uStack_10;
  
  uStack00000014 = param_1;
  uStack_10 = param_2;
  while( true ) {
    uStack0000001c = uStack_10;
    pcVar1 = (char *)fn_82F953A8(uStack_10);
    if (*pcVar1 != '\0') break;
    puVar2 = (undefined4 *)fn_82F953B8(uStack_10);
    fn_82F96A10(uStack00000014,*puVar2);
    puVar2 = (undefined4 *)fn_8265D5A8(uStack_10);
    uStack_10 = *puVar2;
    fn_82F95C50((ulonglong)uStack00000014 + 1,uStack0000001c);
    fn_82F95C18((ulonglong)uStack00000014 + 1,uStack0000001c,1);
  }
  return;
}

