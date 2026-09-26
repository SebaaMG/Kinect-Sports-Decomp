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
extern int fn_823F0828();
extern int fn_8288B760();


void fn_82404028(int *param_1,undefined8 param_2)

{
  char cVar2;
  longlong lVar1;
  
  cVar2 = fn_8288B760();
  if (cVar2 != '\0') {
    lVar1 = (**(code **)(*param_1 + 0x4c))(param_1);
    fn_823F0828(lVar1 + 0x30,param_2);
  }
  return;
}

