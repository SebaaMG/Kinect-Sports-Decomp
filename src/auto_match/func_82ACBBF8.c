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
extern int fn_82ACACA8();
extern int fn_82ACAD38();


void fn_82ACBBF8(undefined4 *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = (param_2 & 0xffffffff) >> 2 & 0x3ffffffc;
  uVar1 = fn_82ACACA8(param_1 + 1,uVar2,uVar2 + 3);
  if ((uVar1 & param_2 & 0xf) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(*param_1,0xdc6,(param_2 & 0xffffffff) >> 4);
  }
  fn_82ACAD38(param_1 + 1,uVar2,uVar2 + 3,param_2 & 0xf);
  return;
}

