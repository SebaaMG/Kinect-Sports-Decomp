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
extern unsigned int *auStack_500;
extern int fn_8265CD60();
extern int fn_8265CDD0();
extern int fn_8265CE30();
extern int fn_82662C68();
extern int fn_82662C98();
extern int fn_8266C340();
extern int fn_8266C438();
extern int fn_82A29DE8();
extern int fn_82A2A108();
extern int fn_82F92208();
extern unsigned int iStack00000014;
extern unsigned int iStack_28;
extern unsigned int iStack_48;
extern unsigned int iStack_504;
extern unsigned int iStack_58;
extern unsigned int iStack_60;
extern unsigned int lbl_831E7A18;
extern unsigned int uStack0000002c;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_46c;
extern unsigned int uStack_46f;
extern unsigned int uStack_470;
extern unsigned int uStack_4c;
extern unsigned int uStack_4d;
extern unsigned int uStack_4e;
extern unsigned int uStack_508;
extern unsigned int uStack_54;


ulonglong fn_826671A8(int param_1,short param_2,code *param_3,undefined4 param_4)

{
  ulonglong uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iStack00000014;
  short sStack0000001e;
  code *pcStack00000024;
  undefined4 uStack0000002c;
  uint uStack_508;
  int iStack_504;
  undefined1 auStack_500 [16];
  char acStack_4f0 [128];
  undefined1 uStack_470;
  undefined1 uStack_46f;
  uint uStack_46c;
  char acStack_460 [1024];
  int iStack_60;
  short asStack_5c [2];
  int iStack_58;
  undefined4 uStack_54;
  char cStack_50;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  undefined1 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  int iStack_28;
  
  iStack00000014 = param_1;
  sStack0000001e = param_2;
  pcStack00000024 = param_3;
  uStack0000002c = param_4;
  if (lbl_831E7A18 == '\0') {
    thunk_FUN_82a2b748(0x15);
    uVar1 = 0xffffffffffffffff;
  }
  else {
    if (param_1 == 0) {
      fn_8266C340(0xffffffff820015c0,0xffffffff82001ca8,0x8d,0xffffffff82001cf0);
    }
    if (iStack00000014 == 0) {
      thunk_FUN_82a2b748(0x57);
      uVar1 = 0xffffffffffffffff;
    }
    else {
      uStack_44 = fn_82A29DE8(iStack00000014,0xffffffff80000000,1,0,3,0x8000080,0);
      fn_82662C68(auStack_500,&uStack_44);
      piVar2 = (int *)fn_82F92208(auStack_500);
      if (*piVar2 == -1) {
        uStack_40 = 0xffffffff;
        fn_82662C98(auStack_500);
        uVar1 = (ulonglong)uStack_40;
      }
      else {
        if (sStack0000001e != 0) {
          puVar3 = (undefined4 *)fn_82F92208(auStack_500);
          iVar4 = fn_82A2A108(*puVar3,asStack_5c,2,&uStack_508,0);
          if (iVar4 == 0) {
            fn_8266C438(0xffffffff82001c78,iStack00000014);
            uStack_3c = 0xffffffff;
            fn_82662C98(auStack_500);
            return (ulonglong)uStack_3c;
          }
          if (uStack_508 != 2) {
            fn_8266C438(0xffffffff82001c30,iStack00000014);
            thunk_FUN_82a2b748(0xb);
            uStack_38 = 0xffffffff;
            fn_82662C98(auStack_500);
            return (ulonglong)uStack_38;
          }
          if (sStack0000001e != asStack_5c[0]) {
            fn_8266C438(0xffffffff82001bc8,sStack0000001e,asStack_5c[0]);
            thunk_FUN_82a2b748(0xb);
            uStack_34 = 0xffffffff;
            fn_82662C98(auStack_500);
            return (ulonglong)uStack_34;
          }
        }
        iStack_504 = 0;
        iStack_60 = 0;
        uStack_46c = 0;
        acStack_460[0] = '\0';
        uStack_470 = 0;
        uStack_46f = 0xff;
LAB_82667400:
        if ((iStack_60 != 0) || (iStack_504 != 0)) goto LAB_826676c0;
        puVar3 = (undefined4 *)fn_82F92208(auStack_500);
        iVar4 = fn_82A2A108(*puVar3,acStack_4f0,0x80,&uStack_508,0);
        if (iVar4 != 0) {
          if (uStack_508 == 0) {
            if (acStack_460[0] != '\0') {
              iVar4 = (*pcStack00000024)(acStack_460,uStack0000002c);
              if (iVar4 == 0) {
                iVar4 = thunk_FUN_82a2b798();
                if (iVar4 != 0x10d2) {
                  iStack_504 = 1;
                }
              }
              else {
                uStack_46c = uStack_46c + 1;
              }
            }
            goto LAB_826676c0;
          }
          if (uStack_508 < 0x80) {
            iStack_60 = 1;
            acStack_4f0[uStack_508] = '\0';
          }
          uStack_4e = 10;
          uStack_4d = 0xd;
          uStack_4c = 0;
          iStack_28 = (int)acStack_4f0[0];
          if ((((iStack_28 == 0) || (iStack_28 == 10)) || (iStack_28 == 0xd)) &&
             (acStack_460[0] != '\0')) {
            iVar4 = (*pcStack00000024)(acStack_460,uStack0000002c);
            if (iVar4 == 0) {
              iVar4 = thunk_FUN_82a2b798();
              if (iVar4 != 0x10d2) {
                iStack_504 = 1;
                goto LAB_826675b8;
              }
            }
            else {
              uStack_46c = uStack_46c + 1;
            }
            acStack_460[0] = '\0';
          }
LAB_826675b8:
          uStack_54 = 0;
          iStack_58 = fn_8265CD60(acStack_4f0,&uStack_4e,&uStack_54);
          while (iStack_58 != 0) {
            iStack_48 = fn_8265CDD0(acStack_460,0x400,iStack_58);
            if (iStack_48 != 0) {
              fn_8266C438(0xffffffff82001ab0,iStack_48);
              thunk_FUN_82a2b748(0x54f);
              iStack_504 = 1;
              break;
            }
            if (iStack_60 == 0) {
              iVar4 = fn_8265CE30(iStack_58);
              cStack_50 = *(char *)(iStack_58 + iVar4 + 1);
              if (cStack_50 == -1) break;
            }
            iVar4 = (*pcStack00000024)(acStack_460,uStack0000002c);
            if (iVar4 == 0) {
              iVar4 = thunk_FUN_82a2b798();
              if (iVar4 != 0x10d2) {
                iStack_504 = 1;
                break;
              }
            }
            else {
              uStack_46c = uStack_46c + 1;
            }
            acStack_460[0] = '\0';
            iStack_58 = fn_8265CD60(0,&uStack_4e,&uStack_54);
          }
          goto LAB_82667400;
        }
        fn_8266C438(0xffffffff82001c78,iStack00000014);
        iStack_504 = 1;
LAB_826676c0:
        if (iStack_504 == 0) {
          uStack_2c = uStack_46c;
          fn_82662C98(auStack_500);
          uVar1 = (ulonglong)uStack_2c;
        }
        else {
          uStack_30 = 0xffffffff;
          fn_82662C98(auStack_500);
          uVar1 = (ulonglong)uStack_30;
        }
      }
    }
  }
  return uVar1;
}

