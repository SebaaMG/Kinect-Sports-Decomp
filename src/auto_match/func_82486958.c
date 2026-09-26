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


char fn_82486958(int param_1)

{
  char *pcVar1;
  char cVar2;
  char *haystack;
  
  haystack = (char *)(param_1 + 0x234);
  pcVar1 = strstr(haystack,"boxing");
  if (pcVar1 == (char *)0x0) {
    pcVar1 = strstr(haystack,"football");
    if (pcVar1 == (char *)0x0) {
      pcVar1 = strstr(haystack,"volleyball");
      if (pcVar1 == (char *)0x0) {
        pcVar1 = strstr(haystack,"tabletennis");
        if (pcVar1 == (char *)0x0) {
          pcVar1 = strstr(haystack,"bowling");
          cVar2 = (pcVar1 == (char *)0x0) + '\x01';
        }
        else {
          cVar2 = '\x03';
        }
      }
      else {
        cVar2 = '\0';
      }
    }
    else {
      cVar2 = '\x04';
    }
  }
  else {
    cVar2 = '\x05';
  }
  return cVar2;
}

