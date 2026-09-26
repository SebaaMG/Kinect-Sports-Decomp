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
extern int fn_8265C940();
extern int fn_82F68CC0();


undefined8 fn_828FA798(int param_1,char *param_2)

{
  char cVar1;
  undefined4 *puVar3;
  undefined8 uVar2;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = param_2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = (int)pcVar4 - (int)param_2;
  puVar3 = (undefined4 *)fn_8265C940(iVar5 + 4,0x24810000);
  if (puVar3 == (undefined4 *)0x0) {
    uVar2 = 0xffffffff8007000e;
  }
  else {
    *puVar3 = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 **)(param_1 + 0x10) = puVar3;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + iVar5 + -1;
    fn_82F68CC0(puVar3 + 1,param_2,iVar5);
    uVar2 = 0;
  }
  return uVar2;
}

