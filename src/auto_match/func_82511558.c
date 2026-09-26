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
extern unsigned int fStack_14;
extern unsigned int iStack_18;
extern unsigned int uStack_10;


void fn_82511558(double param_1,int param_2,undefined8 param_3,undefined8 param_4,int param_5,
                  undefined4 param_6)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 **ppuVar3;
  undefined4 *puVar4;
  undefined4 *puStack_20;
  undefined4 *puStack_1c;
  int iStack_18;
  float fStack_14;
  undefined4 uStack_10;
  
  fStack_14 = (float)param_1;
  puVar1 = (undefined4 *)(*(undefined4 **)(param_5 + 4))[1];
  puStack_20 = *(undefined4 **)(param_5 + 4);
  while (puVar4 = puVar1, *(char *)((int)puVar4 + 0x15) == '\0') {
    if ((uint)puVar4[3] < (uint)*(ushort *)(param_2 + 0xc)) {
      puVar1 = (undefined4 *)puVar4[2];
    }
    else {
      puVar1 = (undefined4 *)*puVar4;
      puStack_20 = puVar4;
    }
  }
  puVar1 = *(undefined4 **)(param_5 + 4);
  if ((puStack_20 == puVar1) || ((uint)*(ushort *)(param_2 + 0xc) < (uint)puStack_20[3])) {
    ppuVar3 = &puStack_1c;
    puStack_1c = puVar1;
  }
  else {
    ppuVar3 = &puStack_20;
  }
  if (*ppuVar3 != puVar1) {
    piVar2 = (int *)(*ppuVar3)[4];
    iStack_18 = param_2;
    uStack_10 = param_6;
    (**(code **)(*piVar2 + 4))(piVar2,&iStack_18);
  }
  return;
}

