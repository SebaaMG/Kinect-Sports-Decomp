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
extern int fn_82BFFF08();


undefined8 fn_82C00008(int param_1,int *param_2)

{
  if (param_2 == (int *)0x0) {
    param_2 = (int *)(param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x70) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(int *)(param_1 + 0x50) = *param_2;
    *(int *)(param_1 + 0x54) = param_2[1];
    *(int *)(param_1 + 0x58) = param_2[2];
    *(int *)(param_1 + 0x5c) = param_2[3];
  }
  *(float *)(param_1 + 0x90) = (float)(longlong)*param_2;
  *(float *)(param_1 + 0x94) = (float)(longlong)param_2[1];
  *(float *)(param_1 + 0xa4) = (float)(longlong)param_2[2];
  *(float *)(param_1 + 0xa8) = (float)(longlong)param_2[1];
  *(float *)(param_1 + 0xb8) = (float)(longlong)*param_2;
  *(float *)(param_1 + 0xbc) = (float)(longlong)param_2[3];
  *(float *)(param_1 + 0xcc) = (float)(longlong)*param_2;
  *(float *)(param_1 + 0xd0) = (float)(longlong)param_2[3];
  *(float *)(param_1 + 0xe0) = (float)(longlong)param_2[2];
  *(float *)(param_1 + 0xe4) = (float)(longlong)param_2[1];
  *(float *)(param_1 + 0xf4) = (float)(longlong)param_2[2];
  *(float *)(param_1 + 0xf8) = (float)(longlong)param_2[3];
  fn_82BFFF08();
  return 0;
}

