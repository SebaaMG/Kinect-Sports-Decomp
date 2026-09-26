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
extern int fn_8265D5A8();
extern int fn_82F92000();
extern int fn_82F92208();
extern int fn_82F953A8();
extern int fn_82F953B8();
extern unsigned int iStack0000001c;
extern unsigned int uStack00000014;


void fn_82F95AD0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uStack00000014;
  int iStack0000001c;
  
  uStack00000014 = param_1;
  iStack0000001c = param_2;
  puVar2 = (undefined4 *)fn_8265D5A8(param_2);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)fn_82F953B8(uVar1);
  puVar3 = (undefined4 *)fn_8265D5A8(iStack0000001c);
  *puVar3 = *puVar2;
  puVar2 = (undefined4 *)fn_82F953B8(uVar1);
  pcVar4 = (char *)fn_82F953A8(*puVar2);
  if (*pcVar4 == '\0') {
    puVar2 = (undefined4 *)fn_82F953B8(uVar1);
    piVar5 = (int *)fn_82F92208(*puVar2);
    *piVar5 = iStack0000001c;
  }
  puVar2 = (undefined4 *)fn_82F92208(iStack0000001c);
  puVar3 = (undefined4 *)fn_82F92208(uVar1);
  *puVar3 = *puVar2;
  piVar5 = (int *)fn_82F92000(uStack00000014);
  if (iStack0000001c == *piVar5) {
    puVar2 = (undefined4 *)fn_82F92000(uStack00000014);
    *puVar2 = uVar1;
  }
  else {
    puVar2 = (undefined4 *)fn_82F92208(iStack0000001c);
    piVar5 = (int *)fn_82F953B8(*puVar2);
    if (iStack0000001c == *piVar5) {
      puVar2 = (undefined4 *)fn_82F92208(iStack0000001c);
      puVar2 = (undefined4 *)fn_82F953B8(*puVar2);
      *puVar2 = uVar1;
    }
    else {
      puVar2 = (undefined4 *)fn_82F92208(iStack0000001c);
      puVar2 = (undefined4 *)fn_8265D5A8(*puVar2);
      *puVar2 = uVar1;
    }
  }
  piVar5 = (int *)fn_82F953B8(uVar1);
  *piVar5 = iStack0000001c;
  puVar2 = (undefined4 *)fn_82F92208(iStack0000001c);
  *puVar2 = uVar1;
  return;
}

