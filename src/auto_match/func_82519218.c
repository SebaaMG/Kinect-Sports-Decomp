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
extern int fn_82230300();
extern int fn_82359C18();
extern int fn_82519678();
extern int fn_8265CA20();


undefined4 * fn_82519218(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined4 *puVar5;
  undefined1 auStack_30 [48];
  
  puVar3 = *(undefined4 **)(param_2 + 4);
  bVar4 = 1;
  if (*(char *)((int)puVar3[1] + 0x69) == '\0') {
    puVar5 = (undefined4 *)puVar3[1];
    do {
      puVar3 = puVar5;
      bVar4 = -(*(uint *)(param_3 + 0x10) < (uint)puVar3[4]) & 1;
      if (bVar4 == 0) {
        puVar5 = (undefined4 *)puVar3[2];
      }
      else {
        puVar5 = (undefined4 *)*puVar3;
      }
    } while (*(char *)((int)puVar5 + 0x69) == '\0');
  }
  puVar5 = puVar3;
  if (bVar4 != 0) {
    if (puVar3 == (undefined4 *)**(undefined4 **)(param_2 + 4)) {
      bVar4 = 1;
      goto LAB_8251929c;
    }
    if (*(char *)((int)puVar3 + 0x69) == '\0') {
      puVar5 = (undefined4 *)*puVar3;
      if (*(char *)((int)puVar5 + 0x69) == '\0') {
        puVar2 = (undefined4 *)puVar5[2];
        while (puVar1 = puVar2, *(char *)((int)puVar1 + 0x69) == '\0') {
          puVar5 = puVar1;
          puVar2 = (undefined4 *)puVar1[2];
        }
      }
      else {
        puVar2 = (undefined4 *)puVar3[1];
        puVar5 = puVar3;
        while ((puVar1 = puVar2, *(char *)((int)puVar1 + 0x69) == '\0' &&
               (puVar5 == (undefined4 *)*puVar1))) {
          puVar5 = puVar1;
          puVar2 = (undefined4 *)puVar1[1];
        }
        if (*(char *)((int)puVar5 + 0x69) == '\0') {
          puVar5 = puVar1;
        }
      }
    }
    else {
      puVar5 = (undefined4 *)puVar3[2];
    }
  }
  if (*(uint *)(param_3 + 0x10) <= (uint)puVar5[4]) {
    fn_82359C18(param_3 + 0x50);
    fn_82230300(param_3 + 0x18,1,0);
    fn_8265CA20(param_3);
    *param_1 = puVar5;
    *(undefined1 *)(param_1 + 1) = 0;
    return param_1;
  }
LAB_8251929c:
  puVar3 = (undefined4 *)fn_82519678(auStack_30,param_2,bVar4,puVar3,param_3);
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = *puVar3;
  return param_1;
}

