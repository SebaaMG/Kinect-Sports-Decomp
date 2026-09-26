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
extern int fn_82415748();
extern int fn_82422D88();


char fn_82425110(undefined8 param_1,int param_2,int *param_3)

{
  char cVar2;
  undefined4 uVar1;
  longlong lVar3;
  int *piVar4;
  uint uVar5;
  char cVar6;
  
  cVar6 = '\b';
  if (param_3[6] == 0) {
    if (*param_3 == param_3[2]) {
      cVar6 = '\t';
    }
    else if (param_3[1] == 0) {
      cVar6 = '\n';
    }
    else if (*param_3 == 0) {
      if (param_3[4] == 0) {
        cVar6 = (param_3[5] != 0) + '\x02';
      }
      else {
        cVar6 = '\x04';
      }
    }
    else {
      cVar2 = fn_82415748(*(undefined4 *)(param_2 + 8));
      if (cVar2 == '\0') {
        cVar6 = '\v';
      }
      else if (((param_3[1] == 2) && (param_3[0x10] != 0)) && (param_3[0x13] != 0)) {
        cVar6 = '\a';
      }
      else if ((param_3[10] == 0) && (param_3[1] != 1)) {
        lVar3 = 1;
        piVar4 = param_3 + 0xb;
        do {
          if (*piVar4 != 0) {
            uVar1 = fn_82422D88(param_1,lVar3,param_3);
            uVar5 = (uint)LZCOUNT(uVar1) >> 5;
            goto LAB_82425238;
          }
          lVar3 = lVar3 + 1;
          piVar4 = piVar4 + 1;
        } while ((int)lVar3 < 10);
      }
      else {
        uVar5 = 0;
LAB_82425238:
        if (uVar5 != 0) {
          cVar6 = '\x06';
        }
      }
    }
  }
  else {
    cVar6 = '\f';
  }
  return cVar6;
}

