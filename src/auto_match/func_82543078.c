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
extern int fn_828116B8();


undefined8 fn_82543078(int param_1,int param_2,uint *param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x34) == 0) {
    if ((*(int *)param_3[1] != -1) && (uVar3 = 0, *param_3 != 0)) {
      iVar4 = 0;
      do {
        iVar1 = fn_828116B8(*(undefined4 *)
                              ((*(int *)(param_1 + 0xabb8) + 2) * 4 + *(int *)(param_2 + 4)),
                             *(undefined4 *)(iVar4 + param_3[1]));
        if (iVar1 == 0) {
          return 0;
        }
        uVar3 = uVar3 + 1;
        iVar4 = iVar4 + 4;
      } while (uVar3 < *param_3);
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    uVar3 = 0;
    if (*param_3 != 0) {
      iVar4 = 0;
      do {
        if (*(int *)(iVar4 + param_3[1]) == *(int *)(param_1 + 0x38)) {
          uVar2 = 1;
        }
        else if ((*(int *)(iVar4 + param_3[1]) != -1) &&
                (iVar1 = fn_828116B8(*(undefined4 *)
                                       ((*(int *)(param_1 + 0xabb8) + 2) * 4 + *(int *)(param_2 + 4)
                                       )), iVar1 == 0)) {
          return 0;
        }
        uVar3 = uVar3 + 1;
        iVar4 = iVar4 + 4;
      } while (uVar3 < *param_3);
    }
  }
  return uVar2;
}

