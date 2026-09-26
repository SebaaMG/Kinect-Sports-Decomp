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
extern int fn_82297DB0();
extern int fn_82F63CA0();


undefined4 * fn_82295A48(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != param_2) {
    fn_82297DB0(param_1,1,0);
    if ((uint)param_2[5] < 8) {
      fn_82F63CA0(param_1,param_2,((ulonglong)(uint)param_2[4] + 1 & 0x7fffffff) << 1);
    }
    else {
      *param_1 = *param_2;
      *param_2 = 0;
    }
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    param_2[4] = 0;
    param_2[5] = 0;
  }
  return param_1;
}

