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
extern int fn_829F00A0();


undefined8 fn_829F0FF0(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  iVar1 = *(int *)(param_1 + 0x90);
  if (iVar1 != -1) {
    iVar1 = fn_829F00A0(param_1,param_2,iVar1 * 0x50 + param_1 + 0xc0,
                            iVar1 * 0x1c + param_1 + 0x200,param_3);
    if (iVar1 != 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x274) == 1) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  }
  uVar3 = 0;
  if (*(int *)(param_1 + 0x270) != 0) {
    piVar4 = (int *)(param_1 + 0x200);
    iVar1 = param_1 + 0xc0;
    do {
      iVar2 = fn_829F00A0(param_1,param_2,iVar1,piVar4,param_3);
      if ((iVar2 != 0) || ((*(int *)(param_1 + 0x274) == 1 && (*piVar4 != 0)))) {
        *(uint *)(param_1 + 0x90) = uVar3;
      }
      uVar3 = uVar3 + 1;
      iVar1 = iVar1 + 0x50;
      piVar4 = piVar4 + 7;
    } while (uVar3 < *(uint *)(param_1 + 0x270));
  }
  return 0;
}

