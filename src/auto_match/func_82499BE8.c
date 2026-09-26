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
extern int fn_822B70F0();
extern int fn_822B91F8();
extern int fn_8252CC80();


void fn_82499BE8(int param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  float *pfVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = *(int *)(*(int *)(param_1 + 0xc0) + 0x118);
  *(undefined4 *)(iVar5 + 0x368) = 0;
  *(undefined4 *)(iVar5 + 0x140) = 0;
  if (*(int *)(param_1 + 0xc4) != 0) {
    *(undefined4 *)(*(int *)(*(int *)(*(int *)(param_1 + 0xc0) + 0x14) + 0x8c0) + 0x90) = 1;
    *(undefined4 *)(param_1 + 0xc4) = 0;
  }
  lVar2 = 2;
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 0xc0) + 0x11c);
  piVar4 = puVar1 + 0x24;
  do {
    if (*piVar4 != 0) {
      fn_822B91F8(puVar1,*puVar1,*piVar4,*(undefined2 *)(piVar4 + 1));
      *piVar4 = 0;
      *(undefined2 *)(piVar4 + 1) = 0x5b;
    }
    lVar2 = lVar2 + -1;
    piVar4 = piVar4 + 2;
  } while (lVar2 != 0);
  iVar5 = 0;
  pfVar3 = (float *)(param_1 + 0xc4);
  do {
    pfVar3 = pfVar3 + 1;
    fn_822B70F0((double)*pfVar3,*(undefined4 *)(param_1 + 0xc0));
    fn_8252CC80(*(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x14),*(int *)(param_1 + 0xd0) != 0);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 2);
  return;
}

