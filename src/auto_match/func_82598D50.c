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


undefined8 fn_82598D50(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x8d0);
  *param_2 = 0;
  uVar3 = 1;
  *param_3 = 0;
  if (iVar1 != 0) {
    for (iVar1 = *(int *)(*(int *)(*(ushort **)(param_1 + 0x8cc) + 4) -
                         (uint)**(ushort **)(param_1 + 0x8cc)); iVar1 != 0;
        iVar1 = *(int *)(iVar1 + 4)) {
      iVar2 = (**(code **)(iVar1 + 400))(iVar1);
      if (iVar2 == 0) {
        uVar3 = 0;
        if (*param_2 == 0) {
          *param_2 = iVar1;
        }
        else if (*param_3 == 0) {
          *param_3 = iVar1;
        }
      }
    }
  }
  return uVar3;
}

