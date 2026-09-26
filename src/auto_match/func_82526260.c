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
extern int fn_8265C990();
extern int fn_82A1EFC0();
extern int fn_82A1F238();
extern int fn_82A81CD0();


void fn_82526260(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint *puVar4;
  
  puVar4 = (uint *)0x832767f0;
  lVar3 = 0x23;
  do {
    if (*puVar4 != 0) {
      iVar2 = fn_82A81CD0(param_1,puVar4 + 1);
      if (((iVar2 != 0) && ((param_2 & 0xffffffff) == (ulonglong)puVar4[0xfb])) &&
         ((param_3 & 0xffffffff) == (ulonglong)puVar4[0xfc])) {
        uVar1 = *puVar4;
        *puVar4 = (uint)((ulonglong)uVar1 - 1);
        if ((ulonglong)uVar1 - 1 == 0) {
          if ((param_2 & 0xffffffff) != 0) {
            fn_8265C990(param_2,0x21006000);
          }
          if ((param_3 & 0xffffffff) != 0) {
            fn_82A1F238(param_3);
          }
                    /* WARNING: Subroutine does not return */
          fn_82A1EFC0(puVar4,0,0x3f4);
        }
      }
    }
    lVar3 = lVar3 + -1;
    puVar4 = puVar4 + 0xfd;
  } while (lVar3 != 0);
  return;
}

