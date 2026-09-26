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
extern int fn_82270B70();
extern int fn_82272CC8();
extern int fn_82273428();


void fn_822709D0(uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *apuStack_30 [12];
  
  iVar1 = fn_82270B70();
  puVar3 = *(undefined4 **)(iVar1 + 0xe8);
  puVar4 = puVar3;
  puVar2 = (undefined4 *)puVar3[1];
  while (*(char *)((int)puVar2 + 0x61) == '\0') {
    if ((uint)puVar2[4] < param_1) {
      puVar2 = (undefined4 *)puVar2[2];
    }
    else {
      if ((*(char *)((int)puVar3 + 0x61) != '\0') && (param_1 < (uint)puVar2[4])) {
        puVar3 = puVar2;
      }
      puVar4 = puVar2;
      puVar2 = (undefined4 *)*puVar2;
    }
  }
  if (*(char *)((int)puVar3 + 0x61) == '\0') {
    puVar2 = (undefined4 *)*puVar3;
  }
  else {
    puVar2 = *(undefined4 **)(*(int *)(iVar1 + 0xe8) + 4);
  }
  while (apuStack_30[0] = puVar4, *(char *)((int)puVar2 + 0x61) == '\0') {
    if (param_1 < (uint)puVar2[4]) {
      puVar3 = puVar2;
      puVar2 = (undefined4 *)*puVar2;
    }
    else {
      puVar2 = (undefined4 *)puVar2[2];
    }
  }
  while (apuStack_30[0] != puVar3) {
    fn_82273428(apuStack_30);
  }
  fn_82272CC8(apuStack_30,iVar1 + 0xe4,puVar4,puVar3);
  return;
}

