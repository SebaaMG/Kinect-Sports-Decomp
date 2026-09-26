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


undefined8 fn_826951A0(char *param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *param_1;
  if (((cVar1 != '\x05') && (cVar1 != '\x02')) && (cVar1 != '\x01')) {
    if ((cVar1 == '\x03') || (bVar2 = false, cVar1 == '\x04')) {
      bVar2 = true;
    }
    if (!bVar2) {
      return 0;
    }
  }
  return 1;
}

