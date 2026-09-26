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


void fn_82F28610(int param_1,int param_2,byte *param_3,int param_4,int param_5,int param_6,
                  longlong param_7,longlong param_8)

{
  byte *pbVar1;
  longlong lVar2;
  
  if (0 < (int)param_8) {
    do {
      if (0 < (int)param_7) {
        lVar2 = param_7;
        pbVar1 = param_3;
        do {
          pbVar1[param_5 - (int)param_3] =
               (byte)((int)((uint)pbVar1[param_1 - (int)param_3] + (uint)*pbVar1 + 1) >> 1);
          pbVar1 = pbVar1 + 1;
          lVar2 = lVar2 + -1;
        } while (lVar2 != 0);
      }
      param_8 = param_8 + -1;
      param_1 = param_1 + param_2;
      param_3 = param_3 + param_4;
      param_5 = param_5 + param_6;
    } while (param_8 != 0);
  }
  return;
}

