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
extern int fn_8267B750();
extern int fn_8267B7E0();
extern int fn_82685798();


undefined8 fn_826858C8(int param_1,int param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = fn_8267B750(param_2);
  do {
    uVar2 = fn_8267B750(param_2);
    fn_82685798(*(undefined4 *)(param_1 + 4));
    uVar3 = fn_8267B750(param_2);
    if ((uVar2 & 0xffffffff) <= (uVar3 & 0xffffffff)) break;
  } while ((uVar1 & 0xffffffff) < (uVar3 + param_3 & 0xffffffff));
  if ((uVar1 & 0xffffffff) < (uVar3 + param_3 & 0xffffffff)) {
    fn_8267B7E0(param_2,(ulonglong)*(uint *)(param_2 + 0x2c) + param_3);
  }
  return 1;
}

