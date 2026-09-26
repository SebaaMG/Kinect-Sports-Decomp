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


void fn_8258F748(char *param_1,int param_2,ulonglong param_3,ulonglong param_4)

{
  char cVar1;
  
  if (((param_3 ^ param_4) & 0xffff0000) == 0) {
    if ((param_3 & 0xfffc0000) != 0) {
      if (((((param_4 & 0xffffffff) >> 6 ^ param_3) & 0xfc0) == 0) ||
         ((((param_3 & 0xffffffff) >> 6 ^ param_4) & 0xfc0) == 0)) {
        cVar1 = '\0';
      }
      else {
        cVar1 = '\x01';
      }
      goto LAB_8258f7b8;
    }
  }
  cVar1 = '\x01' - ((1 << ((uint)param_4 & 0x3f) &
                    *(uint *)((((uint)param_3 & 0x3f) + 0xd) * 4 + param_2)) == 0);
LAB_8258f7b8:
  *param_1 = cVar1;
  return;
}

