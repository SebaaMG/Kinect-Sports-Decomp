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
extern unsigned int *auStack_40;
extern int fn_82CEB1A8();
extern int fn_82CEB1B8();
extern int fn_82CEEDF8();


void fn_82CEEE70(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  int *param_5)

{
  char *pcVar2;
  longlong lVar1;
  int iVar3;
  undefined1 auStack_40 [64];
  
  iVar3 = (int)param_4;
  if ((iVar3 != 0) && (pcVar2 = (char *)fn_82CEEDF8(auStack_40), *pcVar2 == '\0')) {
    lVar1 = fn_82CEB1A8(param_2);
    pcVar2 = (char *)fn_82CEB1B8(auStack_40,param_2);
    if (*pcVar2 == '\0') {
      if (0 < iVar3) {
        do {
          (**(code **)(*param_5 + 0x10))(param_5,param_2,param_1,param_3,1);
          param_4 = param_4 + -1;
          param_3 = lVar1 + param_3;
        } while (param_4 != 0);
      }
    }
    else if (0 < iVar3) {
      do {
        (**(code **)(*param_5 + 0xc))(param_5,param_1,param_3,1);
        param_4 = param_4 + -1;
        param_3 = lVar1 + param_3;
      } while (param_4 != 0);
    }
  }
  return;
}

