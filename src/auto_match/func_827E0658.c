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
extern int fn_827E0250();


int * fn_827E0658(int *param_1,int param_2,uint *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 **ppuVar4;
  undefined4 *puStack_30;
  undefined4 *apuStack_2c [11];
  
  iVar2 = fn_827E0250(param_2,param_3);
  apuStack_2c[0] = *(undefined4 **)(param_2 + 4);
  puVar1 = *(undefined4 **)(*(int *)(param_2 + 0x44) + iVar2 * 8);
  puStack_30 = puVar1;
  while( true ) {
    puVar3 = apuStack_2c[0];
    if (puVar1 != apuStack_2c[0]) {
      puVar3 = (undefined4 *)**(undefined4 **)(*(int *)(param_2 + 0x44) + iVar2 * 8 + 4);
    }
    if (puStack_30 == puVar3) break;
    if (*param_3 <= (uint)puStack_30[2]) {
      if (*param_3 < (uint)puStack_30[2]) {
        ppuVar4 = apuStack_2c;
      }
      else {
        ppuVar4 = &puStack_30;
      }
      *param_1 = (int)*ppuVar4;
      return param_1;
    }
    puStack_30 = (undefined4 *)*puStack_30;
  }
  *param_1 = (int)apuStack_2c[0];
  return param_1;
}

