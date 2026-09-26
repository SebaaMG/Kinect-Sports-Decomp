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
extern int fn_82E4BEC0();
extern int fn_82E4DAA8();


undefined8 fn_82E25660(int param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  int in_stack_0000006c;
  char in_stack_0000008f;
  char in_stack_0000009f;
  undefined4 in_stack_000000c4;
  
  if (param_1 == 0) {
    uVar1 = 1;
  }
  else {
    if ((((in_stack_0000008f == '\0') && (in_stack_0000006c < 3)) && (in_stack_0000009f == '\0')) &&
       ((param_2 == 2 || (param_2 == 5)))) {
      iVar2 = fn_82E4DAA8(param_1);
      if (iVar2 != 0) {
        return 2;
      }
      fn_82E4BEC0(param_1,in_stack_000000c4);
      return 0;
    }
    uVar1 = 5;
  }
  return uVar1;
}

