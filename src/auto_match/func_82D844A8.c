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
extern int fn_82CE5410();
extern int fn_82CFC050();
extern int fn_82D89BD8();
extern int fn_82DA6530();
extern unsigned int iStack_34;
extern unsigned int iStack_38;
extern unsigned int uStack_30;
extern unsigned int uStack_3c;


void fn_82D844A8(int param_1,undefined8 param_2)

{
  int iVar2;
  undefined8 uVar1;
  int iVar3;
  int iVar4;
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  int iStack_38;
  int iStack_34;
  uint uStack_30;
  
  if (*(int *)(param_1 + 0x94) == 0) {
    iStack_38 = 0;
    iStack_34 = 0;
    uStack_30 = 0x80000000;
    (**(code **)(**(int **)(param_1 + 0x58) + 0x44))(*(int **)(param_1 + 0x58),param_2,&iStack_38);
    iVar2 = 0;
    if (0 < iStack_34) {
      iVar4 = 0;
      iVar3 = iStack_38;
      do {
        iVar3 = (int)*(char *)(*(int *)(iVar3 + 4) + 5) + *(int *)(iVar3 + 4);
        if ((*(char *)(iVar3 + 0x18) == '\x01') && (*(char *)(iVar3 + 0x10) + iVar3 != 0)) {
          fn_82D89BD8();
        }
        iVar2 = iVar2 + 1;
        iVar4 = iVar4 + 8;
        iVar3 = iVar4 + iStack_38;
      } while (iVar2 < iStack_34);
    }
    iVar2 = fn_82CE5410();
    iStack_34 = 0;
    if ((uStack_30 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar2 + 0x10) + 0x10))
                (*(int **)(iVar2 + 0x10),iStack_38,uStack_30 & 0x3fffffff,8);
    }
  }
  else {
    auStack_40[0] = 0x20;
    iVar2 = fn_82CE5410();
    uVar1 = (**(code **)(**(int **)(iVar2 + 0x10) + 4))(*(int **)(iVar2 + 0x10),0x20);
    uStack_3c = (undefined4)uVar1;
    fn_82CFC050(uVar1,param_2,0x20);
    fn_82DA6530(*(undefined4 *)(param_1 + 0x88),auStack_40);
  }
  return;
}

