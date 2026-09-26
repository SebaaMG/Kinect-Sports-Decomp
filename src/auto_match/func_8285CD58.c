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
extern unsigned int fStack_44;
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern int fn_8280A5D8();
extern int fn_8280AE70();
extern int fn_828116D8();
extern int fn_82811828();
extern unsigned int lbl_83211588;


void fn_8285CD58(longlong param_1,undefined8 param_2,undefined8 param_3,float *param_4,
                  longlong param_5)

{
  ulonglong uVar1;
  float fStack_50;
  float fStack_4c;
  float fStack_44;
  
  if (lbl_83211588 != 0) {
    uVar1 = 0;
    do {
      fn_8280AE70(param_2,uVar1 * 0x10 + param_1,&fStack_50);
      fStack_50 = *param_4 * fStack_50;
      fStack_4c = fStack_4c * param_4[1];
      fn_8280A5D8((double)fStack_44);
      fn_82811828(&fStack_50,&fStack_50);
      fn_828116D8(&fStack_50,param_3,uVar1 * 8 + param_5);
      uVar1 = uVar1 + 1 & 0xffff;
    } while (uVar1 < lbl_83211588);
  }
  return;
}

