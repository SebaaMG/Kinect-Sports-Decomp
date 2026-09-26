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
extern int fn_8265D5A8();
extern int fn_82661068();
extern int fn_826610C8();
extern int fn_82F92208();
extern int fn_82F93778();
extern int fn_82F95398();
extern int fn_82F953A8();
extern int fn_82F953B8();
extern unsigned int iStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;


int fn_82660468(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  int iStack00000014;
  undefined4 uStack0000001c;
  undefined4 uStack00000024;
  undefined1 auStack_20 [4];
  undefined1 *puStack_1c;
  
  puStack_1c = auStack_20;
  iStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  uVar3 = fn_82F93778(puStack_1c,param_3);
  fn_82661068(iStack00000014,uStack0000001c,uVar3);
  *(undefined4 *)(iStack00000014 + 8) = 0;
  uVar4 = fn_826610C8(iStack00000014 + 0xc,1);
  iVar1 = iStack00000014;
  *(undefined4 *)(iStack00000014 + 4) = uVar4;
  puVar5 = (undefined4 *)fn_8265D5A8(*(undefined4 *)(iStack00000014 + 4));
  iVar2 = iStack00000014;
  *puVar5 = *(undefined4 *)(iVar1 + 4);
  puVar5 = (undefined4 *)fn_82F92208(*(undefined4 *)(iStack00000014 + 4));
  iVar1 = iStack00000014;
  *puVar5 = *(undefined4 *)(iVar2 + 4);
  puVar5 = (undefined4 *)fn_82F953B8(*(undefined4 *)(iStack00000014 + 4));
  *puVar5 = *(undefined4 *)(iVar1 + 4);
  puVar6 = (undefined1 *)fn_82F95398(*(undefined4 *)(iStack00000014 + 4));
  *puVar6 = 1;
  puVar6 = (undefined1 *)fn_82F953A8(*(undefined4 *)(iStack00000014 + 4));
  *puVar6 = 1;
  return iStack00000014;
}

