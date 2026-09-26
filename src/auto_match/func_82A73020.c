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
extern int fn_82A53EC0();
extern int fn_82A72A10();


undefined8 fn_82A73020(int *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  short sVar5;
  ushort uVar6;
  int iVar7;
  
  iVar2 = *param_1;
  uVar4 = 0;
  if (*(short *)((int)param_1 + 0x96) < *(short *)(iVar2 + 0x244)) {
    do {
      uVar4 = 0;
      iVar3 = *param_1;
      iVar7 = *(short *)(*(short *)((int)param_1 + 0x96) * 2 + *(int *)(iVar2 + 0x248)) * 0x6f0 +
              *(int *)(iVar2 + 0x140);
      if (*(int *)(iVar7 + 0x28) != 0) {
        uVar4 = fn_82A72A10(param_1,iVar7,0,*(undefined4 *)(iVar7 + 0x24));
        if ((int)uVar4 < 0) {
          return uVar4;
        }
        uVar1 = *(ushort *)(iVar3 + 0x2da);
        uVar6 = *(ushort *)(iVar7 + 0x1ea);
        if (*(ushort *)(iVar7 + 0x1ea) < uVar1) {
          uVar6 = uVar1;
        }
        *(ushort *)(iVar3 + 0x2da) = uVar6;
      }
      if ((int)uVar4 < 0) {
        return uVar4;
      }
      if (*(int *)(iVar2 + 0x3c) == 1) {
        param_1[0x42] = param_1[0x42] - (param_1[0x42] & 7U);
      }
      *(undefined2 *)(iVar2 + 0xca) = 0;
      fn_82A53EC0(param_1);
      sVar5 = *(short *)((int)param_1 + 0x96) + 1;
      *(short *)((int)param_1 + 0x96) = sVar5;
    } while (sVar5 < *(short *)(iVar2 + 0x244));
  }
  return uVar4;
}

