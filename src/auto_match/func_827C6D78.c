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
extern int fn_827C1A60();
extern int fn_827C6A40();


void fn_827C6D78(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  char acStack_60 [96];
  
  iVar1 = *(int *)(param_1 + 0x15c);
  acStack_60[0] = '\0';
  acStack_60[1] = '\0';
  acStack_60[2] = '\0';
  acStack_60[3] = '\0';
  iVar6 = 0;
  acStack_60[4] = '\0';
  acStack_60[5] = '\0';
  acStack_60[6] = '\0';
  acStack_60[7] = '\0';
  if (0 < *(int *)(param_1 + 0xe4)) {
    piVar7 = (int *)(param_1 + 0xe8);
    do {
      uVar2 = *(uint *)(*piVar7 + 0x14);
      uVar3 = *(uint *)(*piVar7 + 0x18);
      if (acStack_60[uVar2] == '\0') {
        iVar4 = (int)(((ulonglong)uVar2 + 0x16 & 0x3fffffff) << 2);
        if (*(int *)(iVar4 + param_1) == 0) {
          uVar5 = fn_827C1A60(param_1);
          *(undefined4 *)(iVar4 + param_1) = uVar5;
        }
        fn_827C6A40(param_1,*(undefined4 *)(iVar4 + param_1),
                      *(undefined4 *)((int)(((ulonglong)uVar2 + 0x13 & 0xffffffff) << 2) + iVar1));
        acStack_60[uVar2] = '\x01';
      }
      if (acStack_60[uVar3 + 4] == '\0') {
        iVar4 = (int)(((ulonglong)uVar3 + 0x1a & 0x3fffffff) << 2);
        if (*(int *)(iVar4 + param_1) == 0) {
          uVar5 = fn_827C1A60(param_1);
          *(undefined4 *)(iVar4 + param_1) = uVar5;
        }
        fn_827C6A40(param_1,*(undefined4 *)(iVar4 + param_1),
                      *(undefined4 *)((int)(((ulonglong)uVar3 + 0x17 & 0xffffffff) << 2) + iVar1));
        acStack_60[uVar3 + 4] = '\x01';
      }
      iVar6 = iVar6 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar6 < *(int *)(param_1 + 0xe4));
  }
  return;
}

