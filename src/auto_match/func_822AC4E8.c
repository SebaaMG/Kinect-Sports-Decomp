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
extern unsigned int *auStack_30;
extern int fn_822AC640();
extern int fn_8265CA20();


undefined4 * fn_822AC4E8(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined1 auStack_30 [48];
  
  puVar3 = *(undefined4 **)(param_2 + 4);
  bVar4 = 1;
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      puVar3 = puVar1;
      bVar4 = -(*(uint *)(param_3 + 0xc) < (uint)puVar3[3]) & 1;
      if (bVar4 == 0) {
        puVar1 = (undefined4 *)puVar3[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar3;
      }
    } while (*(char *)((int)puVar1 + 0x15) == '\0');
  }
  if (bVar4 != 0) {
    if (puVar3 == (undefined4 *)**(undefined4 **)(param_2 + 4)) {
      bVar4 = 1;
      goto LAB_822ac56c;
    }
    if (*(char *)((int)puVar3 + 0x15) == '\0') {
      puVar1 = (undefined4 *)*puVar3;
      if (*(char *)((int)puVar1 + 0x15) == '\0') {
        puVar2 = (undefined4 *)puVar1[2];
        puVar3 = puVar1;
        while (puVar1 = puVar2, *(char *)((int)puVar1 + 0x15) == '\0') {
          puVar3 = puVar1;
          puVar2 = (undefined4 *)puVar1[2];
        }
      }
      else {
        puVar1 = (undefined4 *)puVar3[1];
        while ((puVar2 = puVar1, *(char *)((int)puVar2 + 0x15) == '\0' &&
               (puVar3 == (undefined4 *)*puVar2))) {
          puVar3 = puVar2;
          puVar1 = (undefined4 *)puVar2[1];
        }
        if (*(char *)((int)puVar3 + 0x15) == '\0') {
          puVar3 = puVar2;
        }
      }
    }
    else {
      puVar3 = (undefined4 *)puVar3[2];
    }
  }
  if (*(uint *)(param_3 + 0xc) <= (uint)puVar3[3]) {
    fn_8265CA20(param_3);
    *param_1 = puVar3;
    *(undefined1 *)(param_1 + 1) = 0;
    return param_1;
  }
LAB_822ac56c:
  puVar3 = (undefined4 *)fn_822AC640(auStack_30,param_2,bVar4);
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = *puVar3;
  return param_1;
}

