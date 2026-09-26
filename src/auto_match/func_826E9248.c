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
extern unsigned int *auStack_210;
extern int fn_826BC900();
extern int fn_826C8C70();
extern unsigned int lbl_82005718;


void fn_826E9248(undefined8 param_1,float *param_2)

{
  undefined1 auStack_210 [512];
  
  fn_826BC900(auStack_210,0x200,0xffffffff8200d74c,(double)(*param_2 * lbl_82005718),
                    (double)(param_2[1] * lbl_82005718),(double)(param_2[2] * lbl_82005718),
                    (double)(param_2[3] * lbl_82005718));
  fn_826C8C70(param_1,0xffffffff821c4da8,auStack_210);
  return;
}

