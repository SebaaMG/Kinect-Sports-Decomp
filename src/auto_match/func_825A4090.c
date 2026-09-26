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
extern int fn_8253D5A0();
extern int fn_82CEA280();


undefined8 fn_825A4090(int param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar4;
  undefined8 uVar3;
  int iVar5;
  int iVar6;
  
  iVar4 = fn_82CEA280(param_1 + 0x10,param_3,0xffffffffffffffff);
  if (iVar4 == -1) {
    uVar3 = 0;
  }
  else {
    piVar2 = (int *)(*(int *)(param_1 + 4) + iVar4 * 0x28);
    iVar6 = 0;
    iVar1 = piVar2[2];
    if (-1 < iVar1) {
      iVar5 = 0;
      do {
        if (*(int *)(iVar5 + *piVar2) != -1) break;
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 8;
      } while (iVar6 <= iVar1);
    }
    if (iVar6 <= iVar1) {
      do {
        if (*(int *)(*(int *)(*(int *)(iVar6 * 8 + *piVar2 + 4) * 0x60 +
                              *(int *)(*(int *)(param_1 + 4) + iVar4 * 0x28 + 0x1c) + 0x50) + 8) !=
            0) {
          fn_8253D5A0(param_2 + 0x1f0,param_2);
        }
        iVar1 = piVar2[2];
        iVar6 = iVar6 + 1;
        if (iVar6 <= iVar1) {
          iVar5 = iVar6 * 8;
          do {
            if (*(int *)(iVar5 + *piVar2) != -1) break;
            iVar6 = iVar6 + 1;
            iVar5 = iVar5 + 8;
          } while (iVar6 <= iVar1);
        }
      } while (iVar6 <= iVar1);
    }
    uVar3 = 1;
  }
  return uVar3;
}

