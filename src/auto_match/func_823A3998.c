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
extern unsigned int *auStack_50;
extern int fn_82299AC8();
extern int fn_82358FD8();
extern int fn_823598B0();
extern int fn_82359928();
extern int fn_82398480();
extern int fn_82508078();
extern unsigned int lbl_821917B0;


void fn_823A3998(int param_1)

{
  int iVar1;
  undefined1 auStack_50 [64];
  
  if (*(int *)(*(int *)(param_1 + 8) + 0x178) == 0) {
    fn_82508078(*(undefined4 *)(*(int *)(param_1 + 8) + 0xa4),0xffffffff821b5044,0);
  }
  fn_823598B0(*(undefined4 *)(param_1 + 8),0);
  fn_82359928(*(undefined4 *)(param_1 + 8),0);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x90) + 0x510) = 1;
  fn_82398480(*(undefined4 *)(param_1 + 8));
  if (*(int *)(*(int *)(param_1 + 8) + 0x178) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 8) + 0xd4);
    fn_82358FD8(*(undefined4 *)(iVar1 + 0x1c),auStack_50,0x20,0xffffffff821abcec);
    iVar1 = *(int *)(iVar1 + 0x38);
    if (*(int *)(iVar1 + 0x1220) == 0) {
      fn_82299AC8(iVar1,auStack_50);
      *(undefined4 *)(iVar1 + 0x121c) = lbl_821917B0;
    }
  }
  return;
}

