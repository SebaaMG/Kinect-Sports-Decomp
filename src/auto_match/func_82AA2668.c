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
extern unsigned int *auStack_60;
extern int fn_82AA0568();
extern int fn_82AA2370();


undefined8 fn_82AA2668(undefined8 param_1,undefined8 param_2,int param_3,uint param_4)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  undefined1 auStack_60 [96];
  
  iVar1 = *(int *)(param_3 + 0x10);
  if (iVar1 != 0) {
    if (param_4 < iVar1 + 0x1cU) {
      return 0xffffffff80070057;
    }
    iVar1 = iVar1 + param_3;
    iVar3 = iVar1 + 4;
    uVar2 = (ulonglong)*(uint *)(iVar1 + 0x10);
    if (uVar2 != 0) {
      iVar1 = *(int *)(iVar1 + 0x14) + iVar3;
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        fn_82AA0568(auStack_60,iVar3,iVar1,*(int *)(iVar1 + 0xc) + iVar3);
        fn_82AA2370(param_1,0xffffffff82196582,0xffffffff82196582,0xffffffff82196582,auStack_60,
                      iVar3,iVar1);
        iVar1 = iVar1 + 0x14;
      }
    }
  }
  return 0;
}

