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
extern unsigned int *auStack_970;
extern unsigned int *auStack_980;
extern int fn_8265CD28();
extern int fn_8265CD98();
extern int fn_8265CE08();
extern int fn_82662C68();
extern int fn_82662C98();
extern int fn_8266C340();
extern int fn_8266C438();
extern int fn_82A29DE8();
extern int fn_82A2A108();
extern int fn_82F92208();
extern unsigned int iStack00000014;
extern unsigned int iStack_44;
extern unsigned int iStack_58;
extern unsigned int iStack_60;
extern unsigned int iStack_984;
extern unsigned int lbl_831E7A18;
extern unsigned int uStack0000002c;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_4a;
extern unsigned int uStack_4c;
extern unsigned int uStack_54;
extern unsigned int uStack_86c;
extern unsigned int uStack_86e;
extern unsigned int uStack_870;
extern unsigned int uStack_988;


ulonglong fn_82661300(int param_1,short param_2,code *param_3,undefined4 param_4)

{
  ulonglong uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iStack00000014;
  short sStack0000001e;
  code *pcStack00000024;
  undefined4 uStack0000002c;
  uint uStack_988;
  int iStack_984;
  undefined1 auStack_980 [16];
  ushort auStack_970 [128];
  undefined2 uStack_870;
  undefined2 uStack_86e;
  uint uStack_86c;
  short asStack_860 [1024];
  int iStack_60;
  short asStack_5c [2];
  int iStack_58;
  undefined4 uStack_54;
  short sStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
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
      uStack_40 = fn_82A29DE8(iStack00000014,0xffffffff80000000,1,0,3,0x8000080,0);
      fn_82662C68(auStack_980,&uStack_40);
      piVar2 = (int *)fn_82F92208(auStack_980);
      if (*piVar2 == -1) {
        uStack_3c = 0xffffffff;
        fn_82662C98(auStack_980);
        uVar1 = (ulonglong)uStack_3c;
      }
      else {
        if (sStack0000001e != 0) {
          puVar3 = (undefined4 *)fn_82F92208(auStack_980);
          iVar4 = fn_82A2A108(*puVar3,asStack_5c,2,&uStack_988,0);
          if (iVar4 == 0) {
            fn_8266C438(0xffffffff82001c78,iStack00000014);
            uStack_38 = 0xffffffff;
            fn_82662C98(auStack_980);
            return (ulonglong)uStack_38;
          }
          if (uStack_988 != 2) {
            fn_8266C438(0xffffffff82001c30,iStack00000014);
            thunk_FUN_82a2b748(0xb);
            uStack_34 = 0xffffffff;
            fn_82662C98(auStack_980);
            return (ulonglong)uStack_34;
          }
          if (sStack0000001e != asStack_5c[0]) {
            fn_8266C438(0xffffffff82001bc8,sStack0000001e,asStack_5c[0]);
            thunk_FUN_82a2b748(0xb);
            uStack_30 = 0xffffffff;
            fn_82662C98(auStack_980);
            return (ulonglong)uStack_30;
          }
        }
        iStack_984 = 0;
        iStack_60 = 0;
        uStack_86c = 0;
        asStack_860[0] = 0;
        uStack_870 = 0;
        uStack_86e = 0xffff;
LAB_82661558:
        if ((iStack_60 != 0) || (iStack_984 != 0)) goto LAB_82661838;
        puVar3 = (undefined4 *)fn_82F92208(auStack_980);
        iVar4 = fn_82A2A108(*puVar3,auStack_970,0x100,&uStack_988,0);
        if (iVar4 != 0) {
          if (uStack_988 == 0) {
            if (asStack_860[0] != 0) {
              iVar4 = (*pcStack00000024)(asStack_860,uStack0000002c);
              if (iVar4 == 0) {
                iVar4 = thunk_FUN_82a2b798();
                if (iVar4 != 0x10d2) {
                  iStack_984 = 1;
                }
              }
              else {
                uStack_86c = uStack_86c + 1;
              }
            }
            goto LAB_82661838;
          }
          if ((ulonglong)uStack_988 != (ulonglong)uStack_988 / 2 << 1) {
            fn_8266C438(0xffffffff82001af8,iStack00000014);
            thunk_FUN_82a2b748(0xb);
            iStack_984 = 1;
            goto LAB_82661838;
          }
          if (uStack_988 < 0x100) {
            iStack_60 = 1;
            auStack_970[uStack_988 / 2] = 0;
          }
          uStack_4c = 10;
          uStack_4a = 0xd;
          uStack_48 = 0;
          uStack_24 = (uint)auStack_970[0];
          if ((((uStack_24 == 0) || (uStack_24 == 10)) || (uStack_24 == 0xd)) &&
             (asStack_860[0] != 0)) {
            iVar4 = (*pcStack00000024)(asStack_860,uStack0000002c);
            if (iVar4 == 0) {
              iVar4 = thunk_FUN_82a2b798();
              if (iVar4 != 0x10d2) {
                iStack_984 = 1;
                goto LAB_8266172c;
              }
            }
            else {
              uStack_86c = uStack_86c + 1;
            }
            asStack_860[0] = 0;
          }
LAB_8266172c:
          uStack_54 = 0;
          iStack_58 = fn_8265CD28(auStack_970,&uStack_4c,&uStack_54);
          while (iStack_58 != 0) {
            iStack_44 = fn_8265CD98(asStack_860,0x400,iStack_58);
            if (iStack_44 != 0) {
              fn_8266C438(0xffffffff82001ab0,iStack_44);
              thunk_FUN_82a2b748(0x54f);
              iStack_984 = 1;
              break;
            }
            if (iStack_60 == 0) {
              iVar4 = fn_8265CE08(iStack_58);
              sStack_50 = *(short *)(iStack_58 + (iVar4 + 1) * 2);
              if (sStack_50 == -1) break;
            }
            iVar4 = (*pcStack00000024)(asStack_860,uStack0000002c);
            if (iVar4 == 0) {
              iVar4 = thunk_FUN_82a2b798();
              if (iVar4 != 0x10d2) {
                iStack_984 = 1;
                break;
              }
            }
            else {
              uStack_86c = uStack_86c + 1;
            }
            asStack_860[0] = 0;
            iStack_58 = fn_8265CD28(0,&uStack_4c,&uStack_54);
          }
          goto LAB_82661558;
        }
        fn_8266C438(0xffffffff82001c78,iStack00000014);
        iStack_984 = 1;
LAB_82661838:
        if (iStack_984 == 0) {
          uStack_28 = uStack_86c;
          fn_82662C98(auStack_980);
          uVar1 = (ulonglong)uStack_28;
        }
        else {
          uStack_2c = 0xffffffff;
          fn_82662C98(auStack_980);
          uVar1 = (ulonglong)uStack_2c;
        }
      }
    }
  }
  return uVar1;
}

