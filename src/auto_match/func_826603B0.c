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
extern int fn_8225E7A0();
extern int fn_8265D5A8();
extern int fn_82F919C8();
extern int fn_82F92000();
extern int fn_82F953A8();
extern int fn_82F953B8();
extern unsigned int iStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


undefined4 fn_826603B0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar3;
  char *pcVar4;
  undefined8 uVar2;
  char cVar5;
  int iStack00000014;
  undefined4 uStack0000001c;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iStack00000014 = param_1;
  uStack0000001c = param_2;
  puVar3 = (undefined4 *)fn_82F92000(param_1);
  uStack_1c = *puVar3;
  uStack_20 = *(undefined4 *)(iStack00000014 + 4);
  while (pcVar4 = (char *)fn_82F953A8(uStack_1c), uVar1 = uStack0000001c, *pcVar4 == '\0') {
    uVar2 = fn_82F919C8(uStack_1c);
    cVar5 = fn_8225E7A0(iStack00000014,uVar2,uVar1);
    if (cVar5 == '\0') {
      uStack_20 = uStack_1c;
      puVar3 = (undefined4 *)fn_8265D5A8(uStack_1c);
      uStack_1c = *puVar3;
    }
    else {
      puVar3 = (undefined4 *)fn_82F953B8(uStack_1c);
      uStack_1c = *puVar3;
    }
  }
  return uStack_20;
}

