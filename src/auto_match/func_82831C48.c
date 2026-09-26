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
extern int fn_82F67CF8();


undefined8 fn_82831C48(int param_1,undefined8 param_2)

{
  int iVar2;
  undefined8 uVar1;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = fn_82F67CF8(*(undefined4 *)(param_1 + 0x3c4),4,*(undefined4 *)(param_1 + 0xa4),
                            param_2);
  if (iVar2 == *(int *)(param_1 + 0xa4)) {
    uVar4 = 0;
    if (*(int *)(param_1 + 0xa4) != 0) {
      iVar2 = *(int *)(param_1 + 0x3c4);
      iVar5 = 0;
      do {
        iVar3 = fn_82F67CF8(*(undefined4 *)(**(int **)(param_1 + 0x3bc) + iVar5),1,
                                  *(undefined4 *)(iVar5 + iVar2),param_2);
        iVar2 = *(int *)(param_1 + 0x3c4);
        if (iVar3 != *(int *)(iVar5 + iVar2)) goto LAB_82831c7c;
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + 4;
      } while (uVar4 < *(uint *)(param_1 + 0xa4));
    }
    uVar1 = 0;
  }
  else {
LAB_82831c7c:
    uVar1 = 1;
  }
  return uVar1;
}

