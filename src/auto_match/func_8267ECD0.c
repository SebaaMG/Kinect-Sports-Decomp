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


void fn_8267ECD0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  int iStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  
  RtlEnterCriticalSection(param_1 + 0x10);
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(param_1 + 8) == 1) {
      (*(code *)**(undefined4 **)(param_1 + 4))((*(undefined4 **)(param_1 + 4))[1]);
    }
    else {
      iStack_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      fn_8267E898(&iStack_40,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
      iVar2 = iStack_40;
      uVar3 = (ulonglong)uStack_3c;
      if (uVar3 != 0) {
        puVar4 = (undefined4 *)(iStack_40 + -4);
        do {
          puVar1 = puVar4 + 1;
          puVar4 = puVar4 + 2;
          (*(code *)*puVar1)(*puVar4);
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      fn_8267BE38(iVar2);
    }
  }
  RtlLeaveCriticalSection(param_1 + 0x10);
  return;
}

