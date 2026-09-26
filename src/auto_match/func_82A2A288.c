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
extern int fn_82A35C88();


int fn_82A2A288(int param_1,undefined8 param_2,char *param_3,int param_4,undefined8 param_5,
                 ulonglong param_6)

{
  char cVar1;
  int iVar3;
  undefined8 uVar2;
  char *pcVar4;
  
  if (param_1 == 0xfde9) {
    param_4 = fn_82A35C88(param_3,param_4,param_5,param_6);
  }
  else {
    pcVar4 = param_3;
    if (param_4 == -1) {
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      param_4 = (int)pcVar4 - (int)param_3;
    }
    if ((int)param_6 != 0) {
      if ((param_4 < 0) || ((int)param_6 < param_4)) {
        uVar2 = 0x7a;
      }
      else {
        iVar3 = RtlMultiByteToUnicodeN(param_5,(param_6 & 0x7fffffff) << 1,0,param_3,param_4);
        if (-1 < iVar3) {
          return param_4;
        }
        uVar2 = RtlNtStatusToDosError();
      }
      thunk_FUN_82a2b748(uVar2);
      param_4 = 0;
    }
  }
  return param_4;
}

