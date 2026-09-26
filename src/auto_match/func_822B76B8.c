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
extern int fn_8288B760();
extern int fn_828AAF70();


void fn_822B76B8(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  char cVar7;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 != 0) {
    bVar3 = *(int *)(*(int *)(*(int *)(param_2 + 0xd4) + 0x18) + 0xc) == 0;
    if (*(int *)(iVar1 + 0x14) != 0) {
      cVar7 = fn_8288B760();
      if (cVar7 == '\0') {
        iVar5 = (**(code **)(**(int **)(iVar1 + 0x14) + 4))();
        uVar6 = (**(code **)(*(int *)(iVar5 + 0x7d4) + 0x3c))();
        *(uint *)(iVar1 + 0xd4) = uVar6 & 0xff;
        return;
      }
      piVar2 = *(int **)(iVar1 + 0x14);
      cVar7 = fn_8288B760(piVar2);
      if (cVar7 != '\0') {
        lVar4 = (**(code **)(*piVar2 + 8))(piVar2);
        fn_828AAF70(lVar4 + 0x7d4,bVar3);
      }
    }
    *(uint *)(iVar1 + 0xd4) = (uint)bVar3;
  }
  return;
}

