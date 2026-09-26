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
extern unsigned int *auStack_160;
extern unsigned int *auStack_20;
extern unsigned int *auStack_270;
extern int fn_82662C98();
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
extern unsigned int iStack_16c;
extern unsigned int uStack00000014;
extern unsigned int uStack_14;
extern unsigned int uStack_168;
extern unsigned int uStack_18;


undefined4 fn_8266B700(uint param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uStack00000014;
  int iStack0000001c;
  int iStack00000024;
  undefined1 auStack_270 [260];
  int iStack_16c;
  undefined4 uStack_168;
  undefined1 auStack_160 [320];
  undefined1 auStack_20 [8];
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack00000014 = param_1;
  iStack0000001c = param_2;
  iStack00000024 = param_3;
  if (param_2 == 0) {
    thunk_FUN_82a2b748(0x57);
  }
  else if (param_3 == 0) {
    thunk_FUN_82a2b748(0x57);
  }
  else {
    iVar1 = fn_82F69B70((ulonglong)param_1 + 0xc);
    if (iVar1 == 0) {
      thunk_FUN_82a2b748(0x139f);
    }
    else {
      iVar1 = fn_82F69B70((ulonglong)uStack00000014 + 0xc);
      iVar2 = fn_82F69B70(iStack0000001c);
      iVar3 = fn_82F69B70(iStack00000024);
      if (iVar1 + iVar2 + iVar3 + 3U < 0x105) {
        iStack_16c = fn_8266C020(auStack_270,0xffffffff8200289c,
                                       (ulonglong)uStack00000014 + 0xc,iStack00000024,iStack0000001c
                                      );
        if (iStack_16c < 1) {
          fn_8266C340(0xffffffff820015c0,0xffffffff82002790,0xe7,0xffffffff82001940);
        }
        if (iStack_16c < 1) {
          thunk_FUN_82a2b748(0x54f);
        }
        else {
          iVar1 = fn_8266BFE8(iStack0000001c);
          if (iVar1 == 0) {
            iVar1 = fn_82A1F4F8(auStack_270);
            if (iVar1 != -1) {
              return 1;
            }
            uStack_168 = 0xffffffff;
          }
          else {
            uStack_18 = fn_82A2A438(auStack_270,auStack_160);
            fn_8266C080(auStack_20,&uStack_18);
            piVar4 = (int *)fn_82F92208(auStack_20);
            if (*piVar4 != -1) {
              uStack_14 = 1;
              fn_82662C98(auStack_20);
              return uStack_14;
            }
            fn_82662C98(auStack_20);
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

