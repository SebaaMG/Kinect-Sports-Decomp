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


void fn_83067180(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  
  if (7 < (uint)param_2) {
    return;
  }
  bVar1 = (uint)param_2 != 0;
  if (param_2 == 1 && bVar1) {
    *param_3 = param_1[3];
    uVar2 = param_1[1];
  }
  else {
    if (param_2 == 2 && bVar1) {
      uVar2 = param_1[3];
    }
    else {
      if (param_2 != 3 || !bVar1) {
        if (param_2 == 4 && bVar1) {
code_r0x83067220:
          *param_3 = *param_1;
          uVar2 = param_1[4];
        }
        else {
          if (param_2 != 5 || !bVar1) {
            if (param_2 == 6 && bVar1) {
              *param_3 = param_1[3];
              param_3[1] = param_1[4];
              uVar2 = param_1[5];
code_r0x830671c0:
              param_3[2] = uVar2;
              return;
            }
            if (!bVar1) {
              *param_3 = *param_1;
              param_3[1] = param_1[1];
              uVar2 = param_1[2];
              goto code_r0x830671c0;
            }
            goto code_r0x83067220;
          }
          *param_3 = param_1[3];
          uVar2 = param_1[1];
        }
        param_3[1] = uVar2;
        uVar2 = param_1[5];
        goto code_r0x83067234;
      }
      uVar2 = *param_1;
    }
    *param_3 = uVar2;
    uVar2 = param_1[4];
  }
  param_3[1] = uVar2;
  uVar2 = param_1[2];
code_r0x83067234:
  param_3[2] = uVar2;
  return;
}

