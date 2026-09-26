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
extern int fn_82F68CC0();


void fn_82EDF558(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  longlong param_7,longlong param_8)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  
  if ((param_5 == 1) && (param_6 == 1)) {
    if (0 < (int)param_8) {
      do {
        fn_82F68CC0(param_2,param_1,param_7);
        param_8 = param_8 + -1;
        param_1 = param_1 + param_3;
        param_2 = param_2 + param_4;
      } while (param_8 != 0);
    }
  }
  else if (0 < (int)param_8) {
    do {
      if (0 < (int)param_7) {
        puVar1 = (undefined1 *)(param_2 - param_6);
        puVar2 = (undefined1 *)(param_1 - param_5);
        lVar3 = param_7;
        do {
          puVar2 = puVar2 + param_5;
          puVar1 = puVar1 + param_6;
          *puVar1 = *puVar2;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
      param_8 = param_8 + -1;
      param_1 = param_1 + param_3;
      param_2 = param_2 + param_4;
    } while (param_8 != 0);
  }
  return;
}

