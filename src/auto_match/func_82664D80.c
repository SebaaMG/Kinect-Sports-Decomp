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
extern unsigned int *auStack_1c;
extern unsigned int *auStack_20;
extern unsigned int *auStack_24;
extern unsigned int *auStack_90;
extern int fn_8265CF50();
extern int fn_8265F570();
extern int fn_8265FA58();
extern int fn_82665770();
extern int fn_82665B90();
extern int fn_826666C8();
extern int fn_82668D40();
extern int fn_82668D80();
extern int fn_82668EA0();
extern int fn_8266C340();
extern int fn_82F664B0();
extern int fn_82F69B70();
extern int fn_82F69CA0();
extern unsigned int iStack00000014;
extern unsigned int iStack0000001c;
extern unsigned int iStack00000024;
extern unsigned int iStack_2c;
extern unsigned int lbl_831E7A18;
extern unsigned int uStack_28;
extern unsigned int uStack_30;


undefined8 fn_82664D80(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char cVar6;
  int iStack00000014;
  int iStack0000001c;
  int iStack00000024;
  undefined1 auStack_90 [88];
  undefined1 *puStack_38;
  int *piStack_34;
  uint uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  
  iStack00000014 = param_1;
  iStack0000001c = param_2;
  iStack00000024 = param_3;
  if (lbl_831E7A18 == '\0') {
    thunk_FUN_82a2b748(0x15);
    uVar3 = 0;
  }
  else {
    if (param_1 == 0) {
      fn_8266C340(0xffffffff820015c0,0xffffffff82001e74,499,0xffffffff820022e0);
    }
    if (iStack00000014 == 0) {
      thunk_FUN_82a2b748(0x57);
      uVar3 = 0;
    }
    else {
      if (iStack00000024 == 0) {
        fn_8266C340(0xffffffff820015c0,0xffffffff82001e74,0x1fa,0xffffffff8200237c);
      }
      if (iStack00000024 == 0) {
        thunk_FUN_82a2b748(0x57);
        uVar3 = 0;
      }
      else {
        uStack_30 = fn_82665770(iStack00000014);
        if (uStack_30 == 0) {
          fn_8266C340(0xffffffff820015c0,0xffffffff82001e74,0x202,0xffffffff820022c8);
        }
        if (uStack_30 == 0) {
          thunk_FUN_82a2b748(0x57);
          uVar3 = 0;
        }
        else {
          if ((iStack0000001c != 0) && (uVar4 = fn_82F69B70(iStack0000001c), 0x54 < uVar4)) {
            fn_8266C340(0xffffffff820015c0,0xffffffff82001e74,0x20b,0xffffffff82002300);
          }
          if ((iStack0000001c == 0) || (uVar4 = fn_82F69B70(iStack0000001c), uVar4 < 0x55)) {
            if (iStack0000001c == 0) {
              auStack_90[0] = 0;
            }
            else {
              iStack_2c = fn_82F664B0(auStack_90,0x55,iStack0000001c);
              if (iStack_2c != 0) {
                fn_8266C340(0xffffffff820015c0,0xffffffff82001e74,0x213,0xffffffff820015ac);
              }
              iStack_2c = fn_82F69CA0(auStack_90,0x55);
              if (iStack_2c != 0) {
                fn_8266C340(0xffffffff820015c0,0xffffffff82001e74,0x213,0xffffffff820015ac);
              }
            }
            piStack_34 = (int *)0x0;
            puStack_38 = (undefined1 *)0x0;
            if (iStack0000001c == 0) {
              puVar5 = (undefined4 *)fn_82668D40(auStack_24,0xffffffff831e7b08);
              uStack_28 = *puVar5;
              while( true ) {
                uVar3 = fn_82668D80(auStack_1c,0xffffffff831e7b08);
                cVar6 = fn_82668EA0(&uStack_28,uVar3);
                if (cVar6 == '\0') break;
                puVar5 = (undefined4 *)fn_8265FA58(&uStack_28,0);
                puVar5 = (undefined4 *)fn_8265CF50(0xffffffff831e7a74,*puVar5);
                puStack_38 = (undefined1 *)fn_8265F570(*puVar5);
                piStack_34 = (int *)fn_82665B90(uStack_30,puStack_38);
                if (piStack_34 != (int *)0x0) break;
                fn_826666C8(auStack_20,&uStack_28,0);
              }
            }
            else {
              puStack_38 = auStack_90;
              piStack_34 = (int *)fn_82665B90(uStack_30,auStack_90);
            }
            if (piStack_34 == (int *)0x0) {
              thunk_FUN_82a2b748(0x490);
              uVar3 = 0;
            }
            else {
              if (puStack_38 == (undefined1 *)0x0) {
                fn_8266C340(0xffffffff820015c0,0xffffffff82001e74,0x22e,0xffffffff820022a4);
              }
              puVar2 = puStack_38;
              iVar1 = iStack00000024;
              uVar3 = fn_8265F570((ulonglong)uStack_30 + 0x1c);
              uVar3 = (**(code **)(*piStack_34 + 0xc))(piStack_34,uVar3,puVar2,iVar1);
            }
          }
          else {
            thunk_FUN_82a2b748(0x57);
            uVar3 = 0;
          }
        }
      }
    }
  }
  return uVar3;
}

