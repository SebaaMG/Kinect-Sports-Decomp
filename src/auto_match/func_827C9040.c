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
extern int fn_827C8F08();
extern int fn_827C8FA0();
extern int fn_827C9038();
extern int fn_82F672D8();
extern int fn_82F6D428();


void fn_827C9040(uint *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = fn_82F6D428();
  param_2[3] = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x3f;
    fn_82F672D8((ulonglong)*param_1 + 0x18,0xffffffff82196582,0x50);
    (**(code **)*param_1)(param_1);
  }
  *param_2 = fn_827C8F08;
  param_2[1] = fn_827C8FA0;
  param_2[2] = fn_827C9038;
  return;
}

