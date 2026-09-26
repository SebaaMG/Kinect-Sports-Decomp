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
extern int fn_82A37B80();
extern int fn_82A37C50();
extern int fn_82F63CA0();
extern int fn_82F68CC0();


void fn_82A37D48(int param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  int iVar3;
  ulonglong uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_40 [64];
  
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar3 = fn_82A37C50(param_1,param_2,auStack_40);
    if (iVar3 == 0) {
      fn_82A37B80(param_1);
      uVar2 = (ulonglong)*(uint *)(param_1 + 4);
      lVar7 = *(uint *)(param_1 + 8) - uVar2;
      lVar1 = (((longlong)(int)((-(uint)((*(uint *)(param_3 + 0xc) & 0xc00000) != 0) & 0xc) + 0x14)
                * (longlong)(int)(*(uint *)(param_3 + 0xc) >> 6 & 0xffff) + 0x1fU >> 5) + 4) * 4;
      uVar6 = lVar1 + 8;
      if (uVar6 <= *(uint *)(param_1 + 0xc)) {
        uVar4 = uVar2;
        if (((ulonglong)*(uint *)(param_1 + 0xc) - lVar7 & 0xffffffff) < uVar6) {
          do {
            uVar5 = (ulonglong)*(ushort *)((int)uVar4 + 4);
            lVar7 = lVar7 + uVar5 * -4;
            uVar4 = uVar5 * 4 + uVar4;
          } while (((ulonglong)*(uint *)(param_1 + 0xc) - lVar7 & 0xffffffff) < uVar6);
        }
        if ((uVar4 & 0xffffffff) != uVar2) {
          if ((uVar4 & 0xffffffff) == (ulonglong)*(uint *)(param_1 + 8)) {
            *(uint *)(param_1 + 8) = *(uint *)(param_1 + 4);
          }
          else {
            fn_82F63CA0(uVar2,uVar4,lVar7);
            *(int *)(param_1 + 8) = *(int *)(param_1 + 4) + (int)lVar7;
          }
        }
        **(undefined4 **)(param_1 + 8) = (int)param_2;
        *(short *)(*(int *)(param_1 + 8) + 4) = (short)(uVar6 >> 2);
        fn_82F68CC0((ulonglong)*(uint *)(param_1 + 8) + 8,param_3,lVar1);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (int)uVar6;
      }
      RtlLeaveCriticalSection(param_1 + 0x10);
    }
  }
  return;
}

