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
extern int fn_82F68B7C();


void fn_826958C8(char *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  cVar1 = *param_1;
  if (cVar1 == '\b') {
    fn_82F68B7C(param_1 + 4);
    return;
  }
  if (cVar1 == '\x06') {
    puVar2 = *(undefined4 **)(param_1 + 4);
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = puVar2[2] - 1;
      puVar2[2] = uVar3;
      if ((uVar3 & 0x70000000) == 0x10000000) {
        return;
      }
      puVar2[2] = uVar3 & 0x8fffffff | 0x10000000;
                    /* WARNING: Could not recover jumptable at 0x8269592c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  if (cVar1 != '\t') {
    return;
  }
  puVar2 = *(undefined4 **)(param_1 + 4);
  uVar3 = puVar2[2] - 1;
  puVar2[2] = uVar3;
  if ((uVar3 & 0x70000000) == 0x10000000) {
    return;
  }
  puVar2[2] = uVar3 & 0x8fffffff | 0x10000000;
                    /* WARNING: Could not recover jumptable at 0x82695974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar2)(puVar2,1);
  return;
}

