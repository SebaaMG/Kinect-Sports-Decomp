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
extern int fn_82381BC0();
extern int fn_82594FD0();
extern unsigned int *lbl_83297008;


void fn_82594B58(uint param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *apuStack_20 [2];
  
  puVar4 = (undefined4 *)lbl_83297008[1];
  cVar1 = *(char *)((int)puVar4 + 0x15);
  puVar6 = lbl_83297008;
  puVar5 = lbl_83297008;
  puVar3 = puVar4;
  while (cVar1 == '\0') {
    if ((uint)puVar3[3] < param_1) {
      puVar2 = (undefined4 *)puVar3[2];
    }
    else {
      if ((*(char *)((int)puVar5 + 0x15) != '\0') && (param_1 < (uint)puVar3[3])) {
        puVar5 = puVar3;
      }
      puVar2 = (undefined4 *)*puVar3;
      puVar6 = puVar3;
    }
    puVar3 = puVar2;
    cVar1 = *(char *)((int)puVar2 + 0x15);
  }
  if (*(char *)((int)puVar5 + 0x15) == '\0') {
    puVar4 = (undefined4 *)*puVar5;
  }
  while (apuStack_20[0] = puVar6, *(char *)((int)puVar4 + 0x15) == '\0') {
    if (param_1 < (uint)puVar4[3]) {
      puVar5 = puVar4;
      puVar4 = (undefined4 *)*puVar4;
    }
    else {
      puVar4 = (undefined4 *)puVar4[2];
    }
  }
  while (apuStack_20[0] != puVar5) {
    fn_82381BC0(apuStack_20);
  }
  fn_82594FD0(apuStack_20,puVar6,puVar5);
  return;
}

