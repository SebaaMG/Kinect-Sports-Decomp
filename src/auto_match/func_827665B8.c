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
extern int fn_82766450();
extern int fn_827664B0();


void fn_827665B8(int param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint *puVar4;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar2 = fn_82766450(param_1,*(undefined4 *)(param_1 + 4),param_1 + 0x10);
    lVar2 = lVar2 + (ulonglong)*(uint *)(param_1 + 4);
    *(int *)(param_1 + 4) = (int)lVar2;
    lVar2 = fn_82766450(param_1,lVar2,param_1 + 0x14);
    puVar4 = (uint *)(param_1 + 0x1c);
    lVar2 = lVar2 + (ulonglong)*(uint *)(param_1 + 4);
    *(int *)(param_1 + 4) = (int)lVar2;
    iVar3 = fn_827664B0(param_1,lVar2,puVar4);
    iVar3 = iVar3 + *(int *)(param_1 + 4);
    *(undefined1 *)(param_1 + 0x24) = 1;
    *(int *)(param_1 + 4) = iVar3;
    *(int *)(param_1 + 0x20) = iVar3;
    if ((*(uint *)(param_1 + 0x1c) & 1) != 0) {
      uVar1 = *(uint *)(param_1 + 0x1c) >> 1;
      *(uint *)(param_1 + 0x20) = uVar1;
      iVar3 = fn_827664B0(param_1,uVar1,puVar4);
      *(undefined1 *)(param_1 + 0x24) = 0;
      *(int *)(param_1 + 0x20) = iVar3 + *(int *)(param_1 + 0x20);
    }
    *puVar4 = *puVar4 >> 1;
  }
  return;
}

