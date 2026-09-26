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
extern int fn_82D0B0C0();
extern int fn_82D0B1D8();
extern int fn_82D0D6E8();
extern int fn_82D0D850();
extern int fn_82D201C0();
extern unsigned int uStack_26;
extern unsigned int uStack_27;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


undefined8 fn_82D21590(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  undefined1 auStack_30 [9];
  undefined1 uStack_27;
  undefined1 uStack_26;
  
  puVar1 = *(undefined4 **)(param_1 + 0x7b8);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined4 *)(param_1 + 0x7b8) = 0;
  if (3 < *(int *)(param_1 + 0x18)) {
    fn_82D0B0C0(auStack_30);
    uStack_27 = 0;
    uStack_26 = 1;
    iVar2 = fn_82CE5410();
    iVar2 = (**(code **)(**(int **)(iVar2 + 0x10) + 4))(*(int **)(iVar2 + 0x10),0x14);
    *(undefined2 *)(iVar2 + 4) = 0x14;
    uVar3 = fn_82D0D6E8();
    *(undefined4 *)(param_1 + 0x7b8) = uVar3;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0x80000000;
    fn_82D201C0(param_1,&uStack_40);
    fn_82D0D850(*(undefined4 *)(param_1 + 0x7b8),uStack_40,uStack_3c,auStack_30);
    iVar2 = fn_82D0B1D8(*(undefined4 *)(param_1 + 0x7b8));
    if (iVar2 != 3) {
      puVar1 = *(undefined4 **)(param_1 + 0x7b8);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      *(undefined4 *)(param_1 + 0x7b8) = 0;
      iVar2 = fn_82CE5410();
      uStack_3c = 0;
      if ((uStack_38 & 0x80000000) == 0) {
        (**(code **)(**(int **)(iVar2 + 0x10) + 0x10))
                  (*(int **)(iVar2 + 0x10),uStack_40,uStack_38 & 0x3fffffff,0x10);
      }
      return 0;
    }
    iVar2 = fn_82CE5410();
    uStack_3c = 0;
    if ((uStack_38 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar2 + 0x10) + 0x10))
                (*(int **)(iVar2 + 0x10),uStack_40,uStack_38 & 0x3fffffff,0x10);
    }
  }
  return 1;
}

