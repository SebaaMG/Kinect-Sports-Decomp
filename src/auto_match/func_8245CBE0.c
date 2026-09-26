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
extern int fn_8265C9E0();
extern int fn_82E1BFA0();
extern int fn_82E1C280();
extern int fn_82E1C410();
extern int fn_830B4CB0();


void fn_8245CBE0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  puVar3 = *(undefined4 **)(param_1 + 0x6a0);
  uVar4 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
    *(undefined4 *)(param_1 + 0x6a0) = 0;
  }
  if (*(int *)(param_1 + 0x6b4) == 0) {
    iVar1 = fn_8265C9E0(0x54);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = fn_82E1C410();
    }
    *(undefined4 *)(param_1 + 0x6a0) = uVar2;
  }
  else {
    iVar1 = fn_8265C9E0(0x80);
    if (iVar1 != 0) {
      uVar4 = fn_82E1BFA0();
    }
    fn_830B4CB0(uVar4,*(undefined4 *)(param_1 + 0x63c));
    puVar3 = (undefined4 *)(param_1 + 0x640);
    if (0xf < *(uint *)(param_1 + 0x654)) {
      puVar3 = (undefined4 *)*puVar3;
    }
    fn_82E1C280(uVar4,puVar3);
    *(int *)(param_1 + 0x6a0) = (int)uVar4;
  }
  (**(code **)(**(int **)(param_1 + 0x6a0) + 0x14))
            (*(int **)(param_1 + 0x6a0),*(uint *)(param_1 + 0x614) & 0xffff);
  puVar3 = (undefined4 *)(param_1 + 0x5dc);
  if (0xf < *(uint *)(param_1 + 0x5f0)) {
    puVar3 = (undefined4 *)*puVar3;
  }
  (**(code **)(**(int **)(param_1 + 0x6a0) + 0xc))(*(int **)(param_1 + 0x6a0),puVar3);
  return;
}

