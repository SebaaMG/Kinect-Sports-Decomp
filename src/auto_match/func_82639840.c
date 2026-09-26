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
extern unsigned int lbl_821957EC;
extern unsigned int uStack_c;


void fn_82639840(int param_1,int param_2,float param_3)

{
  int iVar1;
  undefined4 uStack_c;
  
  iVar1 = (param_2 + 0x30) * 0x18 + param_1;
  uStack_c = (uint)(longlong)(param_3 * lbl_821957EC);
  *(uint *)(iVar1 + 0x14) = (uStack_c & 0xf) << 5 | *(uint *)(iVar1 + 0x14) & 0xfffffe1f;
  *(ulonglong *)(param_1 + 0x18) =
       0x8000000000000000U >> (param_2 + 0x20U & 0x7f) | *(ulonglong *)(param_1 + 0x18);
  return;
}

