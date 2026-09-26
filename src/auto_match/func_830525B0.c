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
extern int fn_830514A8();
extern int fn_83051D60();


undefined4 fn_830525B0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  
  uVar2 = (uint)*(byte *)(param_1 + 0xa8);
  if (uVar2 < *(uint *)(param_1 + 0xa4)) {
    plVar4 = *(longlong **)(param_1 + 0x9c);
    uVar3 = 0;
    if (uVar2 != 0) {
      do {
        uVar3 = uVar3 + 1;
        plVar4 = *(longlong **)(plVar4 + 2);
      } while (uVar3 < uVar2);
    }
    if (*plVar4 == *(longlong *)(param_1 + 0x80)) {
      *(byte *)(param_1 + 0xa8) = *(byte *)(param_1 + 0xa8) + 1;
      *(ulonglong *)(param_1 + 0x80) = (ulonglong)*(uint *)((int)plVar4 + 0xc) + *plVar4;
      *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) - *(int *)((int)plVar4 + 0xc);
      fn_830514A8();
      *param_2 = *(undefined4 *)((int)plVar4 + 0xc);
      uVar1 = *(undefined4 *)(plVar4 + 1);
    }
    else {
      *(undefined4 *)(param_1 + 0x90) = 0;
      fn_83051D60();
      *param_2 = 0;
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
    *param_2 = 0;
  }
  return uVar1;
}

