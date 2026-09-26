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
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_82FA5190();
extern int fn_82FFDF28();
extern int fn_82FFE400();
extern int fn_82FFF348();
extern unsigned int iStack_68;
extern unsigned int lbl_832645A4;


void fn_82FFB818(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_70 [8];
  int iStack_68;
  undefined1 auStack_60 [96];
  
  if (*(int *)(param_2 + 0x28) != 0) {
    RtlEnterCriticalSection(param_1 + 0x50);
    uVar3 = 0;
    if (*(int *)(param_2 + 0x20) != 0) {
      iVar4 = 0;
      do {
        fn_82FFDF28(auStack_70,param_1 + 0x90,*(undefined4 *)(iVar4 + *(int *)(param_2 + 0x28)));
        iVar1 = iStack_68;
        if (iStack_68 != 0) {
          piVar5 = (int *)(iStack_68 + 8);
          fn_82FFE400(iStack_68 + 0x10,param_2);
          lVar2 = (ulonglong)*(uint *)(iVar1 + 0x1c) - 1;
          *(int *)(iVar1 + 0x1c) = (int)lVar2;
          if ((lVar2 == 0) && (*piVar5 != 0)) {
            fn_82FA5190(lbl_832645A4);
            *piVar5 = 0;
            *(undefined4 *)(iVar1 + 0xc) = 0;
          }
          if (*(int *)(iVar1 + 0x1c) == 0) {
            fn_82FFF348(auStack_60,param_1 + 0x90,auStack_70);
          }
        }
        uVar3 = uVar3 + 1;
        iVar4 = iVar4 + 0xc;
      } while (uVar3 < *(uint *)(param_2 + 0x20));
    }
    RtlLeaveCriticalSection(param_1 + 0x50);
  }
  return;
}

