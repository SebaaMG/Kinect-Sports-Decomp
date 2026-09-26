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
extern int fn_8276A220();
extern int fn_82793908();
extern int fn_82794DC0();
extern int fn_8279A600();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_8279A718(int param_1,ulonglong param_2)

{
  uint uVar1;
  char cVar2;
  ulonglong uVar3;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_20 = 0;
  uStack_1c = 0;
  uVar1 = fn_8279A600();
  if (uVar1 != 0xffffffff) {
    uVar3 = param_2 - 1;
    if ((ulonglong)uVar1 == (param_2 & 0xffffffff)) {
      uVar3 = param_2;
    }
    cVar2 = fn_82793908(*(undefined4 *)(param_1 + 8),&uStack_1c,&uStack_20,uVar3);
    if (cVar2 != '\0') {
      fn_8276A220(*(undefined4 *)(param_1 + 8),uStack_20);
      fn_82794DC0(*(undefined4 *)(param_1 + 8),uStack_1c);
    }
  }
  return;
}

