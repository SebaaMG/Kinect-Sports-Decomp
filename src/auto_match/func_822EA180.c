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
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_822C9D68();
extern int fn_822EA278();
extern int fn_8232CA90();
extern int fn_82365BD8();
extern int fn_8255FD70();
extern int fn_8265CA20();
extern unsigned int iStack_6c;
extern unsigned int iStack_7c;


undefined4 * fn_822EA180(undefined4 *param_1,int param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined1 auStack_80 [4];
  int iStack_7c;
  undefined4 *puStack_70;
  int iStack_6c;
  undefined1 auStack_60 [96];
  
  fn_8255FD70(&puStack_70,*(undefined4 *)(*(int *)(param_2 + 0x80) + 0x24));
  uVar4 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = iStack_6c - (int)puStack_70 >> 2;
  fn_8232CA90(param_1,uVar1);
  puVar3 = puStack_70;
  if (uVar1 != 0) {
    do {
      fn_82230110(auStack_60,*puVar3);
      uVar2 = fn_82365BD8(&puStack_70,param_4);
      fn_822EA278(auStack_80,param_2,auStack_60,uVar2);
      fn_82230300(auStack_60,1,0);
      fn_822C9D68(param_1,auStack_80);
      if (iStack_7c != 0) {
        fn_822315A0();
      }
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar4 < uVar1);
  }
  if (puStack_70 != (undefined4 *)0x0) {
    fn_8265CA20(puStack_70);
  }
  if (*(int *)(param_4 + 4) != 0) {
    fn_822315A0();
  }
  return param_1;
}

