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
extern unsigned int *auStack_28;
extern int fn_82667720();
extern int fn_8266C340();
extern int fn_8266C438();
extern int fn_82F65AC0();
extern int fn_82F68958();
extern int fn_82F6A3F0();
extern unsigned int lbl_8200268C;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


undefined8 fn_82665D48(char *param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcStack00000014;
  undefined2 *puStack0000001c;
  undefined2 auStack_28 [2];
  undefined2 *puStack_24;
  undefined4 uStack_20;
  uint uStack_1c;
  uint uStack_18;
  undefined2 *puStack_14;
  undefined2 *puStack_10;
  undefined2 *puStack_c;
  
  pcStack00000014 = param_1;
  puStack0000001c = param_2;
  if ((param_1 == (char *)0x0) || (param_2 == (undefined2 *)0x0)) {
    fn_8266C340(0xffffffff820015c0,0xffffffff82001e74,1000,0xffffffff82002690);
  }
  if ((pcStack00000014 == (char *)0x0) || (puStack0000001c == (undefined2 *)0x0)) {
    thunk_FUN_82a2b748(0x57);
    uVar1 = 0;
  }
  else {
    puStack_24 = puStack0000001c;
    fn_82667720(pcStack00000014);
    if (*pcStack00000014 == '\0') {
      thunk_FUN_82a2b748(0x10d2);
      uVar1 = 0;
    }
    else if (*pcStack00000014 == ';') {
      thunk_FUN_82a2b748(0x10d2);
      uVar1 = 0;
    }
    else {
      puStack_14 = auStack_28;
      puStack_c = &lbl_8200268C;
      auStack_28[0] = lbl_8200268C;
      uStack_20 = 0;
      puStack_10 = puStack_14;
      iVar2 = fn_82F68958(pcStack00000014,auStack_28,&uStack_20);
      iVar3 = fn_82F68958(0,auStack_28,&uStack_20);
      if ((iVar2 == 0) || (iVar3 == 0)) {
        fn_8266C438(0xffffffff82002648,pcStack00000014);
        thunk_FUN_82a2b748(0xb);
        uVar1 = 0;
      }
      else {
        fn_82667720(iVar2);
        fn_82667720(iVar3);
        iVar4 = fn_82F65AC0(0xffffffff82002638,iVar2);
        if (iVar4 == 0) {
          uStack_1c = fn_82F6A3F0(iVar3,0,0);
          if ((uStack_1c == 0) || (0xffff < uStack_1c)) {
            fn_8266C438(0xffffffff820025e0,iVar3);
            thunk_FUN_82a2b748(0xb);
            return 0;
          }
          *puStack_24 = (short)uStack_1c;
        }
        else {
          iVar4 = fn_82F65AC0(0xffffffff820025cc,iVar2);
          if (iVar4 != 0) {
            fn_8266C438(0xffffffff82002588,iVar2);
            thunk_FUN_82a2b748(0xb);
            return 0;
          }
          uStack_18 = fn_82F6A3F0(iVar3,0,0);
          if ((uStack_18 == 0) || (0xffff < uStack_18)) {
            fn_8266C438(0xffffffff820025e0,iVar3);
            thunk_FUN_82a2b748(0xb);
            return 0;
          }
          puStack_24[1] = (short)uStack_18;
        }
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}

