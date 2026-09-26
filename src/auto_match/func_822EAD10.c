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
extern int fn_822BD338();


char fn_822EAD10(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = fn_822BD338(param_1,0xffffffff821ae220);
  if (cVar1 == '\0') {
    cVar1 = fn_822BD338(param_1,0xffffffff821ae22c);
    if (cVar1 == '\0') {
      cVar1 = fn_822BD338(param_1,0xffffffff821ae23c);
      if (cVar1 == '\0') {
        cVar1 = fn_822BD338(param_1,0xffffffff821ae24c);
        if (cVar1 == '\0') {
          cVar1 = fn_822BD338(param_1,0xffffffff821ae254);
          if (cVar1 == '\0') {
            cVar1 = fn_822BD338(param_1,0xffffffff821ae264);
            cVar1 = (-(cVar1 != '\0') & 2U) + 3;
          }
          else {
            cVar1 = '\x04';
          }
        }
        else {
          cVar1 = '\x03';
        }
      }
      else {
        cVar1 = '\x02';
      }
    }
    else {
      cVar1 = '\x01';
    }
  }
  else {
    cVar1 = '\0';
  }
  return cVar1;
}

