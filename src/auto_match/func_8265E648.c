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
extern int fn_82661898();
extern int fn_8266C340();
extern int fn_8266C438();
extern int fn_82F69960();
extern int fn_82F69F38();
extern int fn_82F6ADA8();
extern unsigned int iStack0000001c;
extern unsigned int iStack_20;
extern unsigned int iStack_28;
extern unsigned int lbl_820018AC;
extern unsigned int uStack_1c;
extern unsigned int uStack_24;
extern unsigned int uStack_2c;


undefined8 fn_8265E648(short *param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  short *psStack00000014;
  int iStack0000001c;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  int iStack_20;
  uint uStack_1c;
  undefined4 *puStack_18;
  
  psStack00000014 = param_1;
  iStack0000001c = param_2;
  if ((param_1 == (short *)0x0) || (param_2 == 0)) {
    fn_8266C340(0xffffffff820015c0,0xffffffff82001624,0xee,0xffffffff820018b0);
  }
  if ((psStack00000014 == (short *)0x0) || (iStack0000001c == 0)) {
    thunk_FUN_82a2b748(0x57);
    uVar1 = 0;
  }
  else {
    fn_82661898(psStack00000014);
    if (*psStack00000014 == 0) {
      thunk_FUN_82a2b748(0x10d2);
      uVar1 = 0;
    }
    else if (*psStack00000014 == 0x3b) {
      thunk_FUN_82a2b748(0x10d2);
      uVar1 = 0;
    }
    else {
      iStack_28 = iStack0000001c;
      puStack_18 = &uStack_2c;
      uStack_2c = lbl_820018AC;
      uStack_24 = 0;
      iVar2 = fn_82F69960(psStack00000014,&uStack_2c,&uStack_24);
      iStack_20 = fn_82F69960(0,&uStack_2c,&uStack_24);
      if ((iVar2 == 0) || (iStack_20 == 0)) {
        thunk_FUN_82a2b748(0x10d2);
        uVar1 = 0;
      }
      else {
        fn_82661898(iVar2);
        fn_82661898(iStack_20);
        iVar2 = fn_82F6ADA8(0xffffffff8200189c,iVar2);
        if (iVar2 == 0) {
          uStack_1c = fn_82F69F38(iStack_20,0,0);
          if ((uStack_1c == 0) || (0xffff < uStack_1c)) {
            fn_8266C438(0xffffffff82001848,iStack_20);
            thunk_FUN_82a2b748(0xb);
            return 0;
          }
          *(short *)(iStack_28 + 0x1c) = (short)uStack_1c;
        }
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}

