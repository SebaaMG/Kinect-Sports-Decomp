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
extern int fn_82CAAF00();
extern int fn_82CAAF50();


undefined8 fn_82C7D2D8(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x571c) != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0xea8);
    fn_82CAAF00(*(undefined4 *)(param_1 + 0x3ba4),(int *)(param_1 + 0xea8),0);
    iVar5 = fn_82CAAF50(*(undefined4 *)(param_1 + 0x3ba4),uVar1);
    if (iVar5 != 0) {
      return 0xffffffffffffff9c;
    }
    piVar2 = *(int **)(param_1 + 0xea8);
    iVar5 = *piVar2;
    *(int *)(param_1 + 0xecc) = iVar5;
    iVar3 = piVar2[1];
    *(int *)(param_1 + 0xed0) = iVar3;
    iVar4 = piVar2[2];
    *(int *)(param_1 + 0xed4) = iVar4;
    *(int *)(param_1 + 0xee4) = *(int *)(param_1 + 0xdc) + iVar5;
    *(int *)(param_1 + 0x39e8) = iVar5;
    *(int *)(param_1 + 0x39ec) = iVar3;
    *(int *)(param_1 + 0x39f0) = iVar4;
    *(undefined4 *)(param_1 + 0x571c) = 1;
  }
  return 0;
}

