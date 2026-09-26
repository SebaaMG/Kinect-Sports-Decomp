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
extern unsigned int *auStack_20;
extern int fn_82CE4040();
extern int fn_82CE4118();
extern int fn_82D81078();
extern int fn_82D81240();
extern int fn_82D82E28();
extern int fn_82D8ED60();
extern int fn_82DAE478();


void fn_82D839C8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined1 auStack_20 [8];
  
  piVar4 = (int *)(param_1 + 0x28);
  iVar1 = *(int *)(param_1 + 0x118);
  while (0 < iVar1) {
    fn_82D82E28(param_1,**(undefined4 **)(param_1 + 0x114));
    iVar1 = *(int *)(param_1 + 0x118);
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  while ((0 < iVar1 && (*(int *)(*(int *)*piVar4 + 0x4c) != 0))) {
    fn_82D81240(auStack_20,param_1,**(undefined4 **)(*(int *)*piVar4 + 0x48));
    iVar1 = *(int *)(param_1 + 0x2c);
  }
  iVar1 = *(int *)(param_1 + 0x38);
  while (0 < iVar1) {
    fn_82D81240(auStack_20,param_1,**(undefined4 **)(**(int **)(param_1 + 0x34) + 0x48));
    iVar1 = *(int *)(param_1 + 0x38);
  }
  fn_82CE4040(*(undefined4 *)(param_1 + 0x24));
  fn_82D81240(auStack_20,param_1,*(undefined4 *)(param_1 + 0x24));
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(iVar1 + 0x4c);
  while (0 < iVar2) {
    fn_82D81240(auStack_20,param_1,**(undefined4 **)(iVar1 + 0x48));
    iVar1 = *(int *)(param_1 + 0x20);
    iVar2 = *(int *)(iVar1 + 0x4c);
  }
  fn_82D81078(param_1,*(undefined4 *)(param_1 + 0x24),1);
  fn_82CE4118(*(undefined4 *)(param_1 + 0x24));
  if (*(char *)(param_1 + 200) == '\0') {
    fn_82D8ED60(param_1,*(undefined4 *)(*(int *)(param_1 + 0x2c) * 4 + *piVar4 + -4));
    puVar3 = *(undefined4 **)(*(int *)(param_1 + 0x2c) * 4 + *piVar4 + -4);
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
  }
  fn_82DAE478(param_1);
  return;
}

