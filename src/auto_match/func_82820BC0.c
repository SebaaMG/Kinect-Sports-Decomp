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
extern int fn_82815268();
extern int fn_82820A80();
extern int (*lbl_8320A5D0)();


undefined8 fn_82820BC0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_3 != 0) {
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x8000;
  }
  if (*(int *)(param_2 + 0xc) != 0) {
    uVar3 = fn_82815268(param_1,param_2,*(undefined4 *)(param_2 + 0x14));
    return uVar3;
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  iVar2 = *(int *)(param_2 + 0x1c);
  *(uint *)(param_2 + 0x10) = uVar1 | 0x10000;
  if (*(char *)(iVar2 + 0x3a) != '\0') {
    if (*(uint *)(iVar2 + 0x28) < *(uint *)(iVar2 + 0x24)) {
      if ((uVar1 & 2) == 0) {
        if (lbl_8320A5D0 != (code *)0x0) {
          uVar3 = (*lbl_8320A5D0)(*(undefined4 *)(param_2 + 0x18),
                                  (*(uint *)(iVar2 + 0x24) - *(uint *)(iVar2 + 0x28)) + iVar2 + 0x7b
                                 );
          goto LAB_82820ca4;
        }
      }
      else if (*(code **)(param_1 + 0xc) != (code *)0x0) {
        (**(code **)(param_1 + 0xc))(*(undefined4 *)(param_2 + 0x18));
        return 0;
      }
    }
  }
  uVar3 = 0;
LAB_82820ca4:
  uVar3 = fn_82820A80(param_1,param_2,uVar3);
  return uVar3;
}

