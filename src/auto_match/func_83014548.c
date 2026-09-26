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
extern int fn_82F68B6C();
extern int fn_82F69148();
extern int fn_82FF4A38();
extern int fn_83014F10();
extern unsigned int lbl_83264304;


undefined4 fn_83014548(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar2;
  ulonglong uVar5;
  uint *puVar6;
  
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x74);
  iVar4 = fn_82F68B6C();
  if (*(int *)(iVar4 + 0x3c) == 0) {
    uVar3 = 0;
  }
  else {
    *(undefined4 *)(iVar4 + 0x6c) = 0;
    RtlEnterCriticalSection(iVar4 + 0x1c);
    if (*(int *)(iVar4 + 0x38) != 0) {
      puVar6 = (uint *)(iVar4 + 0x10);
      if (*(int *)(iVar4 + 0x14) != *(int *)(iVar4 + 0x10)) {
        do {
          piVar1 = (int *)*puVar6;
          *param_3 = piVar1[2];
          if (*piVar1 != 0) {
            *(int *)(iVar4 + 0x6c) = *piVar1;
            *(int *)(iVar4 + 0x70) = piVar1[1];
            *(int *)(iVar4 + 0x74) = piVar1[2];
            *param_2 = piVar1[1];
            fn_83014F10(puVar6,0);
            break;
          }
          uVar2 = (ulonglong)*puVar6;
          uVar5 = (ulonglong)*(uint *)(iVar4 + 0x14) - 0xc;
          if (uVar2 < (uVar5 & 0xffffffff)) {
            fn_82F69148(uVar2,uVar2 + 0xc,
                         (((uVar5 - uVar2) - 1 & 0xffffffff) / 0xc + 1) * 0xc & 0xfffffffc);
          }
          *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + -0xc;
          fn_82FF4A38(lbl_83264304,*(undefined4 *)(iVar4 + 0x50),0,*param_3);
        } while (*(uint *)(iVar4 + 0x14) != *puVar6);
      }
      if (*(int *)(iVar4 + 0x6c) == 0) {
        *(undefined4 *)(iVar4 + 0x38) = 2;
      }
    }
    uVar3 = *(undefined4 *)(iVar4 + 0x6c);
    RtlLeaveCriticalSection(iVar4 + 0x1c);
  }
  return uVar3;
}

