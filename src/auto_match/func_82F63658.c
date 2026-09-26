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
extern unsigned int *auStack_40;
extern int fn_82F63788();
extern int fn_82F68240();
extern int fn_82F70480();


ulonglong fn_82F63658(byte *param_1,undefined4 *param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar2;
  ulonglong uVar1;
  undefined4 *puVar3;
  byte bVar4;
  byte *pbVar5;
  undefined4 auStack_40 [16];
  
  if (param_2 == (undefined4 *)0x0) {
    param_2 = auStack_40;
  }
  iVar2 = fn_82F70480();
  bVar4 = *param_1;
  pbVar5 = param_1;
  while ((*(ushort *)(iVar2 + (uint)bVar4 * 2) & 8) != 0) {
    iVar2 = fn_82F70480();
    pbVar5 = pbVar5 + 1;
    bVar4 = *pbVar5;
  }
  bVar4 = *pbVar5;
  if ((bVar4 == 0x2d) || (bVar4 == 0x2b)) {
    pbVar5 = pbVar5 + 1;
  }
  else {
    bVar4 = 0x2b;
  }
  uVar1 = fn_82F63788(pbVar5,param_2,param_3,param_4);
  if (pbVar5 == (byte *)*param_2) {
    *param_2 = param_1;
  }
  if (((param_1 != (byte *)*param_2) || (uVar1 == 0)) &&
     ((bVar4 != 0x2b || (uVar1 < 0x8000000000000000)))) {
    if (bVar4 != 0x2d) {
      return uVar1;
    }
    if (uVar1 < 0x8000000000000001) {
      return -uVar1;
    }
  }
  puVar3 = (undefined4 *)fn_82F68240();
  *puVar3 = 0x22;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 1;
  }
  uVar1 = 0x8000000000000000;
  if (bVar4 != 0x2d) {
    uVar1 = 0x7fffffffffffffff;
  }
  return uVar1;
}

