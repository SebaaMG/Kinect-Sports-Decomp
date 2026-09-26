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
extern unsigned int *auStack_30;
extern int fn_82536008();
extern int fn_82536288();
extern int fn_82536358();
extern int fn_82F63CA0();


void fn_8228F3E8(int param_1)

{
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  uint *puVar4;
  uint auStack_30 [12];
  
  for (puVar4 = *(uint **)(param_1 + 0x38); puVar4 != *(uint **)(param_1 + 0x3c);
      puVar4 = puVar4 + 1) {
    auStack_30[0] = *puVar4;
    uVar3 = (ulonglong)auStack_30[0];
    cVar2 = fn_82536358(uVar3);
    if (cVar2 != '\0') {
      fn_82536008(uVar3);
      fn_82536288(auStack_30);
    }
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 != *(int *)(param_1 + 0x3c)) {
    fn_82F63CA0(iVar1,*(int *)(param_1 + 0x3c),0);
    *(int *)(param_1 + 0x3c) = iVar1;
  }
  return;
}

