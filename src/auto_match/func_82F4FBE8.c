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
extern int fn_82F534D8();
extern int fn_82F538F8();
extern unsigned int lbl_82165968;
extern unsigned int lbl_8216596C;
extern unsigned int lbl_82165970;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82F4FBE8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = fn_82F538F8(param_2);
  if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
    fn_82F534D8((double)lbl_82165968,(double)lbl_8216596C,(double)lbl_82165970,
                 (double)lbl_821AAD20);
  }
  return;
}

