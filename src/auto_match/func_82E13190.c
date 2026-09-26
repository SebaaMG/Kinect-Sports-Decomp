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
extern unsigned int *auStack_30;
extern int fn_82CEAC20();
extern int fn_82D000A0();
extern int fn_82D00388();
extern int fn_82D003F0();
extern int fn_82E13058();


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82E13190(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  undefined1 auStack_30 [24];
  
  if ((param_3 & 0xffffffff) == 0) {
    param_3 = fn_82CEAC20(param_2);
  }
  fn_82D000A0(param_1 + 0xc,param_3,param_2);
  fn_82D00388(auStack_30,0);
  fn_82E13058(param_1,param_2,auStack_30,0xffffffff82e12ed8,0);
  fn_82D003F0(auStack_30);
  return;
}

