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


undefined8
fn_828F9D90(undefined4 *param_1,char *param_2,char *param_3,undefined4 param_4,undefined4 param_5,
             int param_6,int param_7)

{
  char cVar1;
  
  if ((param_6 != 0) && (param_7 != 0)) {
    if (param_3 == (char *)0xffffffff) {
      param_3 = param_2;
      if (param_2 == (char *)0x0) {
        param_3 = (char *)0x0;
      }
      else {
        do {
          cVar1 = *param_3;
          param_3 = param_3 + 1;
        } while (cVar1 != '\0');
        param_3 = param_3 + (-1 - (int)param_2);
      }
    }
    if ((param_2 != (char *)0x0) || (param_3 == (char *)0x0)) {
      *param_1 = param_2;
      param_1[6] = param_4;
      param_1[1] = param_2 + (int)param_3;
      param_1[7] = param_5;
      param_1[0xb] = param_6;
      param_1[0xc] = param_7;
      param_1[0xd] = 0;
      return 0;
    }
  }
  return 0xffffffff80004005;
}

