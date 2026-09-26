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
extern int fn_83004190();
extern int fn_83007888();
extern unsigned int lbl_82186E6C;


void fn_83009840(double param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = fn_83007888(param_2,1);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x3c))
              (-(double)(float)((double)(longlong)*(short *)(param_2 + 0xb) * (double)lbl_82186E6C -
                               param_1),param_2,0,(longlong)*(short *)(param_2 + 0xb),0,0);
  }
  fn_83004190(param_1,param_2 + 0xb);
  return;
}

