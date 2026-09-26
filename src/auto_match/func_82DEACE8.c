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
extern int fn_82CEA280();


int fn_82DEACE8(int param_1,int param_2,undefined1 *param_3,int *param_4,undefined1 *param_5)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  
  uVar4 = *(byte *)(param_2 + 0xf) >> 2 & 1;
  iVar1 = *(int *)(*(int *)((uVar4 + 0x16) * 4 + param_1) + 0x98);
  *param_5 = *(undefined1 *)(param_2 + 0xe);
  if (iVar1 != 0) {
    iVar2 = *(int *)((*(byte *)(*(int *)(param_1 + 0x3c) + 8) * uVar4 + 5) * 4 + param_2);
    *param_4 = iVar2;
    if ((iVar2 != -1) && (cVar3 = fn_82CEA280(iVar1 + 0x1c,iVar2,0), cVar3 != '\0')) {
      return iVar1;
    }
    if (*(char *)(iVar1 + 0x14) != '\0') {
      *param_3 = 1;
      return iVar1;
    }
  }
  return 0;
}

