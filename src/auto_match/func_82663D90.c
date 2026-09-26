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
extern int fn_82297D98();
extern int fn_82663538();
extern int fn_82663848();
extern int fn_82663B70();
extern int fn_82663D38();
extern int fn_82663F58();
extern unsigned int iStack00000024;
extern unsigned int uStack0000001c;
extern unsigned int uStack_1c;


void fn_82663D90(undefined4 *param_1,uint param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar5;
  longlong lVar3;
  undefined4 uVar6;
  undefined8 uVar4;
  undefined4 *puStack00000014;
  uint uStack0000001c;
  int iStack00000024;
  uint uStack_1c;
  
  uStack_1c = param_2 | 7;
  puStack00000014 = param_1;
  uStack0000001c = param_2;
  iStack00000024 = param_3;
  uVar5 = fn_82663D38(param_1);
  puVar1 = puStack00000014;
  if (uVar5 < uStack_1c) {
    uStack_1c = uStack0000001c;
  }
  else if ((ulonglong)uStack_1c / 3 < (ulonglong)(uint)puStack00000014[5] / 2) {
    lVar3 = fn_82663D38(puStack00000014);
    if ((lVar3 - (ulonglong)(uint)puStack00000014[5] / 2 & 0xffffffff) < (ulonglong)(uint)puVar1[5])
    {
      uStack_1c = fn_82663D38(puStack00000014);
    }
    else {
      uStack_1c = puStack00000014[5] + (uint)puStack00000014[5] / 2;
    }
  }
  uVar6 = fn_82663F58(puStack00000014 + 6,(ulonglong)uStack_1c + 1,0);
  iVar2 = iStack00000024;
  if (iStack00000024 != 0) {
    uVar4 = fn_82663B70(puStack00000014);
    fn_82297D98(uVar6,uVar4,iVar2);
  }
  fn_82663538(puStack00000014,1,0);
  *puStack00000014 = uVar6;
  puStack00000014[5] = uStack_1c;
  fn_82663848(puStack00000014,iStack00000024);
  return;
}

