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
extern int fn_828184A8();
extern int fn_82F672D8();
extern int fn_82F678C8();
extern int fn_82F6AB08();
extern int fn_82F6CE40();
extern unsigned int uStack_2c;


undefined8 fn_8282F458(int param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  int iVar5;
  longlong lVar3;
  undefined8 uVar4;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char acStack_30 [4];
  undefined1 uStack_2c;
  
  iVar5 = fn_82F678C8(param_1,0x38,1,param_2);
  if (iVar5 == 1) {
    fn_82F672D8(acStack_30,param_1,4);
    uStack_2c = 0;
    pcVar8 = acStack_30;
    pcVar7 = "SAFF";
    do {
      cVar1 = *pcVar8;
      cVar2 = *pcVar7;
      if (cVar1 == '\0') break;
      pcVar8 = pcVar8 + 1;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 == cVar2) {
      pcVar8 = "08.11.07.0040";
      pcVar7 = (char *)(param_1 + 4);
      do {
        cVar1 = *pcVar7;
        cVar2 = *pcVar8;
        if (cVar1 == '\0') break;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        iVar5 = *(int *)(param_1 + 0x14);
        *(undefined4 *)(param_1 + 0x14) = 0;
        iVar6 = fn_828184A8(param_1,0x38);
        if (iVar5 == iVar6) {
          uVar4 = 0;
        }
        else {
          lVar3 = fn_82F6AB08();
          fn_82F6CE40(lVar3 + 0x40,0xffffffff8201ee3c);
          uVar4 = 4;
        }
      }
      else {
        lVar3 = fn_82F6AB08();
        fn_82F6CE40(lVar3 + 0x40,0xffffffff8201ee78,(char *)(param_1 + 4),0xffffffff8201ee2c);
        uVar4 = 3;
      }
    }
    else {
      lVar3 = fn_82F6AB08();
      fn_82F6CE40(lVar3 + 0x40,0xffffffff8201edd0,acStack_30,0xffffffff8201edc8);
      uVar4 = 2;
    }
  }
  else {
    lVar3 = fn_82F6AB08();
    fn_82F6CE40(lVar3 + 0x40,0xffffffff8201ed88);
    uVar4 = 5;
  }
  return uVar4;
}

