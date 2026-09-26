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
extern int fn_827DFB88();
extern int fn_827E2500();
extern int fn_827E25C8();
extern int fn_827E25F8();
extern int fn_827E26D0();


ulonglong fn_827DFF58(int param_1,ulonglong param_2,int *param_3)

{
  ulonglong uVar1;
  
  RtlEnterCriticalSection(param_1 + 400);
  fn_827E25C8(param_2);
  uVar1 = fn_827E25F8(param_2);
  if ((uVar1 & 0xffff) == 0) {
    *(int *)(param_1 + 0x1ac) = *(int *)(param_1 + 0x1ac) + -1;
    fn_827DFB88(param_1,param_2);
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 0xc))(param_3);
    }
    if ((param_2 & 0xffffffff) != 0) {
      fn_827E26D0(param_2);
      fn_827E2500(param_2);
    }
    *(int *)(param_1 + 0x1b0) = *(int *)(param_1 + 0x1b0) + -1;
  }
  RtlLeaveCriticalSection(param_1 + 400);
  return uVar1;
}

