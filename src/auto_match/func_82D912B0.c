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
extern int fn_830885D0();
extern unsigned int iStack0000001c;
extern unsigned int iStack_34;
extern unsigned int iStack_40;
extern unsigned int stack0x0000001c;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;


void fn_82D912B0(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iStack0000001c;
  int iStack_40;
  uint uStack_3c;
  uint uStack_38;
  int iStack_34;
  
  if (*(int *)(param_2 + 0x10) != 0) {
    iStack0000001c = param_2;
    (**(code **)(**(int **)(param_1 + 8) + 0x20))
              (*(int **)(param_1 + 8),&stack0x0000001c,1,param_1,1);
    iStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0x80000000;
    uVar1 = *(uint *)(param_1 + 0x338);
    piVar2 = (int *)fn_82CE5410();
    uStack_38 = uVar1 | 0x80000000;
    iStack_40 = *piVar2;
    *piVar2 = (uVar1 * 8 + 0x7f & 0xffffff80) + iStack_40;
    iStack_34 = iStack_40;
    (**(code **)(**(int **)(param_1 + 0x58) + 0x1c))
              (*(int **)(param_1 + 0x58),param_2 + 0x24,&iStack_40);
    if (0 < (int)uStack_3c) {
      fn_830885D0(*(undefined4 *)(param_1 + 100),iStack_40);
    }
    iVar3 = iStack_34;
    uStack_3c = -(uint)(iStack_40 != iStack_34) & uStack_3c;
    piVar2 = (int *)fn_82CE5410();
    *piVar2 = iVar3;
    iVar3 = fn_82CE5410();
    uStack_3c = 0;
    if ((uStack_38 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar3 + 0x10) + 0x10))
                (*(int **)(iVar3 + 0x10),iStack_40,uStack_38 & 0x3fffffff,8);
    }
  }
  return;
}

