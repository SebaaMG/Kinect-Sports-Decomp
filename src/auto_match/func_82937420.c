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
extern int fn_82936290();
extern int fn_82F65B18();


void fn_82937420(char *param_1,undefined1 *param_2,ulonglong param_3,undefined1 *param_4,
                  ulonglong param_5,undefined4 *param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  char *pcVar2;
  char cVar3;
  
  *param_2 = 0;
  *param_4 = 0;
  *param_6 = 0;
  *param_7 = 0;
  if (*param_1 == '.') {
    pcVar2 = param_1 + 1;
    *param_6 = 1;
    cVar3 = param_1[1];
    while (((cVar3 != '.' && (cVar3 != '[')) && (cVar3 != '\0'))) {
      pcVar2 = pcVar2 + 1;
      cVar3 = *pcVar2;
    }
    if ((param_3 & 0xffffffff) < 0x80000000) {
      fn_82936290(param_2,param_3);
    }
    param_2[(int)(pcVar2 + (-1 - (int)param_1))] = 0;
  }
  else {
    if (*param_1 == '[') {
      pcVar2 = param_1 + 1;
      *param_6 = 2;
      uVar1 = fn_82F65B18(pcVar2);
      *param_7 = uVar1;
      cVar3 = param_1[1];
      while (cVar3 != ']') {
        if (cVar3 == '\0') goto LAB_8293754c;
        pcVar2 = pcVar2 + 1;
        cVar3 = *pcVar2;
      }
      pcVar2 = pcVar2 + 1;
    }
    else {
      *param_6 = 0;
      cVar3 = *param_1;
      pcVar2 = param_1;
      while (((cVar3 != '.' && (cVar3 != '[')) && (cVar3 != '\0'))) {
        pcVar2 = pcVar2 + 1;
        cVar3 = *pcVar2;
      }
    }
LAB_8293754c:
    if ((param_3 & 0xffffffff) < 0x80000000) {
      fn_82936290(param_2,param_3,param_1);
    }
    param_2[(int)pcVar2 - (int)param_1] = 0;
  }
  if ((param_5 & 0xffffffff) < 0x80000000) {
    fn_82936290(param_4,param_5,pcVar2);
  }
  return;
}

