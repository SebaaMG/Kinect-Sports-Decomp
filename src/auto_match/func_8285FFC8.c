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
extern int fn_8285FF30();
extern unsigned int uRam832115d0;


void fn_8285FFC8(int param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  uint *puVar2;
  
  *param_2 = 0;
  *param_3 = 0;
  puVar2 = *(uint **)(param_1 + 0x34);
  if (puVar2 != (uint *)0x0) {
    if ((*puVar2 & 0x40000000) == 0) {
      puVar2 = puVar2 + 7;
      lVar1 = 8;
      *param_3 = *param_3 + 1;
      do {
        if ((ulonglong)*(ushort *)puVar2 != 0) {
          fn_8285FF30((ulonglong)*(ushort *)puVar2 * 0x2c + (ulonglong)uRam832115d0,param_2,
                        param_3);
        }
        lVar1 = lVar1 + -1;
        puVar2 = (uint *)((int)puVar2 + 2);
      } while (lVar1 != 0);
    }
    else if ((*puVar2 & 0x40000000) == 0x40000000) {
      *param_2 = *param_2 + 1;
    }
  }
  return;
}

