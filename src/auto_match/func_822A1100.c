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
extern int fn_824EC320();
extern int fn_8266F580();
extern unsigned int lbl_821CC160;


void fn_822A1100(undefined4 *param_1)

{
  double dVar1;
  
  fn_8266F580(*param_1);
  dVar1 = (double)lbl_821CC160;
  fn_824EC320((double)(float)param_1[4],(double)(float)param_1[5],(double)(float)param_1[6],
                    (double)(float)param_1[8],dVar1,dVar1,dVar1,(double)(float)param_1[9]);
  return;
}

