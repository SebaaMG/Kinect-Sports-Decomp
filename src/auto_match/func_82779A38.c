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
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern int fn_82779958();
extern unsigned int lbl_82005CCC;
extern unsigned int lbl_8201543C;


void fn_82779A38(undefined8 param_1,int *param_2,int *param_3,int *param_4)

{
  float fVar1;
  float fStack_30;
  float fStack_2c;
  float afStack_28 [10];
  
  fn_82779958(param_1,&fStack_30,&fStack_2c,afStack_28);
  fVar1 = lbl_82005CCC;
  fStack_2c = fStack_2c * lbl_82005CCC;
  *param_2 = (int)(fStack_30 * lbl_8201543C);
  *param_3 = (int)fStack_2c;
  *param_4 = (int)(afStack_28[0] * fVar1);
  return;
}

