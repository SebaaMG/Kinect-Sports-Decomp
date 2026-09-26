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
extern unsigned int *auStack_100;
extern int fn_82CE5410();
extern int fn_82CE6768();
extern int fn_82D6B540();
extern unsigned int lbl_8213969C;


undefined4 * fn_82D6AC38(int *param_1,int *param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int aiStack_110 [2];
  undefined1 *puStack_108;
  int *piStack_104;
  undefined1 auStack_100 [256];
  
  iVar2 = fn_82CE5410();
  puVar3 = (undefined4 *)(**(code **)(**(int **)(iVar2 + 0x10) + 4))(*(int **)(iVar2 + 0x10),0x10);
  *(undefined2 *)(puVar3 + 1) = 0x10;
  puVar3[2] = (int)param_4;
  *(undefined2 *)((int)puVar3 + 6) = 1;
  *puVar3 = &lbl_8213969C;
  iVar2 = *param_1;
  iVar5 = param_1[2];
  iVar1 = *(int *)(iVar2 + 0x14);
  fn_82D6B540(auStack_100,iVar5);
  fn_82CE6768(auStack_100,iVar5,iVar2 + 0x30);
  puStack_108 = auStack_100;
  iVar2 = *param_3;
  iVar5 = iVar2 + 0x5a0;
  aiStack_110[1] = 0;
  if (param_3[5] == 0) {
    iVar5 = iVar2 + 0x1a0;
  }
  aiStack_110[0] = iVar1;
  piStack_104 = param_1;
  uVar4 = (**(code **)((uint)*(byte *)(*(int *)(iVar1 + 0xc) * 0x20 + iVar5 +
                                      *(int *)(*param_2 + 0xc)) * 0x14 + iVar2 + 0x9a0))
                    (aiStack_110,param_2,param_3,param_4);
  puVar3[3] = uVar4;
  return puVar3;
}

