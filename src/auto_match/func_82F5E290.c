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
extern int fn_829C90F0();
extern int fn_82F5E0A0();
extern int fn_82F5E1B8();


byte fn_82F5E290(undefined8 param_1,undefined4 *param_2)

{
  byte bVar2;
  int iVar1;
  byte bVar3;
  
  bVar2 = fn_82F5E0A0();
  iVar1 = fn_829C90F0(0,0,*param_2);
  bVar3 = fn_82F5E1B8(param_1,param_2);
  return bVar3 & bVar2 & 1 & iVar1 == 0;
}

