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
extern int fn_82D1EB20();
extern unsigned int lbl_8323B1A0;


void fn_82D1EE70(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 in_r0;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_40 [64];
  
  for (puVar1 = *(undefined4 **)(param_1 + 0x2c); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    puVar2 = (undefined4 *)((uint)(&lbl_8323B1A0 + (int)in_r0) & 0xfffffff0);
    uVar5 = puVar2[1];
    uVar6 = puVar2[2];
    uVar7 = puVar2[3];
    puVar3 = (undefined4 *)((int)puVar1 + (int)in_r0 + 0x20 & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar5;
    puVar3[2] = uVar6;
    puVar3[3] = uVar7;
    cVar4 = fn_82D1EB20(param_1,(ulonglong)(uint)puVar1[2] + 0x10,(ulonglong)(uint)puVar1[3] + 0x10
                         ,(ulonglong)(uint)puVar1[4] + 0x10,auStack_40,1);
    if (cVar4 != '\0') {
      puVar2 = (undefined4 *)((uint)(auStack_40 + (int)in_r0) & 0xfffffff0);
      uVar5 = puVar2[1];
      uVar6 = puVar2[2];
      uVar7 = puVar2[3];
      puVar3 = (undefined4 *)((int)puVar1 + (int)in_r0 + 0x20 & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar5;
      puVar3[2] = uVar6;
      puVar3[3] = uVar7;
    }
  }
  return;
}

