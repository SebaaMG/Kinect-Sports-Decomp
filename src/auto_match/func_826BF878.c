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
extern int fn_826824B0();


undefined8 fn_826BF878(int param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = *(uint *)(*(int *)(param_1 + 0x1c) + 4);
    uVar5 = 0;
    if (uVar1 != 0) {
      iVar6 = 0;
      do {
        iVar2 = **(int **)(param_1 + 0x1c);
        iVar3 = *(int *)(iVar2 + iVar6);
        if (iVar3 != 0) {
          *(uint *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1U & 0x8fffffff;
        }
        iVar2 = *(int *)(iVar2 + iVar6);
        if (iVar2 != 0) {
          cVar4 = (**(code **)(*(int *)(iVar2 + 0x10) + 0x48))(iVar2 + 0x10,param_2,param_3,1);
          if (cVar4 != '\0') {
            fn_826824B0(iVar2);
            return 1;
          }
          fn_826824B0(iVar2);
        }
        uVar5 = uVar5 + 1;
        iVar6 = iVar6 + 4;
      } while (uVar5 < uVar1);
    }
  }
  return 0;
}

