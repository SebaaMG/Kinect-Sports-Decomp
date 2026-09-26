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
extern int fn_82F64988();


undefined8
fn_8229E6D8(int param_1,undefined8 param_2,char *param_3,undefined8 param_4,undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  char *pcVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  
  cVar6 = *param_3;
  cVar4 = 'o';
  cVar5 = cVar6;
  if (cVar6 == 'o') {
    cVar5 = 'o';
    pcVar3 = param_3;
    do {
      pcVar3 = pcVar3 + 1;
      if (cVar5 == '\0') goto LAB_8229e740;
      cVar4 = pcVar3[(int)"option1" - (int)param_3];
      cVar5 = *pcVar3;
    } while (cVar5 == cVar4);
  }
  if (cVar5 == cVar4) {
LAB_8229e740:
    lVar1 = (ulonglong)*(uint *)(param_1 + 4) + 4;
  }
  else {
    cVar5 = 'o';
    if (cVar6 == 'o') {
      iVar2 = (int)"option2" - (int)param_3;
      cVar6 = 'o';
      do {
        param_3 = param_3 + 1;
        if (cVar6 == '\0') goto LAB_8229e7a0;
        cVar5 = param_3[iVar2];
        cVar6 = *param_3;
      } while (cVar6 == cVar5);
    }
    if (cVar6 != cVar5) {
      return 1;
    }
LAB_8229e7a0:
    lVar1 = (ulonglong)*(uint *)(param_1 + 4) + 0x204;
  }
  fn_82F64988(param_4,param_5,lVar1);
  return 0;
}

