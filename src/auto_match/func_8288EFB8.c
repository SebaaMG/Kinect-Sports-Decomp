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
extern unsigned int *auStack_20;
extern int fn_8240D928();
extern int fn_8288DF40();


bool fn_8288EFB8(int param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar3;
  undefined8 uVar2;
  undefined4 *puVar4;
  char cVar5;
  bool bVar6;
  undefined1 auStack_20 [8];
  
  iVar1 = *(int *)(param_1 + 0x44);
  iVar3 = *(int *)(iVar1 + 0x34);
  if ((iVar3 == 0) || (iVar3 = *(int *)(iVar3 + 0x38), iVar3 == 0)) {
    cVar5 = '\0';
  }
  else {
    cVar5 = *(char *)(iVar3 + 0x26);
  }
  if ((cVar5 == '\0') &&
     ((*(int **)(param_2 + 0x20) == (int *)0x0 ||
      (iVar3 = (**(code **)(**(int **)(param_2 + 0x20) + 0xc))(), iVar3 == 0)))) {
    bVar6 = false;
  }
  else {
    uVar2 = fn_8240D928(param_3);
    puVar4 = (undefined4 *)fn_8288DF40(auStack_20,iVar1 + 0x3c,uVar2);
    bVar6 = (1 << (puVar4[1] & 0x3f) & *(uint *)*puVar4) != 0;
  }
  return bVar6;
}

