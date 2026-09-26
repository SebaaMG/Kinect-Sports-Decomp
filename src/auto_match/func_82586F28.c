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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82F65C10();
extern unsigned int uStack_28;


int * fn_82586F28(int *param_1,int param_2,uint *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 **ppuVar6;
  undefined4 *apuStack_30 [2];
  undefined8 uStack_28;
  
  uStack_28 = fn_82F65C10(*param_3 & 0x7fffffff ^ 0x5eadbeef,0x1f31d);
  uVar5 = (uStack_28 & 0xffffffff) * 0x41a7 + (uStack_28 >> 0x20) * -0xb14;
  if ((longlong)uVar5 < 0) {
    uVar5 = uVar5 - 0x80000001;
  }
  uVar5 = *(uint *)(param_2 + 0x20) & uVar5;
  if (*(uint *)(param_2 + 0x24) <= uVar5) {
    uVar5 = (uVar5 - (*(uint *)(param_2 + 0x20) >> 1)) - 1;
  }
  iVar3 = (int)((uVar5 & 0xffffffff) << 3);
  puVar1 = *(undefined4 **)(param_2 + 4);
  puVar2 = *(undefined4 **)(iVar3 + *(int *)(param_2 + 0x10));
  apuStack_30[0] = puVar2;
  while( true ) {
    puVar4 = puVar1;
    if (puVar2 != puVar1) {
      puVar4 = (undefined4 *)**(undefined4 **)(iVar3 + *(int *)(param_2 + 0x10) + 4);
    }
    if (apuStack_30[0] == puVar4) break;
    if (*param_3 <= (uint)apuStack_30[0][2]) {
      if (*param_3 < (uint)apuStack_30[0][2]) {
        uStack_28 = CONCAT44(puVar1,(undefined4)uStack_28);
        ppuVar6 = (undefined4 **)&uStack_28;
      }
      else {
        ppuVar6 = apuStack_30;
      }
      *param_1 = (int)*ppuVar6;
      return param_1;
    }
    apuStack_30[0] = (undefined4 *)*apuStack_30[0];
  }
  *param_1 = (int)puVar1;
  return param_1;
}

