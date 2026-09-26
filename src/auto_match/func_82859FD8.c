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
extern int fn_828102A8();
extern int fn_828105C8();


void fn_82859FD8(undefined8 param_1,int param_2,int param_3,undefined8 param_4,undefined4 *param_5
                  )

{
  if (param_3 == 0) {
    fn_828105C8((double)(longlong)*(short *)(param_2 + 4),(double)(longlong)*(short *)(param_2 + 6)
                 ,(double)(longlong)*(short *)(param_2 + 8),param_5);
    fn_828102A8(param_1,param_5,param_5);
    param_5 = param_5 + 3;
    fn_828105C8((double)(longlong)*(short *)(param_2 + 10),
                 (double)(longlong)*(short *)(param_2 + 0xc),
                 (double)(longlong)*(short *)(param_2 + 0xe),param_5);
    fn_828102A8(param_1,param_5,param_5);
  }
  else if (param_3 == 1) {
    *param_5 = *(undefined4 *)(param_2 + 4);
    param_5[1] = *(undefined4 *)(param_2 + 8);
    param_5[2] = *(undefined4 *)(param_2 + 0xc);
    param_5[3] = *(undefined4 *)(param_2 + 0x10);
    param_5[4] = *(undefined4 *)(param_2 + 0x14);
    param_5[5] = *(undefined4 *)(param_2 + 0x18);
  }
  return;
}

