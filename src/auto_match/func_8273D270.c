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
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_8269A1F0();
extern int fn_8273D198();


void fn_8273D270(int param_1)

{
  char cVar3;
  ulonglong uVar1;
  undefined8 uVar2;
  
  cVar3 = fn_82695468(param_1,0x2a);
  if (cVar3 == '\0') {
    fn_826954C0(param_1,0xffffffff8200edc0,0,0);
  }
  else {
    uVar1 = (ulonglong)*(uint *)(param_1 + 8) - 0x10;
    if ((ulonglong)*(uint *)(param_1 + 8) == 0) {
      uVar1 = 0;
    }
    if ((uVar1 & 0xffffffff) != 0) {
      uVar2 = fn_8273D198(uVar1,*(undefined4 *)(param_1 + 0x18));
      fn_8269A1F0(*(undefined4 *)(param_1 + 4),uVar2);
    }
  }
  return;
}

