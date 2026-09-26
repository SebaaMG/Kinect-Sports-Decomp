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
extern unsigned int *auStack_2c;
extern int fn_82248B90();
extern int fn_82511CB0();
extern int fn_825120A0();


longlong fn_82513F78(int param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puStack_30;
  undefined1 auStack_2c [44];
  
  puVar5 = *(undefined4 **)(param_1 + 4);
  puVar4 = puVar5;
  if (*(char *)((int)puVar5[1] + 0x19) == '\0') {
    puVar2 = (undefined4 *)puVar5[1];
    do {
      if ((uint)puVar2[3] < *param_2) {
        puVar1 = (undefined4 *)puVar2[2];
      }
      else {
        if ((*(char *)((int)puVar4 + 0x19) != '\0') && (*param_2 < (uint)puVar2[3])) {
          puVar4 = puVar2;
        }
        puVar1 = (undefined4 *)*puVar2;
        puVar5 = puVar2;
      }
      puVar2 = puVar1;
    } while (*(char *)((int)puVar1 + 0x19) == '\0');
  }
  if (*(char *)((int)puVar4 + 0x19) == '\0') {
    puVar2 = (undefined4 *)*puVar4;
  }
  else {
    puVar2 = *(undefined4 **)(*(int *)(param_1 + 4) + 4);
  }
  if (*(char *)((int)puVar2 + 0x19) == '\0') {
    do {
      if (*param_2 < (uint)puVar2[3]) {
        puVar1 = (undefined4 *)*puVar2;
        puVar4 = puVar2;
      }
      else {
        puVar1 = (undefined4 *)puVar2[2];
      }
      puVar2 = puVar1;
    } while (*(char *)((int)puVar1 + 0x19) == '\0');
  }
  lVar3 = 0;
  puStack_30 = puVar5;
  while (puStack_30 != puVar4) {
    lVar3 = lVar3 + 1;
    fn_82248B90(&puStack_30);
  }
  puStack_30 = puVar5;
  if ((puVar5 == (undefined4 *)**(undefined4 **)(param_1 + 4)) &&
     (puVar4 == *(undefined4 **)(param_1 + 4))) {
    fn_825120A0(param_1);
  }
  else {
    while (puVar5 = puStack_30, puStack_30 != puVar4) {
      fn_82248B90(&puStack_30);
      fn_82511CB0(auStack_2c,param_1,puVar5);
    }
  }
  return lVar3;
}

