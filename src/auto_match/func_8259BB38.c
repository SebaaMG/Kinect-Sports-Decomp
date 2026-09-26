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
extern int fn_8256DBA0();


int * fn_8259BB38(int *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 **ppuVar5;
  undefined4 *puStack_30;
  undefined4 *apuStack_2c [11];
  
  uVar1 = *(uint *)(param_2 + 0x20);
  uVar3 = fn_8256DBA0(param_2,param_3);
  uVar3 = uVar3 & uVar1;
  if (*(uint *)(param_2 + 0x24) <= uVar3) {
    uVar3 = (uVar3 - (uVar1 >> 1)) - 1;
  }
  apuStack_2c[0] = *(undefined4 **)(param_2 + 4);
  puVar2 = *(undefined4 **)(uVar3 * 8 + *(int *)(param_2 + 0x10));
  puStack_30 = puVar2;
  while( true ) {
    puVar4 = apuStack_2c[0];
    if (puVar2 != apuStack_2c[0]) {
      puVar4 = (undefined4 *)**(undefined4 **)(uVar3 * 8 + *(int *)(param_2 + 0x10) + 4);
    }
    if (puStack_30 == puVar4) break;
    if (*param_3 <= (uint)puStack_30[2]) {
      if (*param_3 < (uint)puStack_30[2]) {
        ppuVar5 = apuStack_2c;
      }
      else {
        ppuVar5 = &puStack_30;
      }
      *param_1 = (int)*ppuVar5;
      return param_1;
    }
    puStack_30 = (undefined4 *)*puStack_30;
  }
  *param_1 = (int)apuStack_2c[0];
  return param_1;
}

