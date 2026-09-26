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
extern int fn_82C44C58();
extern int fn_82C555A8();
extern int fn_82C55808();
extern int fn_82C55A60();
extern int fn_82C55CC0();
extern int fn_82C55F20();


undefined8 fn_82C496B0(int param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar6;
  undefined8 uVar5;
  longlong lVar7;
  ulonglong uVar8;
  
  if (*(int *)(param_1 + 0x2c8) == 0) {
LAB_82c49860:
    uVar5 = 0;
  }
  else {
    iVar6 = fn_82C555A8(param_1,param_2,0xb330);
    *(int *)(param_1 + 0x7c) = iVar6;
    if (iVar6 != 0) {
      uVar3 = *(int *)(param_3 + 0x10) + 1U & 0xfffffffe;
      uVar1 = *(int *)(param_3 + 0x14) + 1U & 0xfffffffe;
      *(uint *)(param_1 + 0x98) = uVar3;
      *(uint *)(param_1 + 0x9c) = uVar1;
      if ((*(int *)(param_3 + 0x68) == 0) || (*(short *)(param_3 + 0xf4) != 0xc)) {
        *(uint *)(param_1 + 0x88) = uVar3;
        *(uint *)(param_1 + 0x90) = uVar1 * uVar3;
        *(int *)(param_1 + 0x8c) = (int)(uVar3 + 1) >> 1;
        *(int *)(param_1 + 0x94) = (int)(uVar1 * uVar3) >> 2;
        lVar7 = (longlong)((int)(*(ushort *)(param_3 + 0xf4) * uVar1 * uVar3 + 7) >> 3);
      }
      else {
        uVar2 = ((int)(uVar3 + 1) >> 1) + 0xffU & 0xffffff00;
        uVar3 = uVar3 + 0xff & 0xffffff00;
        *(uint *)(param_1 + 0x8c) = uVar2;
        *(uint *)(param_1 + 0x88) = uVar3;
        uVar8 = (longlong)((int)(uVar1 + 1) >> 1) * (longlong)(int)uVar2 + 0xfff;
        uVar4 = (longlong)(int)uVar3 * (longlong)(int)uVar1 + 0xfffU & 0xfffff000;
        *(uint *)(param_1 + 0x94) = (uint)uVar8 & 0xfffff000;
        *(int *)(param_1 + 0x90) = (int)uVar4;
        lVar7 = (uVar8 & 0x7ffff000) * 2 + uVar4;
      }
      *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x49b0);
      iVar6 = fn_82C55808(param_1,*(undefined4 *)(param_1 + 0x49b0),lVar7);
      *(int *)(param_1 + 0x80) = iVar6;
      if (iVar6 != 0) {
        iVar6 = fn_82C55A60(param_1,param_2,0x200);
        *(int *)(param_1 + 0xa0) = iVar6;
        if (iVar6 != 0) {
          iVar6 = fn_82C55F20(param_1,param_2,(ulonglong)*(uint *)(param_1 + 0x56e8) + 8);
          *(int *)(param_1 + 0xa4) = iVar6;
          if (iVar6 != 0) {
            iVar6 = fn_82C55F20(param_1,0,(ulonglong)*(uint *)(param_1 + 0x56f4) + 0x10);
            *(int *)(param_1 + 0xa8) = iVar6;
            if (iVar6 != 0) {
              iVar6 = fn_82C55CC0(param_1,0,
                                      ((ulonglong)*(uint *)(param_1 + 0x56f8) + 3 & 0x3fffffff) << 2
                                     );
              *(int *)(param_1 + 0xac) = iVar6;
              if (iVar6 != 0) goto LAB_82c49860;
            }
          }
        }
      }
    }
    fn_82C44C58(param_1);
    uVar5 = 0xffffffff80000001;
  }
  return uVar5;
}

