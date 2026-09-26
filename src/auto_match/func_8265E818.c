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
extern unsigned int *auStack_b0;
extern unsigned int *auStack_b8;
extern int fn_8265CF50();
extern int fn_8265D3F0();
extern int fn_8265ED20();
extern int fn_8265F608();
extern int fn_82661898();
extern int fn_826632D8();
extern int fn_826660E8();
extern int fn_82668738();
extern int fn_8266C340();
extern int fn_8266C438();
extern int fn_82A2A378();
extern int fn_82F64CE0();
extern int fn_82F69960();
extern int fn_82F69F38();
extern int fn_82F69FE8();
extern int fn_82F69FF0();
extern unsigned int iStack_20;
extern unsigned int iStack_2c;
extern unsigned int iStack_30;
extern unsigned int iStack_34;
extern unsigned int iStack_38;
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int iStack_58;
extern unsigned int lbl_82001A08;
extern unsigned int lbl_82001A0C;
extern unsigned int lbl_83153FD4;
extern unsigned int uStack0000001c;
extern unsigned int uStack_18;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;


undefined8 fn_8265E818(short *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  int iVar3;
  longlong lVar2;
  int iVar4;
  undefined4 *puVar5;
  short *psStack00000014;
  undefined4 uStack0000001c;
  short *psStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [88];
  int iStack_58;
  uint uStack_54;
  undefined2 uStack_50;
  uint uStack_4c;
  int iStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  uint uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 *puStack_1c;
  undefined4 uStack_18;
  
  psStack00000014 = param_1;
  uStack0000001c = param_2;
  if (param_1 == (short *)0x0) {
    fn_8266C340(0xffffffff820015c0,0xffffffff82001624,0x12d,0xffffffff82001a10);
  }
  if (psStack00000014 == (short *)0x0) {
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
      iVar3 = fn_82F69FF0(0xffffffff8200189c,psStack00000014,7);
      if (iVar3 == 0) {
        thunk_FUN_82a2b748(0x10d2);
        uVar1 = 0;
      }
      else {
        puStack_1c = &uStack_40;
        uStack_40 = lbl_82001A08;
        uStack_3c = lbl_82001A0C;
        uStack_4c = 0;
        uStack_54 = 0;
        uStack_50 = 1;
        iStack_34 = fn_82F69960(psStack00000014,&uStack_40,auStack_b8);
        if (iStack_34 != 0) {
          uStack_4c = fn_82F69F38(iStack_34,0,0);
        }
        iStack_38 = fn_82F69960(0,&uStack_40,auStack_b8);
        if (iStack_38 != 0) {
          uStack_54 = fn_82F69F38(iStack_38,0,0);
        }
        iVar3 = fn_82F69960(0,&uStack_40,auStack_b8);
        iStack_30 = fn_82F69960(0,&uStack_40,auStack_b8);
        if ((iVar3 == 0) || (iStack_30 == 0)) {
          fn_8266C438(0xffffffff820019b0,psStack00000014);
          thunk_FUN_82a2b748(0xb);
          uVar1 = 0;
        }
        else {
          lVar2 = fn_82F64CE0(iVar3);
          iStack_58 = fn_82F69FE8(iVar3,lVar2 + 1);
          if (iStack_58 != 0) {
            fn_8266C340(0xffffffff820015c0,0xffffffff82001624,0x16a,0xffffffff820015ac);
          }
          iStack_44 = fn_8265ED20(iVar3,0x2e);
          if (iStack_44 == 0) {
            iStack_44 = fn_8265ED20(iVar3,0x5c);
            if (iStack_44 == 0) {
              iStack_48 = fn_82A2A378(0,0,iVar3,0xffffffffffffffff,auStack_b0,0x55,0,0);
              if (iStack_48 < 1) {
                fn_8266C340(0xffffffff820015c0,0xffffffff82001624,0x185,0xffffffff82001940);
              }
              psStack_c0 = (short *)fn_82F69960(0,&uStack_40,auStack_b8);
              if (psStack_c0 != (short *)0x0) {
                lVar2 = fn_82F64CE0(psStack_c0);
                iStack_58 = fn_82F69FE8(psStack_c0,lVar2 + 1);
                if (iStack_58 != 0) {
                  fn_8266C340(0xffffffff820015c0,0xffffffff82001624,0x18b,0xffffffff820015ac);
                }
                if (iStack_58 != 0) {
                  thunk_FUN_82a2b748(0x54f);
                  return 0;
                }
                iStack_2c = fn_82F69960(0,&uStack_40,auStack_b8);
                if (iStack_2c != 0) {
                  uStack_28 = fn_82F69F38(iStack_2c,0,0);
                  if ((uStack_28 == 0) || (0xfffe < uStack_28)) {
                    fn_8266C340(0xffffffff820015c0,0xffffffff82001624,0x196,0xffffffff820018d8
                                     );
                  }
                  if ((uStack_28 == 0) || (0xfffe < uStack_28)) {
                    fn_8266C438(0xffffffff820019b0,psStack00000014);
                    thunk_FUN_82a2b748(0xb);
                    return 0;
                  }
                  uStack_50 = (undefined2)uStack_28;
                }
              }
              if ((psStack_c0 == (short *)0x0) || (*psStack_c0 == 0)) {
                psStack_c0 = (short *)lbl_83153FD4;
              }
              iVar4 = fn_8265D3F0(0xffffffff831e7a4c);
              if (iVar4 == 0) {
                puVar5 = (undefined4 *)fn_8265CF50(0xffffffff831e7a1c,4);
                fn_826660E8(0xffffffff831e7a4c,*puVar5);
              }
              iStack_20 = fn_82668738(0x5c);
              if (iStack_20 == 0) {
                uStack_18 = 0;
              }
              else {
                uStack_18 = fn_826632D8(iStack_20,uStack_4c & 0xffff,uStack_54 & 0xfff,iVar3,
                                              iStack_30,psStack_c0,uStack_50);
              }
              uStack_24 = uStack_18;
              fn_8265F608(0xffffffff831e7a4c,&uStack_24);
              uVar1 = 1;
            }
            else {
              fn_8266C438(0xffffffff82001958,iVar3);
              thunk_FUN_82a2b748(0xb);
              uVar1 = 0;
            }
          }
          else {
            fn_8266C438(0xffffffff82001958,iVar3);
            thunk_FUN_82a2b748(0xb);
            uVar1 = 0;
          }
        }
      }
    }
  }
  return uVar1;
}

