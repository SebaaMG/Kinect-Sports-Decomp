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
extern int fn_82EEDD00();


undefined8
fn_82EEDD60(int param_1,short param_2,uint param_3,int *param_4,undefined4 *param_5,uint *param_6,
             int param_7)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  int aiStack_60 [24];
  
  uVar1 = *(uint *)(param_1 + 0x70);
  uVar6 = 0;
  uVar5 = 0;
  if (uVar1 != 0) {
    do {
      aiStack_60[0] = 0;
      uVar3 = fn_82EEDD00(param_1,uVar5,aiStack_60);
      if (aiStack_60[0] == 0) {
        return 0xffffffffc00d36bb;
      }
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      if ((param_2 == -1) || (param_2 == *(short *)(aiStack_60[0] + 0x14))) {
        if (param_7 == 0) {
          iVar4 = *(int *)(aiStack_60[0] + 8);
        }
        else {
          iVar4 = *(int *)(aiStack_60[0] + 0xc);
        }
        if (iVar4 == 0) {
          uVar2 = param_3 & 0xffff;
          if ((uVar2 == uVar6) || ((*(int *)(aiStack_60[0] + 0x38) != 0 && (uVar2 == uVar6 + 1)))) {
            *param_4 = aiStack_60[0];
            if (param_5 != (undefined4 *)0x0) {
              *param_5 = (int)uVar5;
            }
            if (param_6 != (uint *)0x0) {
              *param_6 = (uint)(uVar6 != uVar2);
            }
            break;
          }
          uVar6 = uVar6 + 1 & 0xffff;
          if (*(int *)(aiStack_60[0] + 0x38) != 0) {
            uVar6 = uVar6 + 1 & 0xffff;
          }
        }
      }
      uVar5 = uVar5 + 1;
    } while ((uVar5 & 0xffffffff) < (ulonglong)uVar1);
    if ((uVar5 & 0xffffffff) < (ulonglong)uVar1) {
      return uVar3;
    }
  }
  return 0xffffffffc00d3e8d;
}

