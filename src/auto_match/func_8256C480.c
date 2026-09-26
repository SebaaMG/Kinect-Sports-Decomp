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
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern unsigned int *auStack_68;
extern unsigned int *auStack_70;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_8256D528();
extern int fn_8256DCE0();
extern int fn_82599418();
extern int fn_8259A230();
extern int fn_827D59F0();
extern int fn_827D7270();
extern int fn_82A1BB18();
extern unsigned int iStack_54;
extern unsigned int stack0x00000000;
extern unsigned int uStack00000044;


undefined8
fn_8256C480(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,ulonglong param_5
             ,int param_6,undefined8 param_7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uStack00000044;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined4 auStack_60 [2];
  undefined1 auStack_58 [4];
  int iStack_54;
  
  uStack00000044 = (undefined4)param_7;
  puVar1 = (undefined4 *)
           fn_8256DCE0(&stack0x00000000 + -0x58,*(undefined4 *)(param_2 + 0x2c4),
                             &stack0x00000000 + -0x60,&stack0x00000000 + -0x68,
                             &stack0x00000000 + -0x70,param_1,&stack0x00000000 + 0x44);
  uVar4 = 0;
  iVar5 = 0;
  if ((undefined4 *)(&stack0x00000000 + -0x60) != puVar1) {
    iVar5 = puVar1[1];
    puVar1[1] = 0;
    uVar4 = *puVar1;
    *puVar1 = 0;
  }
  if (iStack_54 != 0) {
    fn_822315A0();
  }
  fn_82A1BB18();
  iVar2 = fn_8259A230();
  puVar3 = &stack0x00000000 + -0x60;
  if (iVar2 == 1) {
    fn_82517978(puVar3,uVar4,iVar5,0);
    fn_827D7270(param_2,&stack0x00000000 + -0x60,param_7,param_3,param_4,0);
  }
  else {
    fn_82517978(puVar3,uVar4,iVar5,0);
    fn_827D59F0(param_2,&stack0x00000000 + -0x60,param_7,param_3,param_4,0);
  }
  fn_82599418();
  if ((param_5 & 0xffffffff) != 0) {
    fn_8256D528(param_5,&stack0x00000000 + -0x68);
  }
  if (iVar5 != 0) {
    fn_822315A0(iVar5);
  }
  if (*(int *)(param_6 + 4) != 0) {
    fn_822315A0();
  }
  return 1;
}

