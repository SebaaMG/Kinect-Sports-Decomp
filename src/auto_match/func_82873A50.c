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
extern unsigned int *auStack_10;
extern int fn_82865170();
extern int fn_82866400();
extern int fn_8286D3A0();


undefined8 fn_82873A50(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 auStack_10 [4];
  
  auStack_10[0] = param_2;
  fn_8286D3A0(param_1 + 4,*(undefined4 *)(param_1 + 4),auStack_10);
  fn_82865170();
  iVar1 = fn_82866400();
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  return 0x20120000;
}

