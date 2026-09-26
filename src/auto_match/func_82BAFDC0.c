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
extern int fn_82B7BEB0();
extern int fn_82BC05A8();
extern int fn_82BC0618();
extern int fn_82BC06D0();


void fn_82BAFDC0(int param_1)

{
  int iVar1;
  undefined1 auStack_30 [16];
  undefined4 *puStack_20;
  undefined4 *puStack_1c;
  
  fn_82BC06D0(auStack_30,*(undefined4 *)(param_1 + 4));
  while( true ) {
    puStack_1c = puStack_20;
    if (puStack_20 == (undefined4 *)0x0) break;
    (**(code **)*puStack_20)(puStack_20,1);
    fn_82BC0618(auStack_30);
  }
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    fn_82BC05A8(iVar1);
    fn_82B7BEB0(*(undefined4 *)(iVar1 + -4),iVar1 + -4);
  }
  return;
}

