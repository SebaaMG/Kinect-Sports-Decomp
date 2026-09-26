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
extern int fn_82A2A288();
extern int fn_82E44D20();
extern int fn_82E44DA0();


ulonglong fn_82E66D68(uint *param_1,undefined8 param_2,char *param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar4;
  longlong lVar3;
  
  if (param_3 != (char *)0x0) {
    pcVar4 = param_3;
    if (param_4 == (char *)0xffffffff) {
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      param_4 = pcVar4 + (-1 - (int)param_3);
    }
    iVar2 = fn_82E44DA0(param_1,param_4 + param_1[1]);
    if (iVar2 < 0) {
      return -(ulonglong)((*param_1 & 0x8000000) != 0) & 0xffffffff8007000e;
    }
    lVar3 = 0;
    if ((0 < (int)param_4) &&
       (lVar3 = fn_82A2A288(param_2,0,param_3,param_4,
                                  ((ulonglong)param_1[1] & 0x7fffffff) * 2 + (ulonglong)param_1[3],
                                  param_4), lVar3 == 0)) {
      thunk_FUN_82a2b798();
      *param_1 = *param_1 | 0x8000000;
      return 0xffffffff8007000e;
    }
    fn_82E44D20(param_1,(ulonglong)param_1[1] + lVar3);
  }
  return 0;
}

