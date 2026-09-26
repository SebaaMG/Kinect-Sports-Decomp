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


undefined8 fn_82C112A8(int param_1,undefined8 *param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  int iVar5;
  int aiStack_40 [16];
  
  *param_2 = 0;
  aiStack_40[0] = 0;
  bVar2 = false;
  bVar3 = false;
  uVar4 = fn_82C10F40(*(undefined4 *)(param_1 + 0x48),*(undefined1 *)(param_1 + 0x10),aiStack_40);
  if ((int)uVar4 < 0) {
    return uVar4;
  }
  if (*(int *)(aiStack_40[0] + 0x18) == 0) {
    return 0xffffffff8050000b;
  }
  iVar5 = *(int *)(aiStack_40[0] + 0x18);
  if (iVar5 == 0) {
LAB_82c113a4:
    *param_2 = *(undefined8 *)(param_1 + 0x38);
LAB_82c113ac:
    uVar4 = (**(code **)(*(int *)(param_1 + 4) + 0x14))(*(int *)(param_1 + 4),param_2);
    if (-1 < (int)uVar4) {
      *(undefined8 *)(param_1 + 0x38) = *param_2;
    }
  }
  else {
    do {
      iVar1 = *(int *)(iVar5 + 0x34);
      if (((*(int *)(iVar5 + 0x30) == 0) && (*(int *)(iVar5 + 0xc) == 0)) && (!bVar2)) {
        bVar2 = true;
        *param_2 = *(undefined8 *)(iVar5 + 0x20);
      }
      if (((*(int *)(iVar5 + 0x30) == 0) &&
          (*(int *)(iVar5 + 0x14) + *(int *)(iVar5 + 0xc) == *(int *)(iVar5 + 0x10))) && (bVar2)) {
        bVar3 = true;
        break;
      }
      iVar5 = *(int *)(iVar5 + 0x3c);
    } while (iVar5 != 0);
    if (bVar2) {
      if (bVar3) goto LAB_82c113ac;
    }
    else if ((bVar3) || (iVar1 == 0)) goto LAB_82c113a4;
    *param_2 = 0;
    uVar4 = 0xffffffff8050000b;
  }
  return uVar4;
}

