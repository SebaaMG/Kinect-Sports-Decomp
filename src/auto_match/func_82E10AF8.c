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
extern int fn_82CE5410();
extern int fn_82CEAC20();
extern int fn_82CEB3C8();
extern int fn_82CEB868();
extern int fn_82CEDB38();
extern int fn_82CEDE90();
extern int fn_82D000A0();
extern int fn_82D001D8();
extern int fn_82D002F0();
extern int fn_82D00388();
extern int fn_82D003F0();
extern int fn_82D05178();
extern int fn_82D054C0();
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


undefined8 fn_82E10AF8(undefined8 param_1,ulonglong param_2,int *param_3,ulonglong param_4)

{
  undefined8 uVar1;
  uint *puVar3;
  undefined8 uVar2;
  int iVar4;
  char acStack_9f [15];
  undefined1 auStack_90 [16];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint uStack_78;
  
  if ((param_3 == (int *)0x0) || ((param_4 & 0xffffffff) == 0)) {
    uVar1 = 1;
  }
  else {
    if ((param_2 & 0xffffffff) != 0) {
      fn_82CEDE90(param_1,0xffffffff8214a8e8,param_2,param_2);
      fn_82CEDB38(param_1,0xffffffff821bab90);
    }
    fn_82CEDB38(param_1,0xffffffff8214a918);
    fn_82D05178(&uStack_80,0xffffffff82133624);
    fn_82D054C0(&uStack_80,0xffffffff8214b044,0xffffffff82196582,1);
    fn_82D054C0(&uStack_80,0xffffffff821aa634,0xffffffff82196582,1);
    fn_82D054C0(&uStack_80,0xffffffff821c7f2c,0xffffffff82196582,1);
    fn_82CEDE90(param_1,0xffffffff8214a9b4,uStack_80);
    fn_82CEDE90(param_1,0xffffffff8214a9d8,param_4);
    fn_82CEDB38(param_1,0xffffffff821bab90);
    fn_82D00388(auStack_90,0);
    while( true ) {
      iVar4 = *param_3;
      if (iVar4 == 0) break;
      uVar1 = fn_82CEAC20(iVar4);
      uVar1 = fn_82D001D8(auStack_90,uVar1);
      fn_82D002F0(acStack_9f,auStack_90,uVar1);
      if (acStack_9f[0] == '\0') {
        uVar1 = fn_82CEAC20(iVar4);
        fn_82D000A0(auStack_90,uVar1,1);
        puVar3 = (uint *)fn_82CEB3C8(iVar4);
        if ((*puVar3 & 1) == 0) {
          iVar4 = *param_3;
          uVar1 = fn_82CEB868(iVar4,0);
          uVar2 = fn_82CEAC20(iVar4);
          fn_82CEDE90(param_1,0xffffffff8214aa70,uVar2,uVar1);
        }
      }
      param_3 = param_3 + 1;
    }
    fn_82CEDE90(param_1,0xffffffff8214aa4c,uStack_80);
    if ((param_2 & 0xffffffff) != 0) {
      fn_82CEDE90(param_1,0xffffffff8214a904,param_2);
      fn_82CEDB38(param_1,0xffffffff821bab90);
    }
    fn_82D003F0(auStack_90);
    iVar4 = fn_82CE5410();
    uStack_7c = 0;
    if ((uStack_78 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar4 + 0xc) + 0x10))
                (*(int **)(iVar4 + 0xc),uStack_80,uStack_78 & 0x3fffffff,1);
    }
    uVar1 = 0;
  }
  return uVar1;
}

