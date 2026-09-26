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
extern int fn_823AA2A8();
extern int fn_82AB15D0();
extern int fn_82AB72A0();
extern int fn_82AB7A58();
extern int fn_82B6BF98();
extern unsigned int iStack_100;
extern unsigned int iStack_11c;
extern unsigned int iStack_1a0;
extern unsigned int iStack_7c;


undefined8 fn_82B6CD48(ulonglong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar4;
  int iVar5;
  undefined8 uVar3;
  int iStack_1a0;
  int aiStack_19c [4];
  int aiStack_18c [24];
  int aiStack_12c [4];
  int iStack_11c;
  int iStack_100;
  int aiStack_fc [4];
  int aiStack_ec [24];
  int aiStack_8c [4];
  int iStack_7c;
  
  if ((param_1 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9ce8,0xffffffff820d9c18,0x1f0);
  }
  if ((param_2 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9ce0,0xffffffff820d9c18,0x1f1);
  }
  uVar1 = fn_82AB7A58(param_1);
  uVar2 = fn_82AB7A58(param_2);
  if ((uVar1 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9eb8,0xffffffff820d9c18,0x204);
  }
  if ((uVar2 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9eb0,0xffffffff820d9c18,0x205);
  }
  iVar4 = fn_823AA2A8(uVar2);
  iVar5 = fn_823AA2A8(uVar1);
  if (iVar5 == iVar4) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9e84,0xffffffff820d9c18,0x206);
  }
  iVar4 = fn_82B6BF98(uVar2);
  iVar5 = fn_82B6BF98(uVar1);
  if ((uint)(iVar4 + iVar5) < 0x20) {
    uVar1 = 0;
    do {
      fn_82AB72A0(param_1,uVar1,&iStack_100);
      if (iStack_100 != 0) {
        fn_82AB72A0(param_2,uVar1,&iStack_1a0);
        if (iStack_1a0 == 0) goto LAB_82b6cfcc;
        if (iStack_11c != iStack_7c) {
          if (1 < iStack_7c) {
            fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9dcc,0xffffffff820d9c18,0x22a);
          }
          if (1 < iStack_11c) {
            fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9dfc,0xffffffff820d9c18,0x22b);
          }
        }
        iVar4 = 0;
        do {
          if (*(int *)((int)aiStack_19c + iVar4) != *(int *)((int)aiStack_fc + iVar4)) {
            if (0xc < *(int *)((int)aiStack_fc + iVar4)) {
              fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9e2c,0xffffffff820d9c18,0x238);
            }
            if (0xc < *(int *)((int)aiStack_19c + iVar4)) {
              fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9e58,0xffffffff820d9c18,0x239);
            }
          }
          if ((*(int *)((int)aiStack_18c + iVar4) != *(int *)((int)aiStack_ec + iVar4)) ||
             (*(int *)((int)aiStack_12c + iVar4) != *(int *)((int)aiStack_8c + iVar4)))
          goto LAB_82b6cfcc;
          iVar4 = iVar4 + 4;
        } while (iVar4 < 0x10);
      }
      uVar1 = uVar1 + 1;
    } while ((uVar1 & 0xffffffff) < 0x10);
    uVar3 = 1;
  }
  else {
LAB_82b6cfcc:
    uVar3 = 0;
  }
  return uVar3;
}

