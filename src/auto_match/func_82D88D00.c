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
extern int fn_82DAF6D0();
extern int fn_82DAFB58();
extern unsigned int iStack_4c;
extern unsigned int uStack_48;


void fn_82D88D00(undefined8 param_1,int *param_2,int param_3)

{
  int iVar1;
  ushort uVar2;
  int *piVar3;
  int iVar4;
  int *piStack_50;
  int iStack_4c;
  uint uStack_48;
  int aiStack_44 [17];
  
  iVar1 = 0;
  if (*(ushort *)(param_3 + 0x20c) != 0) {
    piVar3 = *(int **)(param_3 + 0x208);
    do {
      if ((int *)*piVar3 == param_2) goto LAB_82d88d4c;
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar1 < (int)(uint)*(ushort *)(param_3 + 0x20c));
  }
  iVar1 = -1;
LAB_82d88d4c:
  uVar2 = *(short *)(param_3 + 0x20c) - 1;
  piStack_50 = aiStack_44;
  *(ushort *)(param_3 + 0x20c) = uVar2;
  *(undefined4 *)(iVar1 * 4 + *(int *)(param_3 + 0x208)) =
       *(undefined4 *)((uint)uVar2 * 4 + *(int *)(param_3 + 0x208));
  *(byte *)(*(int *)(param_3 + 0xcc) + 0x25) =
       *(byte *)(*(int *)(param_3 + 0xcc) + 0x25) & 0x3f | 0x40;
  iStack_4c = 0;
  uStack_48 = 0x80000004;
  (**(code **)(*param_2 + 0x10))(param_2,&piStack_50);
  iVar1 = 0;
  iVar4 = 0;
  piVar3 = piStack_50;
  if (0 < iStack_4c) {
    do {
      if ((*piVar3 != param_3) && (iVar1 = *(int *)(*piVar3 + 0xcc), *(short *)(iVar1 + 0x20) != -1)
         ) break;
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar4 < iStack_4c);
  }
  if (iVar1 != param_2[3]) {
    fn_82DAF6D0(param_2[3],param_2);
    fn_82DAFB58(iVar1,param_2);
  }
  iVar1 = fn_82CE5410();
  iStack_4c = 0;
  if ((uStack_48 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar1 + 0x10) + 0x10))
              (*(int **)(iVar1 + 0x10),piStack_50,uStack_48 & 0x3fffffff,4);
  }
  return;
}

