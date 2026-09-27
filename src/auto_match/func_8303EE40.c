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
extern int fn_83009E78();
extern int fn_83014E90();
extern int fn_8302BBA8();
extern int fn_83032738();
extern unsigned int iStack_6c;
extern unsigned int lbl_832642E0;
extern unsigned int uStack_5a;
extern unsigned int uStack_5b;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_70;


void fn_8303EE40(int param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  struct { undefined4 first; int second; } stack_pair_70;

  undefined4 uStack_68;
  undefined4 uStack_64;
  uint uStack_60;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  
  iVar6 = lbl_832642E0;
  iVar3 = lbl_832642E0 + 0x1304;
  RtlEnterCriticalSection(iVar3);
  iVar4 = iVar6 + 0x1320;
  uVar5 = 0;
  iVar6 = *(int *)(iVar6 + 0x1320);
  while (iVar6 == 0) {
    uVar5 = uVar5 + 1;
    if (0xc0 < uVar5) goto joined_r0x8303eea8;
    iVar6 = *(int *)(uVar5 * 4 + iVar4);
  }
LAB_8303eeac:
  do {
    do {
      fn_83014E90(iVar6,param_2,param_3);
      iVar6 = *(int *)(iVar6 + 8);
    } while (iVar6 != 0);
    do {
      uVar5 = uVar5 + 1;
      if (0xc0 < uVar5) goto joined_r0x8303eea8;
      iVar6 = *(int *)(uVar5 * 4 + iVar4);
    } while (iVar6 == 0);
  } while( true );
joined_r0x8303eea8:
  if (iVar6 == 0) {
    RtlLeaveCriticalSection(iVar3);
    piVar1 = (int *)fn_83009E78();
    if (piVar1 != (int *)0x0) {
      uStack_5a = *(undefined1 *)(param_1 + 0x28);
      uStack_60 = *(uint *)(param_1 + 0x14) >> 3 & 0x1f;
      uStack_5c = 0;
      stack_pair_70.first = (undefined4)param_2;
      stack_pair_70.second = (int)param_3;
      uStack_68 = 0;
      uStack_64 = fn_8302BBA8(param_1);
      uStack_5b = stack_pair_70.second == 0;
      (**(code **)(*piVar1 + 0x1c))(piVar1,&stack_pair_70.first);
      piVar2 = (int *)fn_83032738();
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x1c))(piVar2,&stack_pair_70.first);
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    return;
  }
  goto LAB_8303eeac;
}

