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
extern unsigned int *auStack_38;
extern int fn_82E78690();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


ulonglong fn_82E79A00(int param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uStack_40;
  uint uStack_3c;
  uint auStack_38 [14];
  
  iVar5 = param_1 + 0x178;
  lVar2 = fn_82E78690(iVar5,param_2,&uStack_40);
  uVar4 = -(uint)(lVar2 != 0) & uStack_40;
  if (uVar4 == 0) {
    uVar3 = 0;
  }
  else if ((*(int *)(uVar4 + 300) == 0) || (*(char *)(uVar4 + 0x130) != '\0')) {
    uVar3 = (ulonglong)*(uint *)(uVar4 + 0x1b);
  }
  else {
    uVar6 = param_2 + 1;
    uVar3 = (ulonglong)*(uint *)(uVar4 + 0x1b);
    uVar4 = 0;
    bVar1 = (uVar6 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x1e0);
    while ((uVar3 = uVar3 + 1, bVar1 &&
           (lVar2 = fn_82E78690(iVar5,uVar6,&uStack_40),
           *(int *)((-(uint)(lVar2 != 0) & uStack_40) + 300) != 0))) {
      lVar2 = fn_82E78690(iVar5,uVar6,&uStack_3c);
      if ((uint)*(byte *)((-(uint)(lVar2 != 0) & uStack_3c) + 0x130) != uVar4 + 1) {
        return uVar3;
      }
      lVar2 = fn_82E78690(iVar5,uVar6,auStack_38);
      uVar6 = uVar6 + 1;
      uVar4 = uVar4 + 1 & 0xffff;
      bVar1 = (uVar6 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x1e0);
      uVar3 = *(uint *)((-(uint)(lVar2 != 0) & auStack_38[0]) + 0x1b) + uVar3;
    }
  }
  return uVar3;
}

