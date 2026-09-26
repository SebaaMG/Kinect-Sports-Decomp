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
extern int fn_829301D0();
extern int fn_82F672D8();
extern int fn_82F68CC0();
extern int fn_82F6A4B0();


undefined8 fn_828F4498(int param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = param_3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = (int)pcVar4 - (int)param_3;
  iVar2 = fn_829301D0(param_2,iVar5,1);
  *(int *)(param_1 + 0x50) = iVar2;
  if (iVar2 != 0) {
    iVar2 = fn_829301D0(param_2,iVar5,1);
    *(int *)(param_1 + 0x4c) = iVar2;
    if (iVar2 != 0) {
      fn_82F672D8(*(undefined4 *)(param_1 + 0x50),param_3,iVar5);
      puVar3 = (undefined1 *)fn_82F6A4B0(*(undefined4 *)(param_1 + 0x50),0x5c);
      if (puVar3 != (undefined1 *)0x0) {
        puVar3 = puVar3 + 1;
      }
      *(undefined1 *)(*(int *)(param_1 + 0x50) + iVar5 + -1) = 0;
      fn_82F68CC0(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),iVar5);
      if (puVar3 == (undefined1 *)0x0) {
        return 0;
      }
      *puVar3 = 0;
      return 0;
    }
  }
  return 0xffffffff8007000e;
}

