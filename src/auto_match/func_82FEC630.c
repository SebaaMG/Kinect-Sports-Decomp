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
extern int fn_83024968();
extern int fn_83025190();
extern unsigned int lbl_831BC774;
extern unsigned int lbl_832643F4;
extern unsigned int lbl_832643F8;


void fn_82FEC630(int param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint *puVar4;
  
  puVar4 = lbl_832643F4;
  puVar2 = lbl_831BC774;
  if (lbl_832643F4 != lbl_832643F8) {
    do {
      uVar1 = *puVar4;
      iVar3 = fn_83025190((ulonglong)uVar1 + 0x80);
      if (iVar3 == param_1) {
        fn_83024968((ulonglong)uVar1 + 0x10,param_2,param_3);
      }
      puVar4 = puVar4 + 1;
      puVar2 = lbl_831BC774;
    } while (puVar4 != lbl_832643F8);
  }
  for (; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
    uVar1 = puVar2[2];
    iVar3 = fn_83025190((ulonglong)uVar1 + 0x70);
    if (iVar3 == param_1) {
      fn_83024968((ulonglong)uVar1,param_2,param_3);
    }
  }
  return;
}

