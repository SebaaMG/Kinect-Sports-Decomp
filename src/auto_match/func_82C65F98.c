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


void fn_82C65F98(char *param_1,int param_2)

{
  char cVar1;
  char cVar2;
  
  cVar1 = *param_1;
  cVar2 = (char)param_2;
  if ((int)cVar1 < -param_2) {
    *param_1 = cVar2 * '\x02' + cVar1;
  }
  else if (param_2 <= cVar1) {
    *param_1 = cVar1 + cVar2 * -2;
  }
  cVar1 = param_1[1];
  if ((int)cVar1 < -param_2) {
    param_1[1] = cVar2 * '\x02' + cVar1;
    return;
  }
  if (cVar1 < param_2) {
    return;
  }
  param_1[1] = cVar1 + cVar2 * -2;
  return;
}

