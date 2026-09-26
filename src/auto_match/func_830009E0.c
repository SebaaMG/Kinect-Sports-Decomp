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
extern int fn_82F69148();
extern int fn_82FA5190();
extern unsigned int lbl_831BC768;


void fn_830009E0(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  puVar1 = *(uint **)(param_1 + 0x54);
  if ((puVar1 != (uint *)0x0) && (uVar6 = (ulonglong)*puVar1, uVar6 != puVar1[1])) {
    do {
      uVar4 = lbl_831BC768;
      if (*(int *)uVar6 == param_2) {
        puVar2 = (undefined4 *)((int *)uVar6)[1];
        if (puVar2 != (undefined4 *)0x0) {
          (**(code **)*puVar2)(puVar2,0);
          fn_82FA5190(uVar4,puVar2);
        }
        iVar3 = *(int *)(param_1 + 0x54);
        uVar5 = (ulonglong)*(uint *)(iVar3 + 4) - 8;
        if ((uVar6 & 0xffffffff) < (uVar5 & 0xffffffff)) {
          fn_82F69148(uVar6,uVar6 + 8,
                       ((((uVar5 - uVar6) - 1 & 0xffffffff) >> 3) + 1) * 8 & 0xfffffff8);
        }
        *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + -8;
      }
      else {
        uVar6 = uVar6 + 8;
      }
    } while ((uVar6 & 0xffffffff) != (ulonglong)*(uint *)(*(int *)(param_1 + 0x54) + 4));
  }
  return;
}

