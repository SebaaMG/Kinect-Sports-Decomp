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
extern int fn_82DFC8F8();
extern int fn_82DFE6F8();


/* WARNING: Removing unreachable block (ram,0x82dfe910) */

void fn_82DFEA48(int param_1,int param_2)

{
  char cVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  fn_82DFC8F8();
  cVar1 = *(char *)(*(int *)(param_1 + 0x1c) + 0x20);
  piVar5 = (int *)fn_82CE5410();
  iVar3 = *piVar5;
  fVar2 = *(float *)(param_2 + 8);
  *piVar5 = (cVar1 * 0x60 + 0x7fU & 0xffffff80) + iVar3;
  iVar4 = **(int **)(param_1 + 0x3c);
  (**(code **)(iVar4 + 0x10))((double)fVar2,*(int **)(param_1 + 0x3c),iVar4,param_1,iVar3);
  fn_82DFE6F8(param_1,param_2,iVar3);
  piVar5 = (int *)fn_82CE5410();
  *piVar5 = iVar3;
  fn_82CE5410();
  return;
}

