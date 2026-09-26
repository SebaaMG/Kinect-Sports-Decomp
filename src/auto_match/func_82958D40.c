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


int fn_82958D40(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int aiStack_10 [4];
  
  iVar2 = 0;
  uVar3 = 0;
  piVar4 = aiStack_10;
  aiStack_10[0] = *(int *)(param_1 + 0xf8);
  aiStack_10[1] = *(undefined4 *)(param_1 + 0xf4);
  aiStack_10[2] = *(undefined4 *)(param_1 + 0xfc);
  do {
    iVar1 = *piVar4;
    if (iVar1 != 0) {
      iVar5 = *(int *)(iVar1 + 0x10);
      iVar2 = iVar1;
      while ((iVar5 != -1 && (iVar5 != param_2))) {
        iVar5 = *(int *)(iVar2 + 0x34);
        iVar2 = iVar2 + 0x24;
      }
      if (iVar5 != -1) {
        return iVar2;
      }
    }
    uVar3 = uVar3 + 1;
    piVar4 = piVar4 + 1;
    if (2 < uVar3) {
      return iVar2;
    }
  } while( true );
}

