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
extern unsigned int *auStack_820;
extern unsigned int *auStack_a20;
extern int fn_82250A18();
extern int fn_8229DCA8();
extern int fn_82358FD8();
extern int fn_8265C9E0();
extern unsigned int lbl_821A8C90;
extern unsigned int lbl_832975B0;


void fn_822A0D08(int param_1)

{
  int iVar1;
  undefined1 auStack_a20 [512];
  undefined1 auStack_820 [2056];
  
  iVar1 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar1 = fn_82250A18();
  }
  if ((*(int *)(iVar1 + 0x58) == 0) && (*(int *)(param_1 + 0xd0) == 0)) {
    fn_82358FD8(*(undefined4 *)(param_1 + 0x1c),auStack_a20,0x100,0xffffffff821abd28);
    fn_82358FD8(*(undefined4 *)(param_1 + 0x1c),auStack_820,0x400,0xffffffff821abd3c);
    iVar1 = fn_8265C9E0(0x434);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      *(undefined ***)(iVar1 + 0x41c) = &lbl_821A8C90;
      fn_8229DCA8(iVar1,auStack_a20,auStack_820,0xffffffff820e975c,0xffffffff820e975c,
                    0xffffffff822a0df8,param_1,1);
    }
    *(int *)(param_1 + 0xd0) = iVar1;
  }
  return;
}

