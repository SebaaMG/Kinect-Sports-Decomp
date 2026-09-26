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
extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_8265C9E0();
extern int fn_828BAB20();
extern int fn_828C38B0();
extern int fn_828C3AF8();
extern int fn_828D7438();
extern unsigned int iStack_2c;


void fn_828C3B70(int param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar3;
  ulonglong uVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [4];
  int iStack_2c;
  
  cVar3 = fn_828C38B0();
  if (cVar3 == '\0') {
    uVar1 = fn_8265C9E0(0x38);
    if ((uVar1 & 0xffffffff) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = fn_828D7438(uVar1,param_1,param_2,param_3);
    }
    uVar2 = fn_828BAB20(auStack_30,uVar2);
    fn_828C3AF8(param_1 + 0x2e8,*(undefined4 *)(param_1 + 0x2e8),uVar2);
    if (iStack_2c != 0) {
      fn_822315A0();
    }
  }
  return;
}

