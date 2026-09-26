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
extern unsigned int *auStack_88;
extern unsigned int *auStack_90;
extern unsigned int *auStack_98;
extern unsigned int *auStack_a0;
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_82365BD8();
extern int fn_823FD858();
extern int fn_8265C9E0();
extern unsigned int lbl_821AD588;


undefined4 *
fn_823F6A18(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined4 *puVar6;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar7;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [128];
  
  puVar6 = (undefined4 *)fn_8265C9E0(0x50);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6[1] = 1;
    *puVar6 = &lbl_821AD588;
    puVar6[2] = 1;
    if (puVar6 + 3 != (undefined4 *)0x0) {
      uVar1 = fn_82365BD8(auStack_a0,param_6);
      uVar2 = fn_82365BD8(auStack_98,param_5);
      uVar3 = fn_82365BD8(auStack_90,param_4);
      uVar4 = fn_82365BD8(auStack_88,param_3);
      uVar5 = fn_82365BD8(auStack_80,param_2);
      fn_823FD858(puVar6 + 3,uVar5,uVar4,uVar3,uVar2,uVar1);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  puVar6[5] = 0;
  puVar6[6] = 0x20;
  puVar6[7] = 0x40;
  puVar6[8] = 0x44;
  puVar6[9] = 0x48;
  if (puVar6 != (undefined4 *)0x0) {
    cVar7 = fn_8223AAC0(puVar6);
    if (cVar7 != '\0') {
      if (param_1[1] != 0) {
        fn_822315A0();
      }
      param_1[1] = puVar6;
      *param_1 = puVar6 + 3;
    }
    fn_822315A0(puVar6);
  }
  if (*(int *)(param_2 + 4) != 0) {
    fn_822315A0();
  }
  if (*(int *)(param_3 + 4) != 0) {
    fn_822315A0();
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
  return param_1;
}

