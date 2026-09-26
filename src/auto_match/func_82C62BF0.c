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
extern int fn_82C5E0F8();
extern int fn_82C5E340();
extern int fn_82C5F9C8();
extern int fn_82CA85C8();
extern int fn_82CA9338();


void fn_82C62BF0(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (*(int *)(param_1 + 0x3a28) != *(int *)(param_1 + 0x3a2c)) {
    if ((*(int *)(param_1 + 0x39f4) != 0) && (*(int *)(param_1 + 0x3a2c) == 0)) {
      fn_82C5E340();
    }
    iVar1 = *(int *)(param_1 + 0x120);
    if ((iVar1 == 0) || (iVar1 == 4)) {
      *(int *)(param_1 + 0xf10) = *(int *)(param_1 + 0xec0) + *(int *)(param_1 + 0xdc);
      *(int *)(param_1 + 0xf14) = *(int *)(param_1 + 0xec4) + *(int *)(param_1 + 0xe0);
      *(int *)(param_1 + 0xf18) = *(int *)(param_1 + 0xec8) + *(int *)(param_1 + 0xe0);
    }
    if (((*(int *)(param_1 + 0x39f4) != 0) || (iVar1 == 1)) || (iVar1 == 2)) {
      iVar1 = *(int *)(param_1 + 0x3a2c) * 0x54 + param_1;
      uVar2 = (ulonglong)*(uint *)(iVar1 + 0x3a74);
      uVar3 = (ulonglong)*(uint *)(iVar1 + 0x3a78);
      if (*(int *)(param_1 + 0x3a2c) < *(int *)(param_1 + 0x3a28)) {
        if (*(int *)(param_1 + 0x98) == 0) {
          (**(code **)(param_1 + 0x3e30))
                    (0,*(undefined4 *)(param_1 + 0xecc),0,*(undefined4 *)(iVar1 + 0x3a38),uVar2,1,1,
                     *(undefined4 *)(iVar1 + 0x3a30));
          (**(code **)(param_1 + 0x3e2c))
                    (0,*(undefined4 *)(param_1 + 0xed0),*(undefined4 *)(param_1 + 0xed4),0,
                     *(undefined4 *)(*(int *)(param_1 + 0x3a2c) * 0x54 + param_1 + 0x3a3c),uVar3,1,1
                    );
        }
        fn_82CA85C8(param_1,*(uint *)(param_1 + 0xecc) + uVar2,
                          *(uint *)(param_1 + 0xed0) + uVar3,*(uint *)(param_1 + 0xed4) + uVar3,
                          (ulonglong)*(uint *)(param_1 + 0xec0) +
                          (ulonglong)*(uint *)(param_1 + 0xdc),
                          (ulonglong)*(uint *)(param_1 + 0xec4) +
                          (ulonglong)*(uint *)(param_1 + 0xe0),
                          (ulonglong)*(uint *)(param_1 + 0xec8) +
                          (ulonglong)*(uint *)(param_1 + 0xe0));
      }
      else {
        fn_82CA9338(param_1,*(uint *)(param_1 + 0xecc) + uVar2,
                          *(uint *)(param_1 + 0xed0) + uVar3,*(uint *)(param_1 + 0xed4) + uVar3,
                          (ulonglong)*(uint *)(param_1 + 0xec0) +
                          (ulonglong)*(uint *)(param_1 + 0xdc),
                          (ulonglong)*(uint *)(param_1 + 0xec4) +
                          (ulonglong)*(uint *)(param_1 + 0xe0),
                          (ulonglong)*(uint *)(param_1 + 0xec8) +
                          (ulonglong)*(uint *)(param_1 + 0xe0));
      }
      fn_82C5F9C8(param_1,0);
      (**(code **)(param_1 + 0x3e30))
                (0,*(undefined4 *)(param_1 + 0xecc),0,*(undefined4 *)(param_1 + 0xac),
                 *(undefined4 *)(param_1 + 0xdc),1,1,*(undefined4 *)(param_1 + 0xa4));
      (**(code **)(param_1 + 0x3e2c))
                (0,*(undefined4 *)(param_1 + 0xed0),*(undefined4 *)(param_1 + 0xed4),0,
                 *(undefined4 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xe0),1,1);
      if ((*(int *)(param_1 + 0x3d0c) == 0) && (*(int *)(param_1 + 0x3a2c) == 0)) {
        fn_82C5E0F8(param_1);
        *(undefined4 *)(param_1 + 0x3d0c) = 1;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x3a2c) = *(undefined4 *)(param_1 + 0x3a28);
  return;
}

