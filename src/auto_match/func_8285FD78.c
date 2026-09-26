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
extern unsigned int *auStack_30;
extern int fn_828105C8();
extern int fn_8285F818();
extern int fn_8285FC38();
extern int fn_8285FCE0();
extern int fn_82862308();


void fn_8285FD78(int param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined1 auStack_30 [48];
  
  if (*(int *)(param_1 + 0x44) != 0) {
    fn_828105C8((double)*(float *)(param_3 + 0x30),(double)*(float *)(param_3 + 0x34),
                 (double)*(float *)(param_3 + 0x38),auStack_30);
    fn_82862308(*(undefined4 *)(param_1 + 0x44),param_2,auStack_30);
  }
  fn_8285FCE0(param_1,param_2,param_4);
  fn_8285FC38(param_1,param_2,param_4);
  fn_8285F818(*(undefined4 *)(param_1 + 0x34));
  return;
}

