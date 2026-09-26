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
extern int fn_82F68CC0();


void fn_82678658(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
                  int param_5)

{
  if (((param_3 == (undefined4 *)0x0) && (param_3 = param_4, param_4 == (undefined4 *)0x0)) &&
     (param_5 == 0)) {
    fn_82F68CC0(param_1 + 0x222c,param_1 + 0x134,0x20);
    *(undefined4 *)(param_1 + 0x224c) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x2220) = 2;
    *(undefined4 *)(param_1 + 0x224c) = *param_3;
    *(undefined4 *)(param_1 + 0x2250) = param_3[1];
    *(undefined4 *)(param_1 + 0x2254) = param_3[2];
    *(undefined4 *)(param_1 + 0x2258) = param_3[3];
    *(undefined4 *)(param_1 + 0x225c) = param_3[4];
    *(undefined4 *)(param_1 + 0x2260) = param_3[5];
    *(undefined4 *)(param_1 + 0x2264) = param_3[6];
    *(undefined4 *)(param_1 + 0x2268) = param_3[7];
    *(undefined4 *)(param_1 + 0x226c) = param_3[8];
    *(undefined4 *)(param_1 + 0x2228) = 0xffffffff;
    fn_82F68CC0(param_1 + 0x222c,param_1 + 0x134,0x20);
    if (param_4 != (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x2270) = *param_4;
      *(undefined4 *)(param_1 + 0x2274) = param_4[1];
      *(undefined4 *)(param_1 + 0x2278) = param_4[2];
      *(undefined4 *)(param_1 + 0x227c) = param_4[3];
      *(undefined4 *)(param_1 + 0x2280) = param_4[4];
      *(undefined4 *)(param_1 + 0x2284) = param_4[5];
      *(undefined4 *)(param_1 + 0x2288) = param_4[6];
      *(undefined4 *)(param_1 + 0x228c) = param_4[7];
      *(undefined4 *)(param_1 + 0x2290) = param_4[8];
    }
  }
  *(undefined4 *)(param_1 + 0x2224) = param_2;
  *(undefined4 *)(param_1 + 0x2220) = 3;
  return;
}

