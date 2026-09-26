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
extern unsigned int *auStack_1c;
extern int fn_8288B2D8();
extern int fn_8288CD40();
extern int fn_828A12E8();
extern unsigned int uStack_20;


void fn_8288EB60(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  longlong lVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uStack_20;
  undefined1 auStack_1c [4];
  
  uStack_20 = param_3;
  lVar1 = fn_828A12E8(param_2);
  piVar2 = (int *)fn_8288CD40(auStack_1c,lVar1 + 0x94,&uStack_20);
  uVar3 = fn_8288B2D8(*(undefined4 *)(*piVar2 + 0x40),param_4);
  *param_5 = uVar3;
  return;
}

