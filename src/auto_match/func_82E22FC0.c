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
extern unsigned int *auStack_2c;
extern int fn_82A1F2F8();
extern int fn_82E23670();
extern int fn_82E23748();
extern int fn_82E238E0();
extern int fn_82E23918();
extern int fn_82E23A10();
extern unsigned int iStack_30;


void fn_82E22FC0(int param_1)

{
  int iVar2;
  undefined8 uVar1;
  int iStack_30;
  undefined1 auStack_2c [44];
  
  if (*(int *)(param_1 + 0x178) != 0) {
    iVar2 = fn_82A1F2F8();
    if ((*(uint *)(param_1 + 0x158) != 0) &&
       (*(uint *)(param_1 + 0x158) < (uint)(iVar2 - *(int *)(param_1 + 0x154)))) {
      *(undefined4 *)(param_1 + 0x17c) = 1;
    }
    if (*(int *)(param_1 + 0x17c) == 0) {
      fn_82E23A10(param_1 + 0x30,*(undefined4 *)(param_1 + 0x180),
                      (ulonglong)*(uint *)(param_1 + 0x150) + 9,auStack_2c,0,0);
      *(undefined4 *)(param_1 + 0x180) = 0;
    }
    else {
      iVar2 = param_1 + 0x30;
      iStack_30 = 0;
      fn_82E23918(iVar2);
      uVar1 = fn_82E23748(iVar2,*(undefined4 *)(param_1 + 0x148),
                              *(undefined4 *)(param_1 + 0x14c),&iStack_30);
      fn_82E238E0(iVar2);
      if (iStack_30 == 0) {
        uVar1 = 0xe8;
      }
      *(undefined4 *)(param_1 + 0x17c) = 0;
      *(undefined4 *)(param_1 + 0x180) = 0;
      *(undefined4 *)(param_1 + 0x178) = 0;
      fn_82E23670(param_1 + 0x168,uVar1,uVar1);
    }
  }
  return;
}

