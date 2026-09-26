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
extern unsigned int *auStack_e0;
extern int fn_82A1E228();
extern int fn_82A2A7D0();
extern int fn_82F63BA0();
extern int fn_82F63C78();
extern int fn_82F68240();
extern int fn_82F82DF8();
extern int fn_82F835B8();
extern unsigned int iStack_38;
extern unsigned int lbl_831BB8E0;
extern unsigned int lbl_832633A0;
extern unsigned int uStack_e8;


undefined8 fn_82F6CA00(ulonglong *param_1)

{
  undefined4 *puVar2;
  undefined8 uVar1;
  int iVar3;
  ulonglong uVar4;
  int aiStack_f0 [2];
  ulonglong uStack_e8;
  undefined1 auStack_e0 [154];
  short sStack_46;
  int iStack_38;
  
  aiStack_f0[0] = 0;
  if (param_1 == (ulonglong *)0x0) {
    puVar2 = (undefined4 *)fn_82F68240();
    *puVar2 = 0x16;
    fn_82F63BA0();
    uVar1 = 0x16;
  }
  else {
    fn_82F835B8();
    iVar3 = fn_82F82DF8(aiStack_f0);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63C78(0,0,0,0,0);
    }
    *(short *)((int)param_1 + 10) = (short)(aiStack_f0[0] / 0x3c);
    fn_82A1E228(&uStack_e8);
    uVar4 = uStack_e8 / 600000000;
    if (uVar4 != lbl_832633A0) {
      iVar3 = fn_82A2A7D0(auStack_e0);
      lbl_832633A0 = uVar4;
      if (iVar3 == -1) {
        lbl_831BB8E0 = 0xffffffff;
      }
      else if (((iVar3 == 2) && (sStack_46 != 0)) && (iStack_38 != 0)) {
        lbl_831BB8E0 = 1;
      }
      else {
        lbl_831BB8E0 = 0;
      }
    }
    *(short *)((int)param_1 + 0xc) = (short)lbl_831BB8E0;
    *(short *)(param_1 + 1) =
         (short)(uStack_e8 / 10000) + (short)((uStack_e8 / 10000) / 1000) * -1000;
    uVar1 = 0;
    *param_1 = (uStack_e8 + 0xfe624e212ac18000) / 10000000;
  }
  return uVar1;
}

