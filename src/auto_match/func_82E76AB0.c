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
extern int fn_82EE5E28();
extern int fn_82EE5F60();


ulonglong fn_82E76AB0(int param_1,undefined2 *param_2,undefined2 *param_3,uint *param_4,
                       undefined4 *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  byte abStack_50 [80];
  
  if ((((param_2 == (undefined2 *)0x0) || (param_3 == (undefined2 *)0x0)) ||
      (param_4 == (uint *)0x0)) || (param_5 == (undefined4 *)0x0)) {
    uVar4 = 0xffffffff80070057;
  }
  else {
    *param_4 = 0;
    *param_5 = 0;
    if ((*(byte *)(param_1 + 0x238) & 2) == 0) {
      uVar4 = 0xffffffffc00d0000;
    }
    else {
      if (*(int *)(param_1 + 0x230) != 0) {
        abStack_50[0] = 0;
        uVar4 = fn_82EE5F60(param_1 + 0x218,abStack_50,1);
        if ((int)uVar4 < 0) {
          return uVar4;
        }
        *param_3 = *param_2;
        *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_2 + 1);
        cVar1 = *(char *)(param_2 + 3);
        *(uint *)((int)param_3 + 0xb) = (uint)abStack_50[0];
        *(char *)(param_3 + 3) = cVar1 + '\x01';
        *(undefined4 *)((int)param_3 + 7) = 0;
        *(uint *)((int)param_3 + 0xf) =
             *(int *)((int)param_2 + 0xf) + (uint)*(byte *)(param_2 + 0x9e);
        iVar2 = *(int *)((int)param_2 + 0x17);
        iVar3 = *(int *)((int)param_2 + 0x13);
        *(uint *)((int)param_3 + 0x1b) = (uint)abStack_50[0];
        *(uint *)((int)param_3 + 0x17) = abStack_50[0] + 1;
        *(undefined2 *)((int)param_3 + 0x1f) = 0;
        *(int *)((int)param_3 + 0x13) = iVar2 + iVar3;
        *(undefined4 *)((int)param_3 + 0x21) = 0;
        *(undefined4 *)(param_3 + 0x96) = 1;
        *(char *)(param_3 + 0x98) = *(char *)(param_2 + 0x98) + '\x01';
        *(undefined4 *)(param_3 + 0x9a) = *(undefined4 *)(param_2 + 0x9a);
        *(uint *)(param_3 + 0x9c) = *(int *)(param_2 + 0x9c) + abStack_50[0] + 1;
        *(undefined1 *)(param_3 + 0x9e) = *(undefined1 *)(param_2 + 0x9e);
        *param_5 = 1;
        uVar5 = *(uint *)((int)param_3 + 0x17);
        if (*(uint *)(param_1 + 0x230) < *(uint *)((int)param_3 + 0x17)) {
          uVar5 = *(uint *)(param_1 + 0x230);
        }
        uVar4 = fn_82EE5E28(param_1 + 0x218,uVar5);
        if ((int)uVar4 < 0) {
          return uVar4;
        }
        if (uVar5 < *(uint *)((int)param_3 + 0x17)) {
          uVar4 = 0x400d3a98;
        }
        *param_4 = uVar5;
        *(short *)(param_1 + 0x146) = *(short *)(param_1 + 0x146) + 1;
        return uVar4;
      }
      uVar4 = 0x400d0000;
      *param_4 = 0;
    }
    uVar4 = uVar4 | 15000;
  }
  return uVar4;
}

