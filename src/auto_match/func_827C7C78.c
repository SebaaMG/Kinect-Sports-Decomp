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
extern int fn_827C7348();


void fn_827C7C78(int param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  ulonglong uVar9;
  char acStack_50 [80];
  
  iVar1 = *(int *)(param_1 + 0x15c);
  fn_827C7348(iVar1);
  iVar6 = 0;
  acStack_50[0] = '\0';
  acStack_50[1] = '\0';
  acStack_50[2] = '\0';
  acStack_50[3] = '\0';
  bVar3 = *(int *)(param_1 + 300) != 0;
  if (0 < *(int *)(param_1 + 0xe4)) {
    piVar7 = (int *)(param_1 + 0xe8);
    do {
      if (bVar3) {
        uVar2 = *(uint *)(*piVar7 + 0x18);
LAB_827c7ce4:
        uVar9 = (ulonglong)uVar2;
        if (acStack_50[uVar2] == '\0') {
          uVar5 = uVar9 + 0x16;
          if (bVar3) {
            uVar5 = uVar9 + 0x1a;
          }
          piVar8 = (int *)((int)((uVar5 & 0xffffffff) << 2) + param_1);
          if (*piVar8 == 0) {
            iVar4 = fn_827C1A60(param_1);
            *piVar8 = iVar4;
          }
          fn_827C6A40(param_1,*piVar8,
                        *(undefined4 *)((int)((uVar9 + 0x17 & 0xffffffff) << 2) + iVar1));
          acStack_50[uVar2] = '\x01';
        }
      }
      else if (*(int *)(param_1 + 0x134) == 0) {
        uVar2 = *(uint *)(*piVar7 + 0x14);
        goto LAB_827c7ce4;
      }
      iVar6 = iVar6 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar6 < *(int *)(param_1 + 0xe4));
  }
  return;
}

