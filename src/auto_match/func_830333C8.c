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
extern unsigned int *auStack_50;
extern int fn_830007F8();
extern int fn_8302DD08();
extern int fn_83032BE0();
extern int fn_83032D88();


undefined8 fn_830333C8(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  char cVar4;
  int *piVar3;
  uint uVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined2 auStack_50 [2];
  undefined1 auStack_4c [76];
  
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 8) != *(int *)(iVar1 + 4)) {
      do {
        iVar1 = *(int *)(param_1 + 0x34);
        iVar2 = *(int *)(iVar1 + 8);
        if (*(int *)(iVar2 + -8) == 0) {
          cVar4 = fn_830007F8(*(undefined4 *)(iVar2 + -0x14),param_2,0);
          if (cVar4 == '\0') {
            piVar3 = (int *)fn_8302DD08(*(undefined4 *)(iVar2 + -0x14),param_3,auStack_50,
                                              auStack_4c,iVar2 + -0x10,iVar2 + -0xc);
            if (piVar3 != (int *)0x0) {
              *(undefined2 *)((*(int *)(param_1 + 0x38) + 0x1d) * 2 + param_1) = auStack_50[0];
              *(int *)(param_1 + 0x10) = piVar3[3];
              (**(code **)(*piVar3 + 8))();
              return 0;
            }
            break;
          }
          iVar1 = *(int *)(param_1 + 0x38);
          *(int *)(param_1 + 0x38) = iVar1 + -1;
          while (iVar1 != 1) {
            uVar5 = *(int *)(param_1 + 0x38) - 1;
            if (uVar5 < 0x20) {
              bVar7 = (1 << (uVar5 & 0x3f) & *(uint *)(param_1 + 0x7c)) != 0;
            }
            else {
              bVar7 = false;
            }
            if (bVar7) break;
            iVar1 = *(int *)(param_1 + 0x38);
            *(int *)(param_1 + 0x38) = iVar1 + -1;
          }
          iVar1 = *(int *)(param_1 + 0x34);
          fn_83032BE0((ulonglong)*(uint *)(iVar1 + 8) - 0x14);
          *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + -0x14;
        }
        else {
          uVar6 = (ulonglong)*(uint *)(iVar1 + 4);
          uVar5 = *(uint *)(iVar1 + 8);
          if (uVar6 != uVar5) {
            do {
              fn_83032BE0(uVar6);
              uVar6 = uVar6 + 0x14;
            } while ((uVar6 & 0xffffffff) != (ulonglong)uVar5);
          }
          *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar1 + 4);
        }
      } while (*(int *)(*(int *)(param_1 + 0x34) + 8) != *(int *)(*(int *)(param_1 + 0x34) + 4));
    }
    iVar1 = *(int *)(param_1 + 0x34);
    if (((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x14 == 0) &&
       (*(undefined4 *)(param_1 + 0x34) = 0, iVar1 != 0)) {
      fn_83032D88();
    }
  }
  return 1;
}

