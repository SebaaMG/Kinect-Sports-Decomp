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
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82D819D8();
extern int fn_82D84348();
extern int fn_82D8E600();
extern int fn_82DF3B68();
extern int fn_82DF7348();
extern unsigned int uStack_2c;


void fn_82DF3308(int param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  
  if (*(int *)(param_1 + 8) == 0) {
    iVar1 = fn_82CE5410();
    iVar1 = (**(code **)(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),0xe0);
    *(undefined2 *)(iVar1 + 4) = 0xe0;
    uVar2 = fn_82D8E600();
    *(undefined4 *)(param_1 + 8) = uVar2;
  }
  fn_82D819D8(param_2,*(undefined4 *)(param_1 + 8));
  piVar4 = (int *)(param_1 + 0xc);
  fn_82D84348(param_2,piVar4);
  if (param_3 != '\0') {
    auStack_30[0] = 0;
    uStack_2c = 0;
    iVar1 = fn_82CE5410();
    iVar1 = (**(code **)(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),0x50);
    *(undefined2 *)(iVar1 + 4) = 0x50;
    iVar1 = fn_82DF3B68();
    fn_82DF7348(auStack_30,param_2,iVar1);
    *(undefined1 *)(iVar1 + 0x40) = 0;
    iVar3 = fn_82CE5410();
    if (*(uint *)(param_1 + 0x10) == (*(uint *)(param_1 + 0x14) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
      fn_82CE63B0(*(undefined4 *)(iVar3 + 0x10),piVar4,4);
    }
    *(int *)(*(int *)(param_1 + 0x10) * 4 + *piVar4) = iVar1;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  }
  return;
}

