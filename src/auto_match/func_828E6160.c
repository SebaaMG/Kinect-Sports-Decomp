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
extern int fn_828B5650();


undefined8 fn_828E6160(undefined8 param_1,uint *param_2,uint *param_3)

{
  char cVar1;
  
  if ((*param_3 <= *param_2) &&
     ((*param_3 < *param_2 || (cVar1 = fn_828B5650(param_2 + 1,param_3 + 1), cVar1 == '\0')))) {
    return 0;
  }
  return 1;
}

