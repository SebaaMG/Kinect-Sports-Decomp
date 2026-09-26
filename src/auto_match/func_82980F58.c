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
extern int fn_8297F280();
extern int fn_82980D00();


undefined8 fn_82980F58(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    fn_82980D00(param_1,0,0,0xffffffff8204df94);
    uVar2 = 0xffffffff80004005;
  }
  else {
    if (((*(int *)(iVar1 + 0x10) == 4) && (*(int *)(iVar1 + 0x20) != 0)) &&
       (*(int *)(*(int *)(iVar1 + 0x20) + 0x10) != 4)) {
      piVar3 = (int *)(iVar1 + 0x18);
      for (iVar1 = *(int *)(iVar1 + 0x18); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
        *(undefined4 *)(*(int *)(iVar1 + 8) + 0x30) = 1;
        uVar2 = fn_8297F280(param_1,*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x20),
                              *(undefined4 *)(*piVar3 + 8));
        if ((int)uVar2 < 0) {
          return uVar2;
        }
        iVar1 = *piVar3;
        piVar3 = (int *)(iVar1 + 0xc);
      }
      *piVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x14) + 0x20) + 0x18);
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x20) + 0x18) =
           *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x18);
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x18) = 0;
    }
    iVar1 = *(int *)(param_1 + 0x14);
    uVar2 = 0;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar1 + 0x20);
    *(undefined4 *)(iVar1 + 0x20) = 0;
  }
  return uVar2;
}

