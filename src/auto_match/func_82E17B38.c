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
extern int fn_82E17878();
extern unsigned int iStack_3c;
extern unsigned int iStack_40;
extern unsigned int uStack_38;


undefined8 fn_82E17B38(undefined8 param_1,undefined8 param_2,int *param_3)

{
  int *piVar1;
  int iVar3;
  int iVar4;
  undefined8 uVar2;
  int iVar5;
  int iStack_40;
  int iStack_3c;
  uint uStack_38;
  
  iStack_40 = 0;
  iStack_3c = 0;
  uStack_38 = 0x80000000;
  iVar3 = fn_82E17878(param_1,param_2,&iStack_40);
  if ((iVar3 == 0) &&
     (iVar3 = (**(code **)(*param_3 + 4))(param_3,param_1,param_2,&iStack_40), iVar3 == 0)) {
    iVar3 = 0;
    if (0 < iStack_3c) {
      iVar5 = 0;
      do {
        piVar1 = *(int **)(iVar5 + iStack_40);
        if ((*piVar1 != 0) &&
           (iVar4 = fn_82E17B38(*piVar1,((undefined4 *)(iVar5 + iStack_40))[1],param_3),
           iVar4 == 1)) goto LAB_82e17c3c;
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + 8;
      } while (iVar3 < iStack_3c);
    }
    iVar3 = fn_82CE5410();
    iStack_3c = 0;
    if ((uStack_38 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar3 + 0xc) + 0x10))
                (*(int **)(iVar3 + 0xc),iStack_40,uStack_38 & 0x3fffffff,8);
    }
    uVar2 = 0;
  }
  else {
LAB_82e17c3c:
    iVar3 = fn_82CE5410();
    iStack_3c = 0;
    if ((uStack_38 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar3 + 0xc) + 0x10))
                (*(int **)(iVar3 + 0xc),iStack_40,uStack_38 & 0x3fffffff,8);
    }
    uVar2 = 1;
  }
  return uVar2;
}

