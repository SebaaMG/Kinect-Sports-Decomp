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
extern int fn_82308E08();


undefined8 fn_8230C220(int param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined4 **ppuVar5;
  undefined4 *puStack_10;
  undefined4 *apuStack_c [3];
  
  puStack_10 = *(undefined4 **)(param_1 + 4);
  if (*(char *)((int)puStack_10[1] + 0x49) == '\0') {
    puVar2 = (undefined4 *)puStack_10[1];
    do {
      if (((uint)puVar2[4] < *param_2) ||
         (((uint)puVar2[4] <= *param_2 && ((int)puVar2[5] < (int)param_2[1])))) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        puVar1 = (undefined4 *)puVar2[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar2;
        puStack_10 = puVar2;
      }
      puVar2 = puVar1;
    } while (*(char *)((int)puVar1 + 0x49) == '\0');
  }
  puVar2 = *(undefined4 **)(param_1 + 4);
  if (puStack_10 != puVar2) {
    if ((*param_2 < (uint)puStack_10[4]) ||
       ((*param_2 <= (uint)puStack_10[4] && ((int)param_2[1] < (int)puStack_10[5])))) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (!bVar3) {
      ppuVar5 = &puStack_10;
      goto LAB_8230c2ec;
    }
  }
  apuStack_c[0] = puVar2;
  ppuVar5 = apuStack_c;
LAB_8230c2ec:
  if (*ppuVar5 == puVar2) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_82308E08(*ppuVar5 + 6);
  }
  return uVar4;
}

