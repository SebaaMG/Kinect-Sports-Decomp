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
extern int fn_8307FC58();


void fn_82D3DA40(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  short sVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  if (0 < param_2[1]) {
    iVar6 = 0;
    puVar4 = (undefined4 *)(param_1 + 0x4c);
    do {
      iVar5 = iVar5 + 1;
      puVar2 = (undefined4 *)(*param_2 + iVar6);
      iVar6 = iVar6 + 4;
      puVar4 = puVar4 + 1;
      *puVar4 = *puVar2;
    } while (iVar5 < param_2[1]);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  sVar3 = fn_8307FC58(*param_2);
  *(short *)(param_1 + 0x26) = (short)uVar1 - sVar3;
  return;
}

