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
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_8265C9E0();
extern int fn_82672138();
extern int fn_82A1BB18();
extern int fn_82BFE128();
extern unsigned int iStack_3c;
extern unsigned int lbl_831E7B44;
extern unsigned int *lbl_831E7B48;
extern unsigned int uStack_40;


void fn_82672AB8(int param_1,undefined8 param_2,int param_3,ulonglong param_4)

{
  bool bVar1;
  int iVar4;
  longlong lVar2;
  undefined8 uVar3;
  uint *puVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined4 uStack_40;
  int iStack_3c;
  
  uStack_40 = 0;
  iVar4 = fn_82A1BB18();
  if (iVar4 == lbl_831E7B44) {
    uVar6 = 0;
    if ((param_4 & 0xffffffff) != 0) {
      puVar5 = (uint *)(param_3 + 4);
      do {
        if (5 < (*puVar5 & 0x8f)) {
          bVar1 = false;
          goto LAB_82672b88;
        }
        uVar6 = uVar6 + 1;
        puVar5 = puVar5 + 4;
      } while ((uVar6 & 0xffffffff) < (param_4 & 0xffffffff));
    }
    bVar1 = true;
LAB_82672b88:
    if (bVar1) {
      lVar2 = fn_8265C9E0(0x38);
      if (lVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uStack_40 = 0;
        iStack_3c = 0;
        fn_82517978(&uStack_40,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),1);
        uVar3 = fn_82672138(lVar2,&uStack_40,param_2,param_3,param_4);
        if (iStack_3c != 0) {
          fn_822315A0();
        }
      }
      fn_82BFE128(*lbl_831E7B48,uVar3);
    }
  }
  else {
    iVar4 = param_1 + 0x124;
    if (iVar4 != 0) {
      RtlEnterCriticalSection(iVar4);
    }
    for (puVar7 = *(undefined4 **)(param_1 + 0x14);
        (*(int *)(param_1 + 0xe8) == 0 && (puVar7 != *(undefined4 **)(param_1 + 0x18)));
        puVar7 = puVar7 + 2) {
      (*(code *)*puVar7)(puVar7[1],param_2,param_3,param_4);
    }
    if (iVar4 != 0) {
      RtlLeaveCriticalSection(iVar4);
    }
  }
  return;
}

