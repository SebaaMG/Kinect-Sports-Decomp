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
extern int fn_82681F88();


void fn_82695980(char *param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  cVar1 = *param_1;
  if (cVar1 == '\b') {
    if (*(int *)(param_1 + 4) != 0) {
      fn_82681F88();
    }
    if (*(int *)(param_1 + 8) != 0) {
      fn_82681F88();
    }
    return;
  }
  if ((cVar1 != '\x06') || (puVar3 = *(undefined4 **)(param_1 + 4), puVar3 == (undefined4 *)0x0)) {
    if (cVar1 != '\t') {
      return;
    }
    puVar3 = *(undefined4 **)(param_1 + 4);
  }
  uVar2 = puVar3[2];
  if ((uVar2 & 0x70000000) == 0x10000000) {
    if ((uVar2 & 0xfffffff) == 0) {
      puVar3[2] = uVar2 & 0x8fffffff | 0x20000000;
                    /* WARNING: Could not recover jumptable at 0x82681fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,4);
      return;
    }
    puVar3[2] = uVar2 & 0x8fffffff;
                    /* WARNING: Could not recover jumptable at 0x82681fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,2);
    return;
  }
  return;
}

