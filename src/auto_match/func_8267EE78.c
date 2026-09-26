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
extern int fn_8267BE38();
extern int fn_8267E898();
extern unsigned int iStack_40;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;


void fn_8267EE78(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  int iStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    return;
  }
  RtlEnterCriticalSection(iVar1 + 0x10);
  if (*(int *)(iVar1 + 8) != 0) {
    if (*(int *)(iVar1 + 8) == 1) {
      (*(code *)**(undefined4 **)(iVar1 + 4))((*(undefined4 **)(iVar1 + 4))[1]);
    }
    else {
      iStack_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      fn_8267E898(&iStack_40,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
      iVar3 = iStack_40;
      uVar4 = (ulonglong)uStack_3c;
      if (uVar4 != 0) {
        puVar5 = (undefined4 *)(iStack_40 + -4);
        do {
          puVar2 = puVar5 + 1;
          puVar5 = puVar5 + 2;
          (*(code *)*puVar2)(*puVar5);
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      fn_8267BE38(iVar3);
    }
  }
  RtlLeaveCriticalSection(iVar1 + 0x10);
  return;
}

