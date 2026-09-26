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
extern unsigned int *auStack_120;
extern int fn_82665D08();
extern int fn_8266C020();
extern int fn_8266C0B0();
extern int fn_8266C340();
extern int fn_82F69B70();
extern unsigned int iStack0000001c;
extern unsigned int iStack_18;
extern unsigned int iStack_1c;
extern unsigned int uStack00000014;
extern unsigned int uStack_12;
extern unsigned int uStack_14;


undefined8 fn_8266BBA8(uint param_1,int param_2,undefined2 *param_3,undefined2 *param_4)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uStack00000014;
  int iStack0000001c;
  undefined2 *puStack00000024;
  undefined2 *puStack0000002c;
  undefined1 auStack_120 [260];
  int iStack_1c;
  int iStack_18;
  undefined2 uStack_14;
  undefined2 uStack_12;
  
  uStack00000014 = param_1;
  iStack0000001c = param_2;
  puStack00000024 = param_3;
  puStack0000002c = param_4;
  if (param_2 == 0) {
    thunk_FUN_82a2b748(0x57);
    uVar1 = 0;
  }
  else if (param_3 == (undefined2 *)0x0) {
    thunk_FUN_82a2b748(0x57);
    uVar1 = 0;
  }
  else if (param_4 == (undefined2 *)0x0) {
    thunk_FUN_82a2b748(0x57);
    uVar1 = 0;
  }
  else {
    iVar2 = fn_82F69B70((ulonglong)param_1 + 0xc);
    if (iVar2 == 0) {
      fn_8266C340(0xffffffff820015c0,0xffffffff82002790,0x169,0xffffffff82002840);
      thunk_FUN_82a2b748(0x139f);
      uVar1 = 0;
    }
    else {
      iVar2 = fn_82F69B70((ulonglong)uStack00000014 + 0xc);
      iVar3 = fn_82F69B70(iStack0000001c);
      iVar4 = fn_82F69B70(0xffffffff82002924);
      if (iVar2 + iVar3 + iVar4 + 3U < 0x105) {
        iStack_18 = fn_8266C020(auStack_120,0xffffffff8200289c,(ulonglong)uStack00000014 + 0xc
                                      ,iStack0000001c,0xffffffff82002924);
        if (iStack_18 < 1) {
          fn_8266C340(0xffffffff820015c0,0xffffffff82002790,0x179,0xffffffff82001940);
        }
        if (iStack_18 < 1) {
          thunk_FUN_82a2b748(0x54f);
          uVar1 = 0;
        }
        else {
          fn_8266C0B0(&uStack_14);
          iStack_1c = fn_82665D08(auStack_120,&uStack_14);
          if ((iStack_1c < 0) && (iVar2 = thunk_FUN_82a2b798(), iVar2 != 2)) {
            uVar1 = 0;
          }
          else {
            *puStack00000024 = uStack_14;
            *puStack0000002c = uStack_12;
            uVar1 = 1;
          }
        }
      }
      else {
        thunk_FUN_82a2b748(0xa1);
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}

