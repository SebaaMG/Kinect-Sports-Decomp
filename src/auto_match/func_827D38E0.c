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
extern int fn_82F68CC0();


undefined8 fn_827D38E0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  if ((((param_1 != 0) && (param_2 != 0)) && (iVar1 = *(int *)(param_2 + 0x1c), iVar1 != 0)) &&
     ((*(code **)(param_2 + 0x20) != (code *)0x0 && (*(int *)(param_2 + 0x24) != 0)))) {
    iVar3 = (**(code **)(param_2 + 0x20))(*(undefined4 *)(param_2 + 0x28),1,0x2530);
    if (iVar3 != 0) {
      uVar4 = 0;
      if ((*(int *)(iVar1 + 0x34) == 0) ||
         (uVar4 = (**(code **)(param_2 + 0x20))
                            (*(undefined4 *)(param_2 + 0x28),1 << (*(uint *)(iVar1 + 0x24) & 0x3f),1
                            ), uVar4 != 0)) {
        fn_82F68CC0(param_1,param_2,0x38);
        fn_82F68CC0(iVar3,iVar1,0x2530);
        uVar2 = *(uint *)(iVar1 + 0x4c);
        if ((iVar1 + 0x530U <= uVar2) && (uVar2 <= iVar1 + 0x252cU)) {
          *(int *)(iVar3 + 0x4c) = (((int)((uVar2 - iVar1) + -0x530) >> 2) + 0x14c) * 4 + iVar3;
          *(int *)(iVar3 + 0x50) =
               (((*(int *)(iVar1 + 0x50) - iVar1) + -0x530 >> 2) + 0x14c) * 4 + iVar3;
        }
        *(int *)(iVar3 + 0x6c) =
             (((*(int *)(iVar1 + 0x6c) - iVar1) + -0x530 >> 2) + 0x14c) * 4 + iVar3;
        if ((uVar4 & 0xffffffff) != 0) {
          fn_82F68CC0(uVar4,*(undefined4 *)(iVar1 + 0x34),1 << (*(uint *)(iVar1 + 0x24) & 0x3f));
        }
        *(int *)(iVar3 + 0x34) = (int)uVar4;
        *(int *)(param_1 + 0x1c) = iVar3;
        return 0;
      }
      (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),iVar3);
    }
    return 0xfffffffffffffffc;
  }
  return 0xfffffffffffffffe;
}

