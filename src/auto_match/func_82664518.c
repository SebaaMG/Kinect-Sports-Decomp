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
extern int fn_8247E6E0();
extern int fn_8257B0F8();
extern int fn_8265CF50();
extern int fn_8265D3F0();
extern int fn_82665488();
extern int fn_82665770();
extern int fn_82665868();
extern int fn_826660E8();
extern int fn_82666560();
extern int fn_82667010();
extern int fn_82668738();
extern int fn_826687A0();
extern int fn_8266C340();
extern int fn_8266C438();
extern int fn_82F69B70();
extern unsigned int iStack00000014;
extern unsigned int iStack0000001c;
extern unsigned int iStack_14;
extern unsigned int iStack_18;
extern unsigned int iStack_1c;
extern unsigned int lbl_831E7A18;


undefined8 fn_82664518(int param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iStack00000014;
  int iStack0000001c;
  undefined1 auStack_120 [260];
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  iStack00000014 = param_1;
  iStack0000001c = param_2;
  if (lbl_831E7A18 == '\0') {
    thunk_FUN_82a2b748(0x15);
    uVar1 = 0;
  }
  else {
    if (param_1 == 0) {
      fn_8266C340(0xffffffff820015c0,0xffffffff82001e74,0xb4,0xffffffff820021c4);
    }
    if (iStack0000001c == 0) {
      fn_8266C340(0xffffffff820015c0,0xffffffff82001e74,0xb5,0xffffffff82001e9c);
    }
    if ((iStack00000014 == 0) || (iStack0000001c == 0)) {
      thunk_FUN_82a2b748(0x57);
      uVar1 = 0;
    }
    else {
      iVar2 = fn_82F69B70(iStack00000014);
      if (iVar2 < 1) {
        fn_8266C340(0xffffffff820015c0,0xffffffff82001e74,0xbf,0xffffffff82002130);
        thunk_FUN_82a2b748(0x57);
        uVar1 = 0;
      }
      else {
        iVar2 = fn_82665770(iStack00000014);
        if (iVar2 == 0) {
          iVar2 = fn_82F69B70(iStack0000001c);
          if (iVar2 < 1) {
            fn_8266C340(0xffffffff820015c0,0xffffffff82001e74,0xd4,0xffffffff82002018);
            thunk_FUN_82a2b748(0xa1);
            uVar1 = 0;
          }
          else if (iVar2 < 0x104) {
            fn_82667010(auStack_120,iStack0000001c);
            fn_82665488(auStack_120);
            iVar2 = fn_82665868(auStack_120);
            if (iVar2 == 0) {
              iVar2 = fn_8257B0F8(auStack_120,0x2a);
              if ((iVar2 == 0) ||
                 (iVar2 = fn_8247E6E0(auStack_120,0xffffffff82001ee4), iVar2 != 0)) {
                iStack_18 = fn_82668738(0x48);
                if (iStack_18 == 0) {
                  iStack_14 = 0;
                }
                else {
                  iStack_14 = fn_826687A0(iStack_18,iStack00000014,auStack_120);
                }
                iStack_1c = iStack_14;
                if (iStack_14 == 0) {
                  fn_8266C340(0xffffffff820015c0,0xffffffff82001e74,0xfb,0xffffffff82001ebc);
                }
                if (iStack_1c == 0) {
                  thunk_FUN_82a2b748(0xe);
                  uVar1 = 0;
                }
                else {
                  iVar2 = fn_8265D3F0(0xffffffff831e7a88);
                  if (iVar2 == 0) {
                    puVar3 = (undefined4 *)fn_8265CF50(0xffffffff831e7a1c,3);
                    fn_826660E8(0xffffffff831e7a88,*puVar3);
                  }
                  fn_82666560(0xffffffff831e7a88,&iStack_1c);
                  uVar1 = 1;
                }
              }
              else {
                thunk_FUN_82a2b748(0xa1);
                uVar1 = 0;
              }
            }
            else {
              fn_8266C438(0xffffffff82001ee8,auStack_120);
              thunk_FUN_82a2b748(0xb7);
              uVar1 = 0;
            }
          }
          else {
            fn_8266C340(0xffffffff820015c0,0xffffffff82001e74,0xdb,0xffffffff82001f50);
            thunk_FUN_82a2b748(0xa1);
            uVar1 = 0;
          }
        }
        else {
          fn_8266C438(0xffffffff820020c8,iStack00000014);
          thunk_FUN_82a2b748(0xb7);
          uVar1 = 0;
        }
      }
    }
  }
  return uVar1;
}

