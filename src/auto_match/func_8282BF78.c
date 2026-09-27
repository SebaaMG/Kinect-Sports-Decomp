extern char *pcRam8320a794;
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
extern int fn_8282BE80();
extern int fn_8282BEC8();
extern int fn_8282BF18();
extern int fn_8282BF48();
extern int iRam8320a784;
extern int iRam8320a788;
extern int iRam8320a78c;
extern int iRam8320a790;


void fn_8282BF78(int param_1,int *param_2)

{
  code *pcVar1;

  if (iRam8320a788 == 0) {
    param_2[1] = (int)fn_8282BE80;
    *param_2 = param_1 + 0xd8;
    param_2[2] = (int)fn_8282BEC8;
    param_2[3] = (int)fn_8282BF18;
    pcVar1 = fn_8282BF48;
  }
  else {
    *param_2 = iRam8320a784;
    param_2[1] = iRam8320a788;
    param_2[2] = iRam8320a78c;
    param_2[3] = iRam8320a790;
    pcVar1 = pcRam8320a794;
  }
  param_2[4] = (int)pcVar1;
  return;
}
