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
extern int fn_82B80EE0();


undefined8
fn_82AF5160(undefined8 param_1,uint param_2,int param_3,int *param_4,int param_5,uint param_6,
             int param_7,int param_8)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  double dVar9;
  double dVar10;
  int in_stack_00000054;
  uint *in_stack_0000005c;
  uint *in_stack_00000064;
  
  iVar7 = 0;
  *in_stack_00000064 = 0;
  uVar3 = 0;
  uVar5 = 0;
  if (param_6 != 0) {
    uVar4 = 0;
    do {
      bVar2 = false;
      uVar6 = 0;
      if (param_2 != 0) {
        piVar8 = param_4;
        do {
          iVar1 = *(int *)((param_3 - (int)param_4) + (int)piVar8);
          if (((iVar1 == *(int *)(iVar7 + param_7)) &&
              (*(int *)((param_5 - (int)param_4) + (int)piVar8) ==
               *(int *)(iVar7 + in_stack_00000054))) &&
             (bVar2 = true, *piVar8 == *(int *)(iVar7 + param_8))) break;
          if (((*(uint *)(*(int *)(iVar7 + param_7) + 8) & 0x3f80) == 16000) &&
             ((*(uint *)(iVar1 + 8) & 0x3f80) == 16000)) {
            dVar9 = (double)fn_82B80EE0(iVar1,*piVar8,
                                         *(undefined4 *)((param_5 - (int)param_4) + (int)piVar8));
            dVar10 = (double)fn_82B80EE0(*(undefined4 *)(iVar7 + param_7),
                                          *(undefined4 *)(iVar7 + param_8),
                                          *(undefined4 *)(iVar7 + in_stack_00000054));
            if (dVar9 == dVar10) break;
          }
          uVar6 = uVar6 + 1;
          piVar8 = piVar8 + 1;
        } while (uVar6 < param_2);
      }
      if (uVar6 == param_2) {
        if (!bVar2) {
          return 0;
        }
        *in_stack_00000064 = 1 << (uVar5 & 0x3f) | *in_stack_00000064;
      }
      else {
        uVar3 = uVar3 & ~(3 << (uVar4 & 0x3f)) | uVar6 << (uVar4 & 0x3f);
      }
      uVar5 = uVar5 + 1;
      iVar7 = iVar7 + 4;
      uVar4 = uVar4 + 2;
    } while (uVar5 < param_6);
  }
  *in_stack_0000005c = uVar3;
  return 1;
}

