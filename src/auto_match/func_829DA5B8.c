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
extern unsigned int *auStack_b00;
extern unsigned int *auStack_b08;
extern unsigned int *auStack_b10;
extern int fn_8263C620();
extern int fn_8263C7D8();
extern int fn_829DA4D0();
extern int fn_82A1E1E0();
extern unsigned int iStack_30;
extern unsigned int iStack_34;
extern unsigned int lbl_8301000B;
extern unsigned int lbl_83215060;
extern unsigned int lbl_832177AC;
extern unsigned int lbl_832177BC;


void fn_829DA5B8(ulonglong param_1,int param_2,int param_3)

{
  undefined *puVar1;
  undefined1 auStack_b10 [8];
  undefined1 auStack_b08 [8];
  undefined1 auStack_b00 [2764];
  int iStack_34;
  int iStack_30;
  
  if (((param_2 != 0) && (param_3 != 0)) && ((param_1 & 0xffffffff) != 0)) {
    fn_8263C7D8(*(undefined4 *)(param_2 + 0x14),0,auStack_b10,0,0x10);
    fn_8263C7D8(*(undefined4 *)(param_3 + 0x14),0,auStack_b08,0,0x10);
    fn_829DA4D0(param_1,auStack_b10,auStack_b08,auStack_b00);
    puVar1 = (undefined *)fn_82A1E1E0(auStack_b00);
    fn_8263C620(*(undefined4 *)(param_2 + 0x14),0);
    fn_8263C620(*(undefined4 *)(param_3 + 0x14),0);
    if (puVar1 == &lbl_8301000B) {
      lbl_83215060 = 1;
      RtlEnterCriticalSection(0xffffffff8315c3cc);
      lbl_832177BC = ((((U64)(lbl_832177BC)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)(iStack_34 - lbl_832177AC)) & ((U64)0xFFFFFFFF)) << 0));
      if (iStack_34 == 0) {
        lbl_832177BC = ((((U64)(lbl_832177BC)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)(0)) & ((U64)0xFFFFFFFF)) << 0));
      }
      lbl_832177BC = ((((U64)(lbl_832177BC)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)(iStack_30 - lbl_832177AC)) & ((U64)0xFFFFFFFF)) << 32));
      if (iStack_30 == 0) {
        lbl_832177BC = ((((U64)(lbl_832177BC)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)(0)) & ((U64)0xFFFFFFFF)) << 32));
      }
      RtlLeaveCriticalSection(0xffffffff8315c3cc);
    }
    else {
      lbl_83215060 = 0;
    }
  }
  return;
}

