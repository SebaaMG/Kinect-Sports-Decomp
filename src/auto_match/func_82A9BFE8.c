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
extern unsigned int *auStack_40;
extern int fn_82A99B70();
extern int fn_82A99BC8();
extern int fn_82A99C28();
extern int fn_82A99D88();
extern int fn_82A9A860();
extern int fn_82A9BE60();
extern int fn_82F63F40();


void fn_82A9BFE8(undefined8 param_1,undefined8 param_2,longlong param_3,uint *param_4)

{
  undefined1 auStack_40 [64];
  
  fn_82A99BC8(param_2);
  fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff820d2adc);
  if (*(short *)(param_4 + 2) != 0) {
    fn_82F63F40(auStack_40,0xffffffff820d2ad0,"bicsconstant"[*(ushort *)(param_4 + 1)],
                      *(undefined2 *)((int)param_4 + 6));
    fn_82A99D88(param_2,0xffffffff8204ee44,auStack_40);
    if (*(short *)(param_4 + 2) != 1) {
      fn_82A99B70(param_2,0xffffffff820d2864,0xffffffff820d2ac8);
    }
  }
  fn_82A9A860(param_2);
  fn_82A9BE60(param_1,param_2,param_3,(ulonglong)param_4[3] + param_3,
                (ulonglong)*param_4 + param_3);
  fn_82A99C28(param_2,0xffffffff820d2adc);
  return;
}

