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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))


void fn_82A3BD80(int param_1,uint param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  char cVar5;
  char cVar6;
  
  cVar6 = *(char *)(param_1 + 0x2eb4) - (char)param_2;
  uVar4 = *(int *)(param_1 + 0x2eb0) << (param_2 & 0x3f);
  *(uint *)(param_1 + 0x2eb0) = uVar4;
  *(char *)(param_1 + 0x2eb4) = cVar6;
  if ('\0' < cVar6) {
    return;
  }
  puVar3 = *(undefined1 **)(param_1 + 0x2b04);
  if (puVar3 < *(undefined1 **)(param_1 + 0x2b08)) {
    cVar6 = *(char *)(param_1 + 0x2eb4);
    uVar1 = puVar3[1];
    uVar2 = *puVar3;
    *(undefined1 **)(param_1 + 0x2b04) = puVar3 + 2;
    cVar5 = cVar6 + '\x10';
    *(char *)(param_1 + 0x2eb4) = cVar5;
    *(uint *)(param_1 + 0x2eb0) = (uint)CONCAT11(uVar1,uVar2) << (-(int)cVar6 & 0x3fU) | uVar4;
    if ('\0' < cVar5) {
      return;
    }
    if (puVar3 + 2 < *(undefined1 **)(param_1 + 0x2b08)) {
      cVar6 = *(char *)(param_1 + 0x2eb4);
      uVar1 = puVar3[3];
      uVar2 = puVar3[2];
      *(undefined1 **)(param_1 + 0x2b04) = puVar3 + 4;
      *(char *)(param_1 + 0x2eb4) = cVar6 + '\x10';
      *(uint *)(param_1 + 0x2eb0) =
           (uint)CONCAT11(uVar1,uVar2) << (-(int)cVar6 & 0x3fU) | *(uint *)(param_1 + 0x2eb0);
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x2eb7) = 1;
  return;
}

