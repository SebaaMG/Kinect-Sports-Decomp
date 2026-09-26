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


void fn_829B56E8(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = 0;
  if (0 < param_1[0x53]) {
    piVar5 = param_1 + 0x54;
    do {
      iVar1 = *piVar5;
      if (*(int *)(iVar1 + 0x4c) == 0) {
        uVar2 = *(uint *)(iVar1 + 0x10);
        if ((((int)uVar2 < 0) || (3 < (int)uVar2)) ||
           (*(int *)((int)(((ulonglong)uVar2 + 0x2a & 0xffffffff) << 2) + (int)param_1) == 0)) {
          *(undefined4 *)(*param_1 + 0x14) = 0x34;
          *(uint *)(*param_1 + 0x18) = uVar2;
          (**(code **)*param_1)(param_1);
        }
        uVar3 = (**(code **)param_1[1])(param_1,1,0x84);
        fn_82F68CC0(uVar3,*(undefined4 *)
                            ((int)(((ulonglong)uVar2 + 0x2a & 0xffffffff) << 2) + (int)param_1),0x84
                    );
        *(int *)(iVar1 + 0x4c) = (int)uVar3;
      }
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar4 < param_1[0x53]);
  }
  return;
}

