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
extern int fn_82CE6310();
extern int fn_82DFC8F8();
extern int fn_82DFE6F8();
extern unsigned int iStack_44;
extern unsigned int iStack_50;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;


void fn_82DFF200(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  int iStack_50;
  uint uStack_4c;
  uint uStack_48;
  int iStack_44;
  
  iStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0x80000000;
  piVar3 = (int *)fn_82CE5410();
  iStack_50 = *piVar3;
  *piVar3 = iStack_50 + 0x600;
  uVar6 = (ulonglong)*(uint *)(param_1 + 0xc);
  uStack_48 = 0x80000010;
  iStack_44 = iStack_50;
  if (0 < (int)*(uint *)(param_1 + 0xc)) {
    iVar5 = 0;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 8) + iVar5);
      bVar1 = *(byte *)(*(int *)(iVar2 + 0x1c) + 0x20);
      iVar4 = fn_82CE5410();
      if ((uStack_48 & 0x3fffffff) < (uint)bVar1) {
        uVar7 = (uStack_48 & 0x3fffffff) << 1;
        if (uVar7 <= bVar1) {
          uVar7 = (uint)bVar1;
        }
        fn_82CE6310(*(undefined4 *)(iVar4 + 0x10),&iStack_50,uVar7,0x60);
      }
      uStack_4c = (uint)bVar1;
      fn_82DFC8F8(iVar2);
      (**(code **)(**(int **)(iVar2 + 0x3c) + 0x10))((double)*(float *)(param_2 + 8));
      fn_82DFE6F8(iVar2,param_2,iStack_50);
      uVar6 = uVar6 - 1;
      iVar5 = iVar5 + 4;
    } while (uVar6 != 0);
    if (iStack_44 != iStack_50) goto LAB_82dff304;
  }
  uStack_4c = 0;
LAB_82dff304:
  iVar5 = iStack_44;
  piVar3 = (int *)fn_82CE5410();
  *piVar3 = iVar5;
  iVar5 = fn_82CE5410();
  uStack_4c = 0;
  if ((uStack_48 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar5 + 0x10) + 0x10))
              (*(int **)(iVar5 + 0x10),iStack_50,uStack_48 & 0x3fffffff,0x60);
  }
  return;
}

