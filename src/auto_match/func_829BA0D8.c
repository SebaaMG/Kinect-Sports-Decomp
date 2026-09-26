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
extern int fn_829AB0F0();
extern int fn_829AB128();
extern int fn_829B9B60();


void fn_829BA0D8(int param_1,int param_2,ulonglong param_3)

{
  if ((((*(uint *)(param_1 + 0x558) & 1) != 0) && ((*(uint *)(param_1 + 0x558) & 4) != 0)) ||
     (fn_829AB0F0(param_1,0xffffffff82054dc4), param_2 != 0)) {
    *(uint *)(param_1 + 0x558) = *(uint *)(param_1 + 0x558) | 0x18;
    if ((param_3 & 0xffffffff) != 0) {
      fn_829AB128(param_1,0xffffffff82054da8);
    }
    fn_829B9B60(param_1,param_3);
  }
  return;
}

