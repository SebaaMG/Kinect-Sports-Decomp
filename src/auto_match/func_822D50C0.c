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
extern unsigned int *auStack_90;
extern unsigned int *auStack_a8;
extern unsigned int *auStack_b0;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_822D51D0();
extern int fn_82365BD8();
extern int fn_8255FD70();
extern int fn_8265CA20();
extern unsigned int iStack_9c;
extern unsigned int iStack_a0;


void fn_822D50C0(undefined8 param_1,int param_2,undefined8 param_3,int param_4,int param_5,
                  int param_6)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  int iStack_a0;
  int iStack_9c;
  undefined1 auStack_90 [144];
  
  fn_8255FD70(&iStack_a0,*(undefined4 *)(param_2 + 0x24),0xffffffff821ad78c);
  uVar6 = 0;
  uVar1 = iStack_9c - iStack_a0 >> 2;
  if (uVar1 != 0) {
    puVar5 = (undefined4 *)(iStack_a0 + -4);
    do {
      puVar5 = puVar5 + 1;
      fn_82230110(auStack_90,*puVar5);
      uVar2 = fn_82365BD8(auStack_b0,param_6);
      uVar3 = fn_82365BD8(auStack_a8,param_5);
      uVar4 = fn_82365BD8(&iStack_a0,param_4);
      fn_822D51D0(param_1,param_2,param_3,auStack_90,uVar4,uVar3,uVar2);
      fn_82230300(auStack_90,1,0);
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  if (iStack_a0 != 0) {
    fn_8265CA20(iStack_a0);
  }
  if (*(int *)(param_4 + 4) != 0) {
    fn_822315A0();
  }
  if (*(int *)(param_5 + 4) != 0) {
    fn_822315A0();
  }
  if (*(int *)(param_6 + 4) != 0) {
    fn_822315A0();
  }
  return;
}

