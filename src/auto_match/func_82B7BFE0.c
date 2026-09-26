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
extern int fn_82AB15D0();
extern int fn_82AB7CB8();
extern unsigned int lbl_820DB240;
extern unsigned int lbl_820DB244;


void fn_82B7BFE0(int param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5,
                  int *param_6)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)(*(int *)(param_1 + 0x10) + 0x564) == '\0') {
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  if (param_3 != *(int *)(&lbl_820DB240 + param_3 * 8)) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820db3cc,0xffffffff820db408,0x1ee);
  }
  iVar4 = *(int *)(&lbl_820DB244 + param_3 * 8);
  if (param_3 == 0x21) {
    iVar3 = 0;
    piVar2 = param_6;
    do {
      if ((*piVar2 == 0x15) || (*piVar2 == 0x16)) {
        iVar4 = *(int *)(&lbl_820DB244 + param_6[iVar3] * 8);
        break;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < 4);
  }
  if (iVar4 < 1) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820db3c0,0xffffffff820db408,0x1fb);
  }
  fn_82AB7CB8(uVar1,param_2,iVar4,param_4,0x1010101,param_5 == 0,param_3,param_6);
  return;
}

