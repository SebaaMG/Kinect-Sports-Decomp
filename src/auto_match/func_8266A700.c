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
extern int fn_8265C9E0();
extern int fn_8265D7D0();
extern int fn_8265DED8();
extern int fn_8265ED50();
extern int fn_8265F570();
extern int fn_8265F598();
extern int fn_8265F608();
extern int fn_8266A628();
extern int fn_8266C340();
extern unsigned int iStack00000014;
extern unsigned int iStack_18;
extern unsigned int lbl_83153FD8;
extern unsigned int uStack_14;
extern unsigned int uStack_1c;


void fn_8266A700(int param_1)

{
  int iVar1;
  uint uVar2;
  int iStack00000014;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  iStack00000014 = param_1;
  if (param_1 == 0) {
    fn_8266C340(0xffffffff820015c0,0xffffffff82002724,0x140,0xffffffff8200251c);
  }
  iVar1 = fn_8266A628(iStack00000014);
  if ((iVar1 == 0) && (uVar2 = fn_8265ED50(iStack00000014), uVar2 != 0)) {
    iStack_18 = fn_8265C9E0(0x1c);
    if (iStack_18 == 0) {
      uStack_14 = 0;
    }
    else {
      uStack_14 = fn_8265D7D0(iStack_18,iStack00000014);
    }
    uStack_1c = uStack_14;
    fn_8265F608(0xffffffff831e7af8,&uStack_1c);
    iVar1 = fn_8265DED8((ulonglong)uVar2 + 0x3c);
    if ((iVar1 != 0) &&
       (iVar1 = fn_8265F598((ulonglong)uVar2 + 0x3c,lbl_83153FD8), iVar1 != 0)) {
      fn_8265F570((ulonglong)uVar2 + 0x3c);
      ((int (*)())fn_8266A700)();
    }
  }
  return;
}

