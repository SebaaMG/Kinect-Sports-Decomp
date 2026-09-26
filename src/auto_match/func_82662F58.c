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
extern int fn_826610C8();
extern int fn_82F92208();
extern int fn_82F95398();
extern int fn_82F953A8();
extern int fn_82F953B8();
extern unsigned int iStack00000014;


undefined4 fn_82662F58(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  int iStack00000014;
  
  iStack00000014 = param_1;
  uVar3 = fn_826610C8(param_1 + 0xc,1);
  iVar1 = iStack00000014;
  puVar4 = (undefined4 *)fn_8265D5A8(uVar3);
  iVar2 = iStack00000014;
  *puVar4 = *(undefined4 *)(iVar1 + 4);
  puVar4 = (undefined4 *)fn_82F92208(uVar3);
  iVar1 = iStack00000014;
  *puVar4 = *(undefined4 *)(iVar2 + 4);
  puVar4 = (undefined4 *)fn_82F953B8(uVar3);
  *puVar4 = *(undefined4 *)(iVar1 + 4);
  puVar5 = (undefined1 *)fn_82F95398(uVar3);
  *puVar5 = 0;
  puVar5 = (undefined1 *)fn_82F953A8(uVar3);
  *puVar5 = 0;
  return uVar3;
}

