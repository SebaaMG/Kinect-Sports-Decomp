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
extern int fn_826A3E68();
extern int fn_826A5188();


void fn_826A5208(uint *param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if ((param_3 & 0xffffffff) != 0) {
    uVar1 = param_1[1];
    fn_826A5188(param_1,param_1,uVar1 + param_3);
    uVar3 = (ulonglong)uVar1 * 0x1c + (ulonglong)*param_1;
    uVar2 = param_3 & 0xffffffff;
    while (uVar2 != 0) {
      if ((uVar3 & 0xffffffff) != 0) {
        fn_826A3E68(uVar3,param_2);
      }
      param_2 = param_2 + 0x1c;
      uVar3 = uVar3 + 0x1c;
      param_3 = param_3 - 1;
      uVar2 = param_3;
    }
  }
  return;
}

