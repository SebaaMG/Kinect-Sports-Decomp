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
extern unsigned int *auStack_c0;
extern int fn_82AA66A8();
extern int fn_82B45880();
extern int fn_82B80788();
extern int fn_82B808B0();
extern int fn_82B81B40();


void fn_82B83528(int param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_c0 [192];
  
  iVar2 = fn_82B45880(param_1,param_3);
  uVar5 = 0;
  uVar1 = *(undefined4 *)(iVar2 + 0x18);
  uVar7 = *(uint *)(param_2 + 0x2c) & 0x1e0000;
  while (uVar7 != 0) {
    uVar6 = uVar7 & ~(uVar7 - 1);
    uVar7 = uVar7 - uVar6;
    if (uVar6 == 0x20000) {
      uVar4 = 0;
    }
    else if (uVar6 == 0x40000) {
      uVar4 = 1;
    }
    else {
      if (uVar6 != 0x80000) {
        if (uVar6 != 0x100000) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0x12c0);
        }
        fn_82B80788(param_1,auStack_c0,100,param_3,param_4);
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0xe2b,auStack_c0);
      }
      uVar4 = 2;
    }
    uVar5 = fn_82B808B0(param_1,param_7,uVar4,uVar5,param_3,param_4);
  }
  cVar3 = fn_82B81B40(param_1,uVar1,param_4,param_5,param_6,uVar5,param_3,param_7);
  if (cVar3 == '\0') {
    uVar7 = *(uint *)(param_1 + 0x30);
    fn_82B80788(param_1,auStack_c0,100,param_3,param_4);
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,(-(ulonglong)((uVar7 & 0xffff0000) == 0xffff0000) & 7) + 0xdc4,
                      auStack_c0);
  }
  return;
}

