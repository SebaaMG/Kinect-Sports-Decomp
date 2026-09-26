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
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_82365BD8();
extern unsigned int iStack_3c;


int * fn_8248C888(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 auStack_40 [4];
  int iStack_3c;
  
  iVar1 = *(int *)(param_2 + 4);
  iVar4 = param_3 + 0x20;
  if (iVar4 != iVar1) {
    puVar5 = (undefined4 *)(param_3 + 0x14);
    do {
      puVar5[-4] = puVar5[4];
      puVar5[-3] = puVar5[5];
      puVar5[-2] = puVar5[6];
      puVar3 = (undefined4 *)fn_82365BD8(auStack_40,puVar5 + 7);
      uVar2 = puVar3[1];
      puVar3[1] = *puVar5;
      *puVar5 = uVar2;
      uVar2 = *puVar3;
      *puVar3 = puVar5[-1];
      puVar5[-1] = uVar2;
      if (iStack_3c != 0) {
        fn_822315A0();
      }
      iVar4 = iVar4 + 0x20;
      puVar5[1] = puVar5[9];
      puVar5[2] = puVar5[10];
      puVar5 = puVar5 + 8;
    } while (iVar4 != iVar1);
  }
  puVar5 = *(undefined4 **)(param_2 + 4);
  for (puVar3 = puVar5 + -8; puVar3 != puVar5; puVar3 = puVar3 + 8) {
    (**(code **)*puVar3)(puVar3,0);
  }
  iVar1 = *(int *)(param_2 + 4);
  *param_1 = param_3;
  *(int *)(param_2 + 4) = iVar1 + -0x20;
  return param_1;
}

