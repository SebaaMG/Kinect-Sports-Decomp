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
extern int fn_82E0F818();
extern unsigned int iStack_3c;
extern unsigned int iStack_40;
extern unsigned int uStack_38;


undefined8 fn_82E0FBA8(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar2;
  undefined8 uVar1;
  int iVar3;
  int iVar4;
  int iStack_40;
  int iStack_3c;
  uint uStack_38;
  
  iVar3 = *(int *)(param_1 + 4);
  iStack_40 = 0;
  iStack_3c = 0;
  uStack_38 = 0x80000000;
  iVar2 = fn_82CE5410();
  if ((int)(uStack_38 & 0x3fffffff) < iVar3) {
    iVar4 = (uStack_38 & 0x3fffffff) << 1;
    if (iVar4 <= iVar3) {
      iVar4 = iVar3;
    }
    fn_82CE6310(*(undefined4 *)(iVar2 + 0xc),&iStack_40,iVar4,4);
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar4 = 0;
    do {
      *(int *)(iVar4 + iStack_40) = iVar2;
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar2 < *(int *)(param_1 + 4));
  }
  iStack_3c = iVar3;
  uVar1 = fn_82E0F818(param_1,param_2,&iStack_40,param_3);
  iVar3 = fn_82CE5410();
  iStack_3c = 0;
  if ((uStack_38 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar3 + 0xc) + 0x10))
              (*(int **)(iVar3 + 0xc),iStack_40,uStack_38 & 0x3fffffff,4);
  }
  return uVar1;
}

