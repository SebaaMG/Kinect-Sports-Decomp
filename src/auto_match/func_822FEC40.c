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
extern unsigned int *auStack_80;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_822C9D68();
extern int fn_822FED38();
extern int fn_8255FD70();
extern int fn_8265CA20();
extern unsigned int iStack_8c;


undefined4 *
fn_822FEC40(undefined4 *param_1,undefined8 param_2,undefined8 param_3,int param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puStack_90;
  int iStack_8c;
  undefined1 auStack_80 [128];
  
  fn_8255FD70(&puStack_90,*(undefined4 *)(param_4 + 0x24),param_2);
  *param_1 = 0;
  uVar2 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = iStack_8c - (int)puStack_90 >> 2;
  puVar3 = puStack_90;
  if (uVar1 != 0) {
    do {
      fn_82230110(auStack_80,*puVar3);
      fn_822FED38(&puStack_90,param_3,param_4,param_5,auStack_80,param_6,param_7,param_8);
      fn_82230300(auStack_80,1,0);
      fn_822C9D68(param_1,&puStack_90);
      if (iStack_8c != 0) {
        fn_822315A0();
      }
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar2 < uVar1);
  }
  if (puStack_90 != (undefined4 *)0x0) {
    fn_8265CA20(puStack_90);
  }
  return param_1;
}

