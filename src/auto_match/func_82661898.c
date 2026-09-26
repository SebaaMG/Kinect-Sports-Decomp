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
extern int fn_8265CD00();
extern int fn_8265CE08();
extern int fn_8266C340();


void fn_82661898(short *param_1)

{
  short *psVar1;
  int iVar2;
  short *psStack00000014;
  short *psStack_20;
  short *psStack_1c;
  short *psStack_18;
  
  psStack00000014 = param_1;
  psStack_1c = param_1;
  if (param_1 != (short *)0x0) {
    while (iVar2 = fn_8265CD00(*psStack_1c), iVar2 != 0) {
      psStack_1c = psStack_1c + 1;
    }
    if (*psStack_1c == 0) {
      *psStack00000014 = 0;
    }
    else {
      iVar2 = fn_8265CE08(psStack_1c);
      psStack_20 = psStack_1c + iVar2;
      do {
        psVar1 = psStack_20;
        psStack_20 = psVar1 + -1;
        iVar2 = fn_8265CD00(*psStack_20);
      } while (iVar2 != 0);
      if (psStack_20 < psStack_1c) {
        fn_8266C340(0xffffffff820015c0,0xffffffff82001ca8,0x76,0xffffffff82001d0c);
      }
      *psVar1 = 0;
      if (psStack00000014 < psStack_1c) {
        psStack_18 = psStack00000014;
        for (; psStack_1c <= psVar1; psStack_1c = psStack_1c + 1) {
          *psStack_18 = *psStack_1c;
          psStack_18 = psStack_18 + 1;
        }
      }
    }
  }
  return;
}

