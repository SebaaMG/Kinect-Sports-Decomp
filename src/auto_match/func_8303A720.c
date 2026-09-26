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
extern int fn_82F655D8();
extern int fn_82FEF6D0();
extern int fn_82FEF868();
extern int fn_82FF4AE8();
extern unsigned int lbl_82002C40;
extern unsigned int lbl_8217D2F8;
extern unsigned int lbl_83264304;


void fn_8303A720(int *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)(**(code **)(*param_1 + 0x2c))();
  dVar2 = (double)(**(code **)(*(int *)param_1[2] + 0x28))();
  dVar2 = (double)fn_82F655D8(lbl_82002C40,(double)(float)(dVar2 * (double)lbl_8217D2F8));
  dVar2 = (double)(float)(dVar1 / (double)(float)dVar2);
  fn_82FEF868(dVar2,param_1[2]);
  fn_82FEF6D0(param_1[2]);
  fn_82FF4AE8(dVar1,dVar2,lbl_83264304,*(undefined4 *)(param_1[2] + 0x50));
  return;
}

