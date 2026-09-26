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
extern unsigned int *auStack_30;
extern int fn_82CFED40();


longlong fn_82CFEE20(int *param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  char *pcVar2;
  longlong lVar3;
  undefined1 auStack_30 [48];
  
  pcVar2 = (char *)(**(code **)(*param_1 + 0xc))(auStack_30,param_1);
  if (*pcVar2 == '\0') {
    lVar3 = 0;
  }
  else {
    piVar1 = (int *)param_1[2];
    lVar3 = ((longlong)(piVar1[3] + -1) * (longlong)*piVar1 + (ulonglong)(uint)piVar1[1]) -
            (ulonglong)(uint)param_1[3];
    if ((int)param_3 < (int)lVar3) {
      lVar3 = param_3;
    }
    fn_82CFED40(piVar1,param_2,lVar3);
    param_1[3] = param_1[3] + (int)param_3;
  }
  return lVar3;
}

