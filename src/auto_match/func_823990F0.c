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
extern unsigned int *auStack_60;
extern int fn_82260130();
extern int fn_822B6A58();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831C996C;


void fn_823990F0(int param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  double dVar3;
  undefined1 auStack_60 [96];
  
  dVar3 = (double)*(float *)(param_1 + 0x268);
  uVar2 = 0xffffffff8219622c;
  if (dVar3 <= (double)lbl_821CC160) {
    if (dVar3 < (double)lbl_821CC160) {
      uVar2 = 0xffffffff821b4ad0;
    }
  }
  else {
    uVar2 = 0xffffffff821a6998;
  }
  if ((*(int *)(param_2 + 0x20c) != 0) || (*(int *)(param_2 + 0x210) != 0)) {
    iVar1 = *(int *)(param_2 + 0x210);
    if (*(int *)(param_2 + 0x210) == 0) {
      iVar1 = *(int *)(param_2 + 0x20c);
    }
    fn_822B6A58(auStack_60,*(undefined4 *)(iVar1 + 0x44),*(undefined2 *)(iVar1 + 0x40));
  }
  fn_82260130((double)*(float *)(param_1 + 0x264),ABS((double)*(float *)(param_1 + 0x26c)),
                    dVar3,lbl_831C996C,*(undefined4 *)(param_2 + 0x214),uVar2,
                    *(undefined4 *)(param_2 + 0x244));
  return;
}

