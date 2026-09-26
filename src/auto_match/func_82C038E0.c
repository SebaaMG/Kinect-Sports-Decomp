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
extern unsigned int *auStack_4c;
extern int fn_823AAD90();
extern int fn_828D45F8();
extern int fn_82C03470();
extern int fn_82C0B678();


undefined8 fn_82C038E0(int *param_1,ulonglong param_2,uint *param_3)

{
  int iVar2;
  uint uVar3;
  longlong lVar1;
  ulonglong uVar4;
  undefined8 uVar5;
  int *piStack00000014;
  uint *puStack00000024;
  undefined1 auStack_4c [76];
  
  uVar5 = 0;
  *param_3 = 0;
  piStack00000014 = param_1;
  puStack00000024 = param_3;
  iVar2 = fn_828D45F8(param_1 + 0x1f);
  uVar3 = fn_823AAD90(param_1 + 0x1f);
  uVar4 = (longlong)(int)(uVar3 >> 3) * (longlong)iVar2;
  trapWord(6,uVar4,0);
  if ((param_2 & 0xffffffff) / (uVar4 & 0xffffffff) < 0x10) {
    uVar5 = 0xffffffff80004005;
  }
  if (-1 < (int)uVar5) {
    if (param_1[0xa9] != 0) {
      uVar5 = fn_82C03470(param_1,param_2,param_3,auStack_4c);
    }
    while (-1 < (int)uVar5) {
      do {
        uVar3 = fn_82C0B678(param_1[0xa8],param_1 + 0xa9);
        if (param_1[0xa9] != 0) break;
      } while (uVar3 == 0);
      if (uVar3 != 0) {
        if ((uVar3 == 6) || (uVar3 == 0x12)) {
          uVar5 = 0;
        }
        else if ((uVar3 < 0xc) || (0xe < uVar3)) {
          uVar5 = 0xffffffff80004005;
        }
        else {
          uVar5 = 0xffffffffc00d28b0;
        }
        break;
      }
      if (-1 < (int)uVar5) {
        uVar5 = fn_82C03470(param_1,param_2,param_3,auStack_4c);
      }
    }
  }
  if ((-1 < (int)uVar5) && (*param_3 != 0)) {
    iVar2 = *(int *)param_1[0xc];
    lVar1 = (**(code **)(*param_1 + 0x74))(param_1);
    uVar5 = (**(code **)(iVar2 + 0x48))(param_1[0xc],lVar1 + (ulonglong)*param_3);
  }
  return uVar5;
}

