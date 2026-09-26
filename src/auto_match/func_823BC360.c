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
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_82365BD8();
extern int fn_823B97C0();
extern unsigned int iStack_34;


void fn_823BC360(int param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [4];
  int iStack_34;
  uint auStack_30 [6];
  
  uVar1 = *(uint *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = uVar1 + 1;
  puVar3 = *(undefined4 **)(param_1 + 0x24);
  puVar4 = (undefined4 *)(*(undefined4 **)(param_1 + 0x24))[1];
  while (*(char *)((int)puVar4 + 0x19) == '\0') {
    if ((uint)puVar4[3] < uVar1) {
      puVar4 = (undefined4 *)puVar4[2];
    }
    else {
      puVar3 = puVar4;
      puVar4 = (undefined4 *)*puVar4;
    }
  }
  if ((puVar3 == *(undefined4 **)(param_1 + 0x24)) || (uVar1 < (uint)puVar3[3])) {
    auStack_30[2] = 0;
    auStack_30[1] = 0;
    auStack_30[0] = uVar1;
    puVar3 = (undefined4 *)fn_823B97C0(auStack_40,param_1 + 0x20,puVar3,auStack_30);
    puVar3 = (undefined4 *)*puVar3;
    if (auStack_30[2] != 0) {
      fn_822315A0(auStack_30[2]);
    }
  }
  puVar4 = (undefined4 *)fn_82365BD8(auStack_38,param_2);
  uVar2 = puVar4[1];
  puVar4[1] = puVar3[5];
  puVar3[5] = uVar2;
  uVar2 = *puVar4;
  *puVar4 = puVar3[4];
  puVar3[4] = uVar2;
  if (iStack_34 != 0) {
    fn_822315A0();
  }
  return;
}

