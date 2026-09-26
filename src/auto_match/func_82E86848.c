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
extern int fn_82E82BF0();
extern int fn_82E83078();
extern int fn_82F02390();
extern int fn_82F155F0();
extern int fn_82F65350();


void fn_82E86848(int param_1,undefined1 *param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar5;
  ulonglong uVar4;
  int *piVar6;
  int iVar7;
  int aiStack_80 [32];
  
  if ((*(int *)(param_1 + 0x76c8) == 0) || (*(int *)(param_1 + 0x76e0) != 0)) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 1;
    param_2[3] = 0xf;
    fn_82E82BF0(param_1,param_2 + 4,aiStack_80,1,param_4,param_5,param_6,param_7);
    iVar5 = aiStack_80[0];
    *(int *)(param_1 + 0x834) = aiStack_80[0];
    param_2[aiStack_80[0] + 4] = 0;
    param_2[aiStack_80[0] + 5] = 0;
    param_2[aiStack_80[0] + 6] = 1;
    param_2[aiStack_80[0] + 7] = 0xe;
    if (*(int *)(param_1 + 0x844) != 0) {
      uVar2 = fn_82F65350();
      iVar7 = 1;
      *(uint *)(param_1 + 0x36c) =
           uVar2 + (((int)uVar2 >> 6) + (uint)((int)uVar2 < 0 && (uVar2 & 0x3f) != 0)) * -0x40 +
           0x40;
      if (1 < *(int *)(param_1 + 0x4ec)) {
        piVar6 = (int *)(param_1 + 0x36c);
        do {
          iVar1 = *piVar6;
          iVar3 = fn_82F65350();
          uVar4 = (longlong)iVar3 / 3 + ((longlong)iVar3 >> 0x3f);
          iVar7 = iVar7 + 1;
          uVar4 = (uVar4 & 0xffffffff) + ((uVar4 & 0xffffffff) >> 0x1f);
          piVar6 = piVar6 + 1;
          *piVar6 = (iVar3 - ((int)uVar4 + (int)((uVar4 & 0xffffffff) << 1))) + iVar1 + 1;
        } while (iVar7 < *(int *)(param_1 + 0x4ec));
      }
    }
    fn_82E83078(param_1,param_2 + iVar5 + 8,aiStack_80);
    *param_3 = aiStack_80[0] + iVar5 + 8;
  }
  else {
    fn_82F02390(*(undefined4 *)(param_1 + 0x1ebc),param_2,0,1);
    fn_82F155F0(param_1);
    iVar5 = (0x27U - *(int *)(*(int *)(param_1 + 0x1ebc) + 0x10) >> 3) +
            *(int *)(*(int *)(param_1 + 0x1ebc) + 4);
    *(int *)(param_1 + 0x834) = iVar5;
    *param_3 = iVar5;
  }
  return;
}

