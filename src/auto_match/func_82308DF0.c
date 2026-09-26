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
extern unsigned int *auStack_20;
extern int fn_822315A0();
extern int fn_822C8A18();
extern int fn_823F2E20();
extern unsigned int iStack_1c;


void fn_82308DF0(int param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 auStack_20 [4];
  int iStack_1c;
  
  uVar2 = (ulonglong)*(uint *)(*(int *)(param_1 + 0xc) + 0x114);
  uVar1 = fn_822C8A18(auStack_20,uVar2,0xffffffff821ae914);
  fn_823F2E20(uVar2 + 0x28,uVar1);
  if (iStack_1c != 0) {
    fn_822315A0();
    return;
  }
  return;
}

