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


void fn_82695828(char *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  cVar1 = *param_1;
  if (cVar1 == '\b') {
    puVar2 = *(undefined4 **)(param_1 + 4);
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = puVar2[2] + 1;
      puVar2[2] = uVar3;
      if ((uVar3 & 0x70000000) != 0) {
        puVar2[2] = uVar3 & 0x8fffffff;
        (**(code **)*puVar2)(puVar2,2);
      }
    }
    puVar2 = *(undefined4 **)(param_1 + 8);
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = puVar2[2] + 1;
      puVar2[2] = uVar3;
      if ((uVar3 & 0x70000000) != 0) {
        puVar2[2] = uVar3 & 0x8fffffff;
        (**(code **)*puVar2)(puVar2,2);
      }
    }
    return;
  }
  if (cVar1 == '\x06') {
    puVar2 = *(undefined4 **)(param_1 + 4);
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = puVar2[2] + 1;
      puVar2[2] = uVar3;
      if ((uVar3 & 0x70000000) == 0) {
        return;
      }
      puVar2[2] = uVar3 & 0x8fffffff;
                    /* WARNING: Could not recover jumptable at 0x82695880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,2);
      return;
    }
  }
  if (cVar1 != '\t') {
    return;
  }
  puVar2 = *(undefined4 **)(param_1 + 4);
  uVar3 = puVar2[2] + 1;
  puVar2[2] = uVar3;
  if ((uVar3 & 0x70000000) == 0) {
    return;
  }
  puVar2[2] = uVar3 & 0x8fffffff;
                    /* WARNING: Could not recover jumptable at 0x826958bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar2)(puVar2,2);
  return;
}

