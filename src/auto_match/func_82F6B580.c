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
extern int fn_82F63BA0();
extern int fn_82F68240();
extern int fn_82F6AC80();
extern int fn_82F6B67C();
extern int fn_82F6BB98();
extern int fn_82F7C468();
extern int fn_82F82818();
extern unsigned int lbl_831BBF60;
extern unsigned int lbl_8329F620;


void fn_82F6B580(int param_1)

{
  undefined4 *puVar2;
  undefined8 uVar1;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  
  if (param_1 == 0) {
    puVar2 = (undefined4 *)fn_82F68240();
    *puVar2 = 0x16;
    fn_82F63BA0();
  }
  else {
    uVar1 = fn_82F7C468(param_1);
    fn_82F6AC80(param_1);
    fn_82F6BB98(param_1);
    uVar5 = (uint)uVar1;
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffffcf;
    if ((uVar5 == 0xffffffff) || (uVar5 == 0xfffffffe)) {
      puVar4 = &lbl_831BBF60;
    }
    else {
      puVar4 = (undefined *)((&lbl_8329F620)[(int)uVar5 >> 5] + (uVar5 & 0x1f) * 0x48);
    }
    puVar4[4] = puVar4[4] & 0xfd;
    if ((*(uint *)(param_1 + 0xc) & 0x80) != 0) {
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffc;
    }
    iVar3 = fn_82F82818(uVar1,0,0);
    if (iVar3 == -1) {
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x20;
    }
    fn_82F6B67C();
  }
  return;
}

