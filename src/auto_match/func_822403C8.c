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
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern int fn_82230300();
extern int fn_82230360();
extern int fn_82240378();


undefined8 fn_822403C8(undefined8 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [64];
  
  if ((*(uint *)(param_2 + 0x40) & 2) == 0) {
    uVar1 = **(uint **)(param_2 + 0x24);
    if (uVar1 != 0) {
      uVar5 = (ulonglong)uVar1;
      if ((ulonglong)uVar1 <= (ulonglong)*(uint *)(param_2 + 0x3c)) {
        uVar5 = (ulonglong)*(uint *)(param_2 + 0x3c);
      }
      uVar1 = **(uint **)(param_2 + 0x14);
      fn_82230300(auStack_80,0,0);
      fn_82230360(auStack_80,(ulonglong)uVar1,uVar5 - uVar1);
      fn_82240378(param_1,auStack_80);
      puVar4 = auStack_80;
      goto LAB_822404c8;
    }
  }
  if (((*(uint *)(param_2 + 0x40) & 4) == 0) && (uVar1 = **(uint **)(param_2 + 0x20), uVar1 != 0)) {
    uVar2 = **(uint **)(param_2 + 0x10);
    uVar3 = **(uint **)(param_2 + 0x30);
    fn_82230300(auStack_60,0,0);
    fn_82230360(auStack_60,(ulonglong)uVar2,
                      ((ulonglong)uVar3 - (ulonglong)uVar2) + (ulonglong)uVar1);
    fn_82240378(param_1,auStack_60);
    puVar4 = auStack_60;
  }
  else {
    fn_82230300(auStack_40,0,0);
    fn_82240378(param_1,auStack_40);
    puVar4 = auStack_40;
  }
LAB_822404c8:
  fn_82230300(puVar4,1,0);
  return param_1;
}

