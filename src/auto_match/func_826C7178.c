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
extern int fn_8267C498();
extern int fn_82699338();


void fn_826C7178(int *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  if (param_1 != (int *)0x0) {
    param_1[1] = param_1[1] + 1;
  }
  cVar1 = (**(code **)(*param_1 + 8))(param_1);
  if (cVar1 != '\0') {
    fn_82699338(param_1 + 0x2a,param_2,param_3);
    (**(code **)(*param_1 + 0x80))(param_1,param_2,param_3);
  }
  fn_8267C498(param_1);
  return;
}

