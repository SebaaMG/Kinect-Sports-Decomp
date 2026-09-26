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
extern int fn_824BF8A8();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8251FBA8();
extern unsigned int iStack_3c;
extern unsigned int iStack_40;


void fn_82358C90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar2;
  ulonglong uVar1;
  ulonglong uVar3;
  int *piVar4;
  int iStack_40;
  int iStack_3c;
  
  piVar2 = (int *)fn_8251F720(param_3,0);
  uVar3 = 0;
  uVar1 = fn_8251FBA8();
  piVar4 = piVar2;
  if ((int)((uVar1 & 0xffffffff) / 0x88) != 0) {
    do {
      if (*piVar4 != 0) {
        iStack_3c = piVar4[0x21];
        iStack_40 = *piVar4;
        fn_824BF8A8(param_2,&iStack_40);
      }
      piVar4 = piVar4 + 0x22;
      uVar3 = uVar3 + 1;
      uVar1 = fn_8251FBA8(piVar2);
    } while ((uVar3 & 0xffffffff) < (uVar1 & 0xffffffff) / 0x88);
  }
  if (piVar2 != (int *)0x0) {
    fn_8251FA58(piVar2);
  }
  return;
}

