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
extern int fn_82D015D8();
extern int fn_82D01D18();


uint fn_82CF9428(int param_1)

{
  uint uVar1;
  undefined8 in_r0;
  int *piVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 0x20c);
  if (*(uint *)(param_1 + 0x210) <= uVar1) {
    trapWord(0x1f,in_r0,0x16);
  }
  *(uint *)(param_1 + 0x20c) = uVar1 + 0x34;
  if (uVar1 != 0) {
    fn_82D01D18(uVar1);
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x208)) {
    piVar2 = (int *)(param_1 + 0x17c);
    do {
      if (*(int *)(*piVar2 + 4) == *(int *)(uVar1 + 4)) {
        fn_82D015D8(uVar1);
        if (uVar1 + 0x34 == *(int *)(param_1 + 0x20c)) {
          *(int *)(param_1 + 0x20c) = *(int *)(param_1 + 0x20c) + -0x34;
        }
        return *(uint *)((iVar3 + 0x5f) * 4 + param_1);
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x208));
  }
  *(uint *)((*(int *)(param_1 + 0x208) + 0x5f) * 4 + param_1) = uVar1;
  *(int *)(param_1 + 0x208) = *(int *)(param_1 + 0x208) + 1;
  return uVar1;
}

