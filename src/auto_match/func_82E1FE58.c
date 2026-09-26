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
extern int fn_82A1F2F8();
extern int fn_82E1F980();
extern int fn_82E1FCA8();
extern int fn_82E1FD10();


undefined8 fn_82E1FE58(int param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  
  fn_82A1F2F8();
  if ((*(int *)(param_1 + 0x10) == 0) ||
     ((lVar2 = fn_82E1F980(param_1), -1 < lVar2 && (iVar3 = fn_82E1FD10(param_1), iVar3 == 0))))
  {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_82E1FCA8(param_1);
  }
  return uVar1;
}

