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
extern int fn_82FA9208();
extern int fn_82FAB920();
extern int fn_82FAE150();
extern int fn_82FAE168();


undefined4 *
fn_82FAAA98(longlong param_1,undefined4 *param_2,int param_3,int param_4,char param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  puVar2 = (undefined4 *)fn_82FAB920(param_1 + 0x2c);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = *param_2;
    puVar2[1] = param_2[1];
    puVar2[2] = param_2[3] * 0x30;
    if (param_3 == 0) {
      uVar5 = puVar2[5] | 0x80000000;
      puVar2[3] = 0xffffffff;
    }
    else {
      uVar1 = *(undefined4 *)(param_3 + 0x60);
      iVar3 = fn_82FAE150(uVar1);
      iVar4 = fn_82FAE168(uVar1);
      uVar5 = puVar2[5] & 0x7fffffff;
      puVar2[3] = iVar3 + iVar4 + param_4;
    }
    puVar2[5] = uVar5;
    if (param_3 != 0) {
      *(int *)(param_3 + 0x2c) = *(int *)(param_3 + 0x2c) + 1;
    }
    iVar3 = puVar2[4];
    puVar2[4] = param_3;
    if (iVar3 != 0) {
      fn_82FA9208();
    }
    if ((param_5 == '\0') || (iVar3 = 1, param_2[4] == 0)) {
      iVar3 = 0;
    }
    puVar2[5] = iVar3 << 0x1e | puVar2[5] & 0xbfffffff;
  }
  return puVar2;
}

