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
extern int fn_822977A8();


void fn_82865B90(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  
  uVar1 = param_1[4];
  if (((uVar1 <= param_2) && (param_1[5] != param_2)) &&
     (cVar2 = fn_822977A8(param_1,param_2,1), cVar2 != '\0')) {
    param_1[4] = uVar1;
    if (7 < (uint)param_1[5]) {
      param_1 = (undefined4 *)*param_1;
    }
    *(undefined2 *)(uVar1 * 2 + (int)param_1) = 0;
  }
  return;
}

