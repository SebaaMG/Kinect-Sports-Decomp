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
extern int fn_83024AA0();
extern int fn_83025190();
extern unsigned int lbl_832643F4;
extern unsigned int lbl_832643F8;


undefined8 fn_82FEC8B8(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar3;
  undefined8 uVar2;
  int *piVar4;
  
  piVar4 = lbl_832643F4;
  if (lbl_832643F4 != lbl_832643F8) {
    do {
      iVar1 = *piVar4;
      iVar3 = fn_83025190(iVar1 + 0x80);
      if (iVar3 == param_1) {
        if (*(int *)(iVar1 + 0x84) == 2) {
          return 0;
        }
        uVar2 = fn_83024AA0(iVar1 + 0x10,param_2,param_3);
        return uVar2;
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != lbl_832643F8);
  }
  return 0;
}

