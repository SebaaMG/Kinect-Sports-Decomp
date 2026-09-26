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
extern int fn_82BD3FC0();
extern int fn_82BD75C0();
extern int fn_82BD8D78();


longlong fn_82BD44D8(int param_1)

{
  longlong lVar1;
  
  if ((*(int *)(param_1 + 0x18) == 0) && (*(int *)(param_1 + 0x24) == 1)) {
    fn_82BD8D78(*(undefined4 *)(param_1 + 0x4c));
  }
  lVar1 = fn_82BD75C0(param_1);
  if (lVar1 < 0) {
    fn_82BD3FC0(param_1);
  }
  return lVar1;
}

