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
extern int fn_8267BE38();
extern int fn_8268AF70();
extern int fn_82693D88();
extern int fn_82693E40();
extern int fn_82693FE8();
extern int fn_82694448();
extern int fn_82F68CC0();
extern unsigned int uStack_50;
extern unsigned int uStack_54;


undefined4 *
fn_826947E8(int param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  char cVar4;
  undefined4 *puVar3;
  uint uVar5;
  undefined4 *apuStack_60 [2];
  undefined4 *puStack_58;
  uint uStack_54;
  uint uStack_50;
  
  uVar5 = param_3 + param_5;
  puVar1 = (undefined4 *)fn_82693D88(param_1,uVar5);
  if (puVar1 != (undefined4 *)0x0) {
    if (param_3 != 0) {
      fn_82F68CC0(puVar1,param_2,param_3);
    }
    if (param_5 != 0) {
      fn_82F68CC0((int)puVar1 + param_3,param_4,param_5);
    }
    *(undefined1 *)((int)puVar1 + uVar5) = 0;
    puStack_58 = puVar1;
    uVar2 = fn_8268AF70(puVar1,uVar5,0x1505);
    uStack_54 = uVar2 & 0xffffff;
    uStack_50 = uVar5;
    cVar4 = fn_82694448(param_1,&puStack_58,apuStack_60);
    if (cVar4 != '\0') {
      if (uVar5 < 0xc) {
        *puVar1 = *(undefined4 *)(param_1 + 0x10);
        *(undefined4 **)(param_1 + 0x10) = puVar1;
      }
      else {
        fn_8267BE38(puVar1);
      }
      return apuStack_60[0];
    }
    puVar3 = (undefined4 *)fn_82693E40(param_1);
    apuStack_60[0] = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[2] = 0;
      puVar3[4] = uVar5;
      *puVar3 = puVar1;
      puVar3[3] = uVar2 & 0xffffff;
      puVar3[1] = 0;
      fn_82693FE8(param_1,param_1,apuStack_60,puVar3[3]);
      return puVar3;
    }
    if (uVar5 < 0xc) {
      *puVar1 = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 **)(param_1 + 0x10) = puVar1;
    }
    else {
      fn_8267BE38(puVar1);
    }
  }
  return *(undefined4 **)(param_1 + 0x18);
}

