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
extern unsigned int *auStack_70;
extern int fn_8265DED8();
extern int fn_8265ED50();
extern int fn_8265F570();
extern int fn_8265F598();
extern int fn_8265F5E0();
extern int fn_8266C340();
extern int fn_82F664B0();
extern int fn_82F68CC0();
extern int fn_82F69CA0();
extern int fn_82F96710();
extern unsigned int iStack0000001c;
extern unsigned int iStack00000024;
extern unsigned int iStack0000002c;
extern unsigned int iStack_14;
extern unsigned int iStack_18;
extern unsigned int iStack_7c;
extern unsigned int lbl_83153FD0;
extern unsigned int lbl_831E7A18;
extern unsigned int uStack_80;


ulonglong fn_8265E148(char *param_1,int param_2,int param_3,int param_4)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  char *pcStack00000014;
  int iStack0000001c;
  int iStack00000024;
  int iStack0000002c;
  uint uStack_80;
  int iStack_7c;
  undefined1 auStack_70 [88];
  int iStack_18;
  int iStack_14;
  
  pcStack00000014 = param_1;
  iStack0000001c = param_2;
  iStack00000024 = param_3;
  iStack0000002c = param_4;
  if (lbl_831E7A18 == '\0') {
    thunk_FUN_82a2b748(0x15);
    uVar1 = 0xffffffffffffffff;
  }
  else {
    if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
      fn_8266C340(0xffffffff820015c0,0xffffffff82001624,0x5d,0xffffffff82001650);
    }
    if (((iStack00000024 != 0) || (iStack0000002c != 0)) &&
       ((iStack00000024 == 0 || (iStack0000002c < 1)))) {
      fn_8266C340(0xffffffff820015c0,0xffffffff82001624,0x5e,0xffffffff82001768);
    }
    if ((pcStack00000014 == (char *)0x0) || (*pcStack00000014 == '\0')) {
      thunk_FUN_82a2b748(0x57);
      uVar1 = 0xffffffffffffffff;
    }
    else if ((iStack00000024 == 0) || (0 < iStack0000002c)) {
      if ((iStack00000024 == 0) && (iStack0000002c != 0)) {
        thunk_FUN_82a2b748(0x57);
        uVar1 = 0xffffffffffffffff;
      }
      else {
        if (pcStack00000014 == (char *)0x0) {
          auStack_70[0] = 0;
        }
        else {
          iStack_18 = fn_82F664B0(auStack_70,0x55,pcStack00000014);
          if (iStack_18 != 0) {
            fn_8266C340(0xffffffff820015c0,0xffffffff82001624,0x74,0xffffffff820015ac);
          }
          iStack_18 = fn_82F69CA0(auStack_70,0x55);
          if (iStack_18 != 0) {
            fn_8266C340(0xffffffff820015c0,0xffffffff82001624,0x74,0xffffffff820015ac);
          }
        }
        uVar2 = fn_8265ED50(auStack_70);
        if (uVar2 == 0) {
          thunk_FUN_82a2b748(0x490);
          uVar1 = 0xffffffffffffffff;
        }
        else {
          iStack_14 = iStack0000001c;
          if (iStack0000001c == 1) {
            iStack_7c = fn_8265F5E0((ulonglong)uVar2 + 0x20);
            iVar3 = fn_8265DED8((ulonglong)uVar2 + 0x20);
            uStack_80 = (iVar3 + 1) * 2;
          }
          else if (iStack0000001c == 2) {
            iVar3 = fn_8265F598((ulonglong)uVar2 + 0x3c,lbl_83153FD0);
            if (iVar3 == 0) {
              thunk_FUN_82a2b748(0x10d2);
              return 0xffffffffffffffff;
            }
            iStack_7c = fn_8265F570((ulonglong)uVar2 + 0x3c);
            iVar3 = fn_8265DED8((ulonglong)uVar2 + 0x3c);
            uStack_80 = iVar3 + 1;
          }
          else {
            if (iStack0000001c != 3) {
              fn_8266C340(0xffffffff820015c0,0xffffffff82001624,0xa1,0xffffffff82001548);
              thunk_FUN_82a2b748(0x57);
              return 0xffffffffffffffff;
            }
            iStack_7c = uVar2 + 0x58;
            uStack_80 = 2;
          }
          if (iStack00000024 != 0) {
            if (iStack0000002c < (int)uStack_80) {
              fn_82F96710(0xffffffff820016f0);
              thunk_FUN_82a2b748(0x7a);
              return 0xffffffffffffffff;
            }
            fn_82F68CC0(iStack00000024,iStack_7c,uStack_80);
          }
          uVar1 = (ulonglong)uStack_80;
        }
      }
    }
    else {
      thunk_FUN_82a2b748(0x57);
      uVar1 = 0xffffffffffffffff;
    }
  }
  return uVar1;
}

