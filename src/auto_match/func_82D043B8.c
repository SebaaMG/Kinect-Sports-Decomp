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


undefined8 fn_82D043B8(undefined4 *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  
  pcVar2 = (char *)*param_1;
  cVar4 = *pcVar2;
  while( true ) {
    if ((cVar4 == '\0') || (cVar4 = *param_2, cVar4 == '\0')) {
      return 1;
    }
    cVar1 = *pcVar2;
    if ((cVar1 < 'A') || (cVar3 = cVar1 + ' ', 'Z' < cVar1)) {
      cVar3 = cVar1;
    }
    if (('@' < cVar4) && (cVar4 < '[')) {
      cVar4 = cVar4 + ' ';
    }
    if (cVar3 != cVar4) break;
    pcVar2 = pcVar2 + 1;
    cVar4 = *pcVar2;
    param_2 = param_2 + 1;
  }
  return 0;
}

