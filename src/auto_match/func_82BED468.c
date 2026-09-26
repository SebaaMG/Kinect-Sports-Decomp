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
extern unsigned int *auStack_40;
extern int fn_82BECFD8();
extern int fn_82BF7890();


undefined8 fn_82BED468(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 auStack_40 [16];
  
  if ((((*(int *)(param_1 + 0x50) != 2) && (param_2 != 0)) &&
      (piVar1 = *(int **)(param_2 + 8), piVar1 != (int *)0x0)) &&
     (((uVar2 = *(uint *)(param_2 + 0xc), uVar2 != 0 && (3 < uVar2)) && (*piVar1 == 0)))) {
    piVar5 = piVar1 + 1;
    do {
      if ((int *)(uVar2 + (int)piVar1) <= piVar5) {
        *(undefined4 *)(param_1 + 0x50) = 1;
        return 1;
      }
      iVar4 = *piVar5;
      puVar3 = (undefined4 *)fn_82BECFD8(param_1,0,piVar5 + 1,iVar4);
      if (puVar3 == (undefined4 *)0x0) {
        return 0;
      }
      piVar5 = (int *)(iVar4 + (int)(piVar5 + 1));
      if ((int *)puVar3[3] == (int *)0x0) break;
      auStack_40[0] = (**(code **)(*(int *)puVar3[3] + 4))();
      iVar4 = fn_82BF7890(param_1 + 0xc,auStack_40,puVar3);
    } while (iVar4 != 0);
    (**(code **)*puVar3)(puVar3,1);
  }
  return 0;
}

