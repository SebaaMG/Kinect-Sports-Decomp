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
extern int fn_8251FA58();
extern int fn_82569B10();
extern int fn_82837D98();


void fn_8256A9F8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_30 [48];
  
  fn_82837D98(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x14),0,auStack_30);
  fn_8251FA58(*(undefined4 *)(param_1 + 0xc));
  if (-1 < *(int *)(param_1 + 0x1c)) {
    iVar2 = fn_82569B10();
    iVar2 = *(int *)(iVar2 + 0x58);
    iVar1 = *(int *)(param_1 + 0x1c);
    iVar3 = fn_82569B10();
    *(undefined4 *)(iVar1 * 4 + *(int *)(iVar3 + 0x54)) = *(undefined4 *)(iVar2 + -4);
    iVar2 = fn_82569B10();
    *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x58) + -4) + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    iVar2 = fn_82569B10();
    if (*(int *)(iVar2 + 0x54) != *(int *)(iVar2 + 0x58)) {
      *(int *)(iVar2 + 0x58) = *(int *)(iVar2 + 0x58) + -4;
    }
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  }
  return;
}

