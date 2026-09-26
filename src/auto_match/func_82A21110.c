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
extern unsigned int *__imp__XexExecutableModuleHandle;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82A1F888();
extern int fn_82A1F950();
extern unsigned int lbl_8315D2EC;
extern unsigned int lbl_83219B8C;


undefined8 fn_82A21110(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar4;
  ulonglong uVar3;
  undefined8 uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  uVar6 = 0;
  RtlEnterCriticalSection(0xffffffff83219ba0);
  RtlEnterCriticalSection(param_1);
  if (*(int *)(param_1 + 0x38) == 0) goto LAB_82a212a0;
  uVar6 = fn_82A1F888(*(undefined4 *)(param_1 + 0x28),1);
  if ((longlong)uVar6 < 0) goto LAB_82a212a0;
  if (*(int *)(param_1 + 0x34) == 0) {
    puVar1 = (undefined4 *)fn_8265C940(0x1000,lbl_8315D2EC);
    if (puVar1 == (undefined4 *)0x0) {
      uVar5 = 8;
    }
    else {
      puVar1[2] = param_2;
      *puVar1 = 0xfadebac4;
      puVar1[1] = 3;
      if (*__imp__XexExecutableModuleHandle == 0) {
LAB_82a211f4:
        uVar4 = 0;
      }
      else {
        iVar2 = RtlImageXexHeaderField
                          (*(undefined4 *)(*__imp__XexExecutableModuleHandle + 0x58),0x40006);
        if ((longlong)-(ulonglong)(iVar2 == 0) < 0) goto LAB_82a211f4;
        uVar4 = *(undefined4 *)(iVar2 + 4);
      }
      puVar1[3] = uVar4;
      uVar6 = fn_82A1F950(*(undefined4 *)(param_1 + 0x28),puVar1,0);
      fn_8265C990(puVar1,lbl_8315D2EC);
      if (-1 < (int)uVar6) {
        *(undefined4 *)(param_1 + 0x34) = 1;
        goto LAB_82a2122c;
      }
    }
  }
  else {
LAB_82a2122c:
    uVar3 = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      iVar2 = 0;
      do {
        uVar3 = uVar3 + 1;
        uVar6 = fn_82A1F950(*(undefined4 *)(param_1 + 0x28),
                                  *(undefined4 *)(iVar2 + *(int *)(param_1 + 0x1c)),uVar3);
        if ((uVar6 & 0xc0000000) == 0xc0000000) break;
        iVar2 = iVar2 + 4;
      } while ((uVar3 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x20));
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x28);
  (**(code **)(lbl_83219B8C + 4))(*puVar1);
  *puVar1 = 0xffffffff;
LAB_82a212a0:
  RtlLeaveCriticalSection(param_1);
  RtlLeaveCriticalSection(0xffffffff83219ba0);
  if ((uVar6 & 0xc0000000) == 0xc0000000) {
    uVar5 = RtlNtStatusToDosError(uVar6);
  }
  return uVar5;
}

