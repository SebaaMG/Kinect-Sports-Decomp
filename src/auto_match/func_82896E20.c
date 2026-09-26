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
extern unsigned int *auStack_3c;
extern unsigned int *auStack_50;
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern int fn_8224ED20();
extern int fn_8224EE50();
extern int fn_8265CA20();
extern int fn_8288C098();
extern int fn_82894B88();
extern int fn_82896BD8();
extern unsigned int uStack_40;


undefined4 * fn_82896E20(int param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 auStack_60 [4];
  undefined4 *puStack_5c;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [4];
  undefined4 *puStack_4c;
  uint uStack_40;
  undefined1 auStack_3c [4];
  undefined4 *puStack_38;
  
  puVar5 = *(undefined4 **)(param_1 + 4);
  if (*(char *)((int)puVar5[1] + 0x21) == '\0') {
    puVar1 = (undefined4 *)puVar5[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar5 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x21) == '\0');
  }
  if ((puVar5 == *(undefined4 **)(param_1 + 4)) || (*param_2 < (uint)puVar5[3])) {
    uVar3 = *param_2;
    fn_8224EE50(auStack_50,auStack_60,auStack_60);
    uStack_40 = uVar3;
    fn_82894B88(auStack_3c,auStack_50);
    iVar4 = fn_8288C098(param_1);
    if ((uint *)(iVar4 + 0xc) != (uint *)0x0) {
      *(uint *)(iVar4 + 0xc) = uStack_40;
      fn_82894B88(iVar4 + 0x10,auStack_3c);
    }
    fn_82896BD8(&puStack_5c,param_1,puVar5,iVar4);
    fn_8224ED20(auStack_58,auStack_3c,*puStack_38);
    fn_8265CA20(puStack_38);
    fn_8224ED20(auStack_58,auStack_50,*puStack_4c);
    fn_8265CA20(puStack_4c);
    puVar5 = puStack_5c;
  }
  return puVar5 + 4;
}

