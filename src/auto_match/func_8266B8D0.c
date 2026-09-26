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
extern unsigned int *auStack_170;
extern unsigned int *auStack_280;
extern unsigned int *auStack_30;
extern int fn_82662C98();
extern int fn_8266B308();
extern int fn_8266B340();
extern int fn_8266BB78();
extern int fn_8266BFE8();
extern int fn_8266C020();
extern int fn_8266C080();
extern int fn_8266C340();
extern int fn_82A1F4F8();
extern int fn_82A2A438();
extern int fn_82F69B70();
extern int fn_82F92208();
extern unsigned int iStack0000001c;
extern unsigned int iStack00000024;
extern unsigned int iStack0000002c;
extern unsigned int iStack_174;
extern unsigned int iStack_178;
extern unsigned int iStack_17c;
extern unsigned int iStack_1c;
extern unsigned int uStack00000014;
extern unsigned int uStack_20;
extern unsigned int uStack_24;


undefined4 fn_8266B8D0(uint param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uStack00000014;
  int iStack0000001c;
  int iStack00000024;
  int iStack0000002c;
  undefined1 auStack_280 [260];
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  undefined1 auStack_170 [320];
  undefined1 auStack_30 [8];
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  uStack00000014 = param_1;
  iStack0000001c = param_2;
  iStack00000024 = param_3;
  iStack0000002c = param_4;
  if (param_2 == 0) {
    thunk_FUN_82a2b748(0x57);
  }
  else if (param_3 == 0) {
    thunk_FUN_82a2b748(0x57);
  }
  else if (param_4 == 0) {
    thunk_FUN_82a2b748(0x57);
  }
  else {
    iVar1 = fn_8266B340(param_4);
    if (iVar1 == 0) {
      fn_8266C340(0xffffffff820015c0,0xffffffff82002790,0x11b,0xffffffff820028c8);
    }
    if (iStack0000002c == 0) {
      iStack_1c = 0;
    }
    else {
      iStack_1c = iStack0000002c + -4;
    }
    iStack_17c = iStack_1c;
    iVar1 = fn_82F69B70((ulonglong)uStack00000014 + 0xc);
    if (iVar1 == 0) {
      thunk_FUN_82a2b748(0x139f);
    }
    else {
      iVar1 = fn_82F69B70((ulonglong)uStack00000014 + 0xc);
      iVar2 = fn_82F69B70(iStack0000001c);
      iVar3 = fn_82F69B70(iStack00000024);
      if (iVar1 + iVar2 + iVar3 + 3U < 0x105) {
        iStack_178 = fn_8266C020(auStack_280,0xffffffff8200289c,
                                       (ulonglong)uStack00000014 + 0xc,iStack00000024,iStack0000001c
                                      );
        if (iStack_178 < 1) {
          fn_8266C340(0xffffffff820015c0,0xffffffff82002790,0x12d,0xffffffff82001940);
        }
        if (iStack_178 < 1) {
          thunk_FUN_82a2b748(0x54f);
        }
        else {
          iVar1 = fn_8266BFE8(iStack0000001c);
          if (iVar1 == 0) {
            iStack_174 = fn_82A1F4F8(auStack_280);
            if (iStack_174 != -1) {
              fn_8266B308(iStack_17c,auStack_280);
              return 1;
            }
            iStack_174 = 0xffffffff;
          }
          else {
            uStack_24 = fn_82A2A438(auStack_280,auStack_170);
            fn_8266C080(auStack_30,&uStack_24);
            piVar4 = (int *)fn_82F92208(auStack_30);
            if (*piVar4 != -1) {
              puStack_28 = (undefined1 *)fn_8266BB78(auStack_280,0x5c);
              if (puStack_28 == (undefined1 *)0x0) {
                fn_8266C340(0xffffffff820015c0,0xffffffff82002790,0x145,0xffffffff820028a8);
              }
              *puStack_28 = 0;
              fn_8266B308(iStack_17c,auStack_280);
              uStack_20 = 1;
              fn_82662C98(auStack_30);
              return uStack_20;
            }
            fn_82662C98(auStack_30);
          }
          thunk_FUN_82a2b748(0x490);
        }
      }
      else {
        thunk_FUN_82a2b748(0xa1);
      }
    }
  }
  return 0;
}

