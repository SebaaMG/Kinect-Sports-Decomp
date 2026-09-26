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
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82D80820();
extern int fn_82D8D918();
extern int fn_82D9C790();
extern unsigned int iStack_40;
extern unsigned int uStack_8c;


void fn_82D9C220(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int aiStack_a0 [5];
  undefined4 uStack_8c;
  int iStack_40;
  
  if (*param_2 != 0) {
    iVar1 = fn_82D8D918();
    if (iVar1 == 0) {
      iVar1 = fn_82CE5410();
      if (*(uint *)(param_1 + 0x164) == (*(uint *)(param_1 + 0x168) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(undefined4 *)(iVar1 + 0x10),(int *)(param_1 + 0x160),8);
      }
      iVar1 = *(int *)(param_1 + 0x164);
      *(int *)(param_1 + 0x164) = iVar1 + 1;
      puVar3 = (undefined4 *)(iVar1 * 8 + *(int *)(param_1 + 0x160));
      fn_82D9C790(aiStack_a0,*(undefined4 *)(*(int *)(param_1 + 8) + 0x78));
      iStack_40 = aiStack_a0[0] + 0x1c60;
      uStack_8c = 0;
      uVar2 = (**(code **)((uint)*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) * 0x20 +
                                           aiStack_a0[0] + 0x1a0 + *(int *)(*param_2 + 0xc)) * 0x14
                           + aiStack_a0[0] + 0x9a0))(param_1 + 0x10,param_2,aiStack_a0,0);
      *puVar3 = uVar2;
      puVar3[1] = param_2;
      *(undefined1 *)(param_1 + 0x16c) = 1;
      fn_82D80820(aiStack_a0);
    }
  }
  return;
}

