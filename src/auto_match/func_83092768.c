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
extern int fn_83090E68();
extern unsigned int iStack_44;
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int uStack_48;


/* WARNING: Removing unreachable block (ram,0x83092828) */

void fn_83092768(int param_1,int *param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iStack_50;
  int iStack_4c;
  uint uStack_48;
  int iStack_44;
  
  iVar5 = 0;
  uVar1 = param_2[1];
  iStack_4c = 0;
  piVar3 = (int *)fn_82CE5410();
  uStack_48 = uVar1 | 0x80000000;
  iVar2 = *piVar3;
  *piVar3 = (uVar1 * 4 + 0x7f & 0xffffff80) + iVar2;
  if (0 < param_2[1]) {
    iVar4 = 0;
    do {
      iVar5 = iVar5 + 1;
      *(int *)(iVar4 + iVar2) =
           *(int *)(*(int *)(*param_2 + iVar4) + 0x14) * 0x10 + *(int *)(param_1 + 0xa0);
      iVar4 = iVar4 + 4;
      iStack_4c = iVar5;
    } while (iVar5 < param_2[1]);
  }
  iStack_50 = iVar2;
  iStack_44 = iVar2;
  fn_83090E68(param_1,&iStack_50,param_3);
  piVar3 = (int *)fn_82CE5410();
  *piVar3 = iVar2;
  fn_82CE5410();
  return;
}

