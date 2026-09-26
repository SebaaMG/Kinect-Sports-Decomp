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
extern int fn_825089A0();
extern int fn_8288E040();
extern int fn_8289F160();
extern int fn_828EA790();
extern unsigned int *lbl_83212A04;


longlong fn_82882028(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar4;
  ulonglong uVar3;
  ulonglong uVar5;
  longlong lVar6;
  undefined4 *puStack_40;
  undefined4 *puStack_3c;
  int aiStack_38 [14];
  
  lVar6 = 0;
  if ((-1 < (int)param_1) &&
     (puStack_40 = param_1, fn_8289F160(&puStack_3c,0xffffffff83212a00,&puStack_40),
     puStack_3c != lbl_83212A04)) {
    piVar4 = (int *)fn_825089A0();
    uVar3 = (**(code **)(*piVar4 + 0xc))();
    puVar2 = lbl_83212A04;
    puStack_40 = (undefined4 *)*lbl_83212A04;
    while (puStack_40 != puVar2) {
      iVar1 = puStack_40[4];
      if ((((iVar1 != 0) &&
           (puStack_3c = param_1, fn_8288E040(aiStack_38,iVar1 + 0x10,&puStack_3c),
           aiStack_38[0] != *(int *)(iVar1 + 0x14))) &&
          (uVar5 = *(ulonglong *)(aiStack_38[0] + 0x18), uVar5 != 0)) &&
         ((uVar5 < uVar3 && (uVar3 - uVar5 < 5000)))) {
        lVar6 = lVar6 + 1;
      }
      fn_828EA790(&puStack_40);
    }
  }
  return lVar6;
}

