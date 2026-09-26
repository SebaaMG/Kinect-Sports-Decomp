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


void fn_828F5848(undefined8 param_1,char *param_2,longlong param_3,int param_4,uint param_5)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  bVar1 = false;
  bVar2 = false;
  if ((int)param_3 != 0) {
    do {
      if (*param_2 == '\"') {
        if ((param_4 != 0) && (uVar3 < param_5)) {
          *(undefined1 *)(uVar3 + param_4) = 0x5c;
        }
        uVar3 = uVar3 + 1;
        if (!bVar1) {
          bVar2 = !bVar2;
        }
      }
      bVar1 = false;
      if ((bVar2) && (*param_2 == '\\')) {
        if ((param_4 != 0) && (uVar3 < param_5)) {
          *(undefined1 *)(uVar3 + param_4) = 0x5c;
        }
        uVar3 = uVar3 + 1;
        bVar1 = true;
      }
      if ((param_4 != 0) && (uVar3 < param_5)) {
        *(char *)(uVar3 + param_4) = *param_2;
      }
      uVar3 = uVar3 + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    return;
  }
  return;
}

