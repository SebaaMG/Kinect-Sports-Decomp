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
extern unsigned int *auStack_18;
extern unsigned int *auStack_20;
extern unsigned int *auStack_24;
extern unsigned int *auStack_28;
extern int fn_8225E7A0();
extern int fn_8265D5A8();
extern int fn_8265F888();
extern int fn_8265F8D8();
extern int fn_82662368();
extern int fn_82662378();
extern int fn_82662630();
extern int fn_82662A88();
extern int fn_826689B8();
extern int fn_82668E70();
extern int fn_82669808();
extern int fn_82669B20();
extern int fn_82F919C8();
extern int fn_82F91FD0();
extern int fn_82F92218();
extern int fn_82F953A8();
extern int fn_82F953B8();
extern unsigned int iStack0000001c;
extern unsigned int stack0x00000024;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


undefined4 * fn_82661C70(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar4;
  undefined8 uVar2;
  char cVar7;
  undefined8 uVar3;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puStack00000014;
  int iStack0000001c;
  undefined4 uStack00000024;
  undefined4 uStack0000002c;
  undefined4 uStack_40;
  undefined1 uStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  
  puStack00000014 = param_1;
  iStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  uStack_38 = fn_82F92218(param_4);
  fn_82668E70(&uStack_40);
  uStack_3c = 0;
  iVar4 = fn_82662368(iStack0000001c);
  if (iVar4 == 0) {
    fn_82662630(puStack00000014,iStack0000001c,1,*(undefined4 *)(iStack0000001c + 4),
                      uStack0000002c);
    return puStack00000014;
  }
  uVar2 = fn_8265F888(auStack_28,iStack0000001c);
  cVar7 = fn_82669808(&stack0x00000024,uVar2);
  if (cVar7 == '\0') {
    uVar2 = fn_8265F8D8(auStack_24,iStack0000001c);
    cVar7 = fn_82669808(&stack0x00000024,uVar2);
    if (cVar7 == '\0') {
      fn_826689B8(&stack0x00000024);
      uVar2 = fn_82F919C8();
      uVar3 = fn_8265D5A8(uStack_38);
      cVar7 = fn_8225E7A0(iStack0000001c,uVar3,uVar2);
      if (cVar7 != '\0') {
        uStack_40 = uStack00000024;
        uVar2 = fn_8265D5A8(uStack_38);
        fn_82662A88(&uStack_40);
        fn_826689B8();
        uVar3 = fn_82F919C8();
        cVar7 = fn_8225E7A0(iStack0000001c,uVar3,uVar2);
        if (cVar7 != '\0') {
          fn_826689B8(&uStack_40);
          puVar6 = (undefined4 *)fn_82F953B8();
          pcVar5 = (char *)fn_82F953A8(*puVar6);
          uVar1 = uStack0000002c;
          if (*pcVar5 != '\0') {
            uVar2 = fn_826689B8(&uStack_40);
            fn_82662630(puStack00000014,iStack0000001c,0,uVar2,uVar1);
            return puStack00000014;
          }
          uVar2 = fn_826689B8(&stack0x00000024);
          fn_82662630(puStack00000014,iStack0000001c,1,uVar2,uVar1);
          return puStack00000014;
        }
      }
      uVar2 = fn_8265D5A8(uStack_38);
      fn_826689B8(&stack0x00000024);
      uVar3 = fn_82F919C8();
      cVar7 = fn_8225E7A0(iStack0000001c,uVar3,uVar2);
      if (cVar7 != '\0') {
        uStack_40 = uStack00000024;
        uVar2 = fn_8265F8D8(auStack_20,iStack0000001c);
        uVar3 = fn_82669B20(&uStack_40);
        cVar7 = fn_82669808(uVar3,uVar2);
        if (cVar7 == '\0') {
          fn_826689B8(&uStack_40);
          uVar2 = fn_82F919C8();
          uVar3 = fn_8265D5A8(uStack_38);
          cVar7 = fn_8225E7A0(iStack0000001c,uVar3,uVar2);
          if (cVar7 == '\0') goto LAB_826622f8;
        }
        fn_826689B8(&stack0x00000024);
        puVar6 = (undefined4 *)fn_82F953B8();
        pcVar5 = (char *)fn_82F953A8(*puVar6);
        uVar1 = uStack0000002c;
        if (*pcVar5 != '\0') {
          uVar2 = fn_826689B8(&stack0x00000024);
          fn_82662630(puStack00000014,iStack0000001c,0,uVar2,uVar1);
          return puStack00000014;
        }
        uVar2 = fn_826689B8(&uStack_40);
        fn_82662630(puStack00000014,iStack0000001c,1,uVar2,uVar1);
        return puStack00000014;
      }
    }
    else {
      uVar2 = fn_8265D5A8(uStack_38);
      puVar6 = (undefined4 *)fn_82F91FD0(iStack0000001c);
      uVar3 = fn_82F919C8(*puVar6);
      cVar7 = fn_8225E7A0(iStack0000001c,uVar3,uVar2);
      uVar1 = uStack0000002c;
      if (cVar7 != '\0') {
        puVar6 = (undefined4 *)fn_82F91FD0(iStack0000001c);
        fn_82662630(puStack00000014,iStack0000001c,0,*puVar6,uVar1);
        return puStack00000014;
      }
    }
  }
  else {
    fn_826689B8(&stack0x00000024);
    uVar2 = fn_82F919C8();
    uVar3 = fn_8265D5A8(uStack_38);
    cVar7 = fn_8225E7A0(iStack0000001c,uVar3,uVar2);
    uVar1 = uStack0000002c;
    if (cVar7 != '\0') {
      uVar2 = fn_826689B8(&stack0x00000024);
      fn_82662630(puStack00000014,iStack0000001c,1,uVar2,uVar1);
      return puStack00000014;
    }
  }
LAB_826622f8:
  puVar6 = (undefined4 *)fn_82662378(auStack_18,iStack0000001c,uStack0000002c,uStack_3c);
  *puStack00000014 = *puVar6;
  return puStack00000014;
}

