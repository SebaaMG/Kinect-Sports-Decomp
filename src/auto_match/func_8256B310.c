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
extern int fn_82837D98();
extern int fn_82837DC0();
extern int fn_8284C7C0();
extern unsigned int iStack_20;
extern unsigned int uStack_1c;


void fn_8256B310(int param_1)

{
  int iVar1;
  int iVar2;
  int iStack_20;
  undefined4 uStack_1c;
  
  iVar1 = *(int *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xf7;
  iVar2 = *(int *)(*(int *)(param_1 + 8) + 0x14);
  fn_8284C7C0(iVar2,&iStack_20);
  if (iStack_20 == 4) {
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar2 + 0x34);
  }
  else {
    fn_82837D98(iVar2,0,&uStack_1c);
    fn_82837DC0(iVar1,0,uStack_1c);
  }
  return;
}

