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
extern int fn_82C10F40();
extern int fn_82C1E328();


undefined8 fn_82C1E668(int param_1,longlong param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int aiStack_50 [20];
  
  iVar1 = *(int *)(param_1 + 0x1c);
  aiStack_50[0] = 0;
  uVar6 = (ulonglong)*(uint *)(*(int *)(iVar1 + 4) + 0x14);
  uVar7 = uVar6 + param_2;
  if (((longlong)(ulonglong)*(uint *)(*(int *)(iVar1 + 4) + 0x10) < (longlong)uVar7) ||
     ((longlong)uVar7 < (longlong)uVar6)) {
LAB_82c1e6ac:
    uVar3 = 0xffffffff80070057;
  }
  else {
    if (*(short *)(iVar1 + 0x98) != 0) {
      uVar3 = fn_82C10F40(*(undefined4 *)(iVar1 + 0x94),param_3,aiStack_50);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      if ((*(int *)(aiStack_50[0] + 4) == 0) || (*(int *)(aiStack_50[0] + 4) == 2)) {
        return 0xffffffff805000bc;
      }
      if (*(int *)(aiStack_50[0] + 0x30) == 2) {
        if (param_4 == 0) {
          uVar4 = (ulonglong)*(uint *)(*(int *)(aiStack_50[0] + 0x48) + 4);
          uVar6 = (longlong)uVar7 / (longlong)uVar4;
          uVar5 = uVar4 & ~((uVar7 * 2 | uVar7 >> 0x3f) - 1);
          trapDoubleWordImmediate(6,uVar4,0);
          trapDoubleWordImmediate(5,uVar5,0xffff);
        }
        else {
          uVar5 = (ulonglong)*(uint *)(*(int *)(aiStack_50[0] + 0x48) + 4);
          trapDoubleWordImmediate(6,uVar5,0);
          uVar4 = (uVar5 * 999 & 0xffffffff) / 1000 + uVar7;
          uVar6 = (longlong)uVar4 / (longlong)uVar5;
          trapDoubleWordImmediate(5,uVar5 & ~((uVar4 * 2 | uVar4 >> 0x3f) - 1),0xffff);
        }
        if ((uVar6 & 0xffffffff) <= (ulonglong)*(uint *)(*(int *)(aiStack_50[0] + 0x48) + 0xc)) {
          uVar2 = *(uint *)(*(int *)(*(int *)(aiStack_50[0] + 0x48) + 0x10) +
                           (int)((uVar6 & 0xffffffff) << 3));
          if (uVar2 <= *(uint *)(*(int *)(iVar1 + 4) + 0xc)) {
            uVar3 = fn_82C1E328(param_1,((longlong)*(int *)(*(int *)(iVar1 + 4) + 8) *
                                           (longlong)(int)uVar2 & 0xffffffffU) +
                                          *(longlong *)(iVar1 + 0x10),uVar5);
            if ((int)uVar3 < 0) {
              return uVar3;
            }
            if (param_4 == 0) {
              *(undefined4 *)(iVar1 + 0xbc) = 0;
              *(undefined4 *)(iVar1 + 0xb8) = 1;
            }
            else {
              *(undefined4 *)(iVar1 + 0xb8) = 0;
              *(undefined4 *)(iVar1 + 0xbc) = 1;
            }
            *(char *)(iVar1 + 0xc4) = (char)param_3;
            *(int *)(iVar1 + 0xdc) = (int)uVar6;
            *(int *)(iVar1 + 0xc0) = (int)uVar7;
            *(undefined4 *)(iVar1 + 200) = 0;
            *(undefined4 *)(iVar1 + 0xd0) = 0;
            *(undefined4 *)(iVar1 + 0xd4) = 0;
            *(undefined4 *)(iVar1 + 0xd8) = 0;
            *(undefined4 *)(iVar1 + 0xcc) = 0;
            return uVar3;
          }
        }
        goto LAB_82c1e6ac;
      }
    }
    uVar3 = 0xffffffff805000bb;
  }
  return uVar3;
}

