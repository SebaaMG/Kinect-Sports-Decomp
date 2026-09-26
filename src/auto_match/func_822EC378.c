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
extern unsigned int *auStack_50;
extern int fn_82230218();
extern int fn_82230300();
extern int fn_822EC770();
extern int fn_82F640B0();


undefined8 fn_822EC378(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [80];
  
  if (param_1[4] == 0) {
LAB_822ec42c:
    iVar1 = -1;
  }
  else {
    puVar2 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar2 = (undefined4 *)*param_1;
    }
    puVar2 = (undefined4 *)((int)puVar2 + param_1[4] + -1);
    uVar4 = *(undefined1 *)puVar2;
    while( true ) {
      iVar1 = fn_82F640B0(0xffffffff821ac4b4,uVar4,1);
      if (iVar1 != 0) break;
      puVar3 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar3 = (undefined4 *)*param_1;
      }
      if (puVar2 == puVar3) goto LAB_822ec42c;
      puVar2 = (undefined4 *)((int)puVar2 + -1);
      uVar4 = *(undefined1 *)puVar2;
    }
    puVar3 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar3 = (undefined4 *)*param_1;
    }
    iVar1 = (int)puVar2 - (int)puVar3;
  }
  fn_82230300(auStack_50,0,0);
  fn_82230218(auStack_50,param_1,iVar1 + 1,0xffffffffffffffff);
  uVar5 = fn_822EC770(auStack_50);
  fn_82230300(auStack_50,1,0);
  return uVar5;
}

