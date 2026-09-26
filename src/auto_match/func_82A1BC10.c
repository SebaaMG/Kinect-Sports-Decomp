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
extern int fn_82A36B70();


undefined8
fn_82A1BC10(int param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 1) {
    return 0xffffffff80004005;
  }
  if (param_5 == 0) {
    *param_3 = 0;
  }
  else {
    iVar1 = fn_82A36B70(param_1);
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        return 0xffffffff8007000e;
      }
      if (iVar1 != 6) {
        return 0xffffffff80004005;
      }
      return 0xffffffff81de2001;
    }
  }
  return 0;
}

