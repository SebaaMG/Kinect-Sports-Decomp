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
extern int fn_8270C7C0();
extern int fn_8270CED8();
extern int fn_82F68CC0();


longlong fn_8270D068(int param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((*(int *)(param_1 + 0x10) == 1) || (cVar1 = fn_8270CED8(param_1,1), cVar1 != '\0')) {
    uVar2 = (ulonglong)*(uint *)(param_1 + 0x14);
    lVar4 = *(uint *)(param_1 + 0x18) - uVar2;
    if ((int)lVar4 < (int)param_3) {
      fn_82F68CC0(param_2,uVar2 + *(uint *)(param_1 + 0xc),lVar4);
      lVar5 = param_3 - lVar4;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
      if (0x1000 < (int)lVar5) {
        uVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x28))
                          (*(int **)(param_1 + 8),lVar4 + param_2,lVar5);
        if (0 < (int)uVar2) {
          *(undefined4 *)(param_1 + 0x18) = 0;
          *(undefined4 *)(param_1 + 0x14) = 0;
          *(longlong *)(param_1 + 0x20) = (longlong)(int)uVar2 + *(longlong *)(param_1 + 0x20);
        }
        return (-(ulonglong)(uVar2 != 0xffffffffffffffff) & uVar2) + lVar4;
      }
      fn_8270C7C0(param_1);
      lVar3 = (ulonglong)*(uint *)(param_1 + 0x18) - (ulonglong)*(uint *)(param_1 + 0x14);
      if ((int)lVar3 < (int)lVar5) {
        lVar5 = lVar3;
      }
      fn_82F68CC0(lVar4 + param_2,
                   (ulonglong)*(uint *)(param_1 + 0x14) + (ulonglong)*(uint *)(param_1 + 0xc),lVar5)
      ;
      param_3 = lVar4 + lVar5;
    }
    else {
      fn_82F68CC0(param_2,*(uint *)(param_1 + 0xc) + uVar2,param_3);
      lVar5 = param_3;
    }
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + (int)lVar5;
  }
  else {
    param_3 = (**(code **)(**(int **)(param_1 + 8) + 0x28))(*(int **)(param_1 + 8),param_2,param_3);
    if (0 < (int)param_3) {
      *(longlong *)(param_1 + 0x20) = (longlong)(int)param_3 + *(longlong *)(param_1 + 0x20);
    }
  }
  return param_3;
}

