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
extern int fn_82AA66A8();
extern int fn_82AE5600();
extern int fn_82AE5778();


void fn_82AE5E50(undefined4 *param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = param_2 + param_3 + -1;
  cVar1 = fn_82AE5600(param_1 + 2,param_2,lVar2);
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(*param_1,0xdc6,param_2);
  }
  fn_82AE5778(param_1 + 2,param_2,lVar2);
  return;
}

