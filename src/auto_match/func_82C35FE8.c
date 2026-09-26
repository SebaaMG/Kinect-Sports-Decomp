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
extern unsigned int *auStack_40;
extern int fn_82C30370();


undefined8 fn_82C35FE8(int param_1,int param_2,int param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  short sVar6;
  uint auStack_40 [16];
  
  iVar3 = *(int *)(param_3 + 0x38);
  uVar5 = 0;
  sVar1 = **(short **)(*(int *)(param_3 + 0x1a8) + 0xc);
  sVar2 = *(short *)(**(short **)(param_1 + 0x248) * 0x6f0 + *(int *)(param_1 + 0x140) + 0x76);
  if (*(int *)(param_2 + 0x48) == 0) {
    *(undefined4 *)(param_2 + 0x48) = 10;
  }
  else if (*(int *)(param_2 + 0x48) != 10) {
    return 0;
  }
  if ((int)*(char *)(param_1 + 200) < (int)(uint)*(ushort *)(param_1 + 0x6e)) {
    if (*(short *)(param_1 + 0xca) < sVar2) {
      do {
        uVar5 = fn_82C30370(param_2 + 0xe0,
                              (ulonglong)*(ushort *)(param_1 + 0x6e) -
                              (longlong)*(char *)(param_1 + 200),auStack_40);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
        uVar4 = 1 << (((uint)*(ushort *)(param_1 + 0x6e) - (int)*(char *)(param_1 + 200)) - 1 & 0x3f
                     );
        if ((uVar4 & auStack_40[0]) != 0) {
          auStack_40[0] = auStack_40[0] | ~(uVar4 - 1);
        }
        *(uint *)(*(short *)(param_1 + 0xca) * 4 + sVar1 * 4 + iVar3) = auStack_40[0];
        sVar6 = *(short *)(param_1 + 0xca) + 1;
        *(short *)(param_1 + 0xca) = sVar6;
      } while (sVar6 < sVar2);
    }
    *(undefined4 *)(param_2 + 0x48) = 0xb;
  }
  else {
    uVar5 = 0xffffffff80040002;
  }
  return uVar5;
}

