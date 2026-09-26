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
extern unsigned int *auStack_40;
extern int fn_8267B890();
extern int fn_82695DA0();
extern int fn_82696958();
extern int fn_826A25C0();
extern int fn_826A2CB0();
extern int fn_826EBE48();


void fn_826A2E40(int param_1,int param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  char cVar7;
  int iVar4;
  int iVar5;
  ulonglong uVar3;
  undefined4 uVar6;
  uint uVar8;
  int iVar9;
  undefined4 auStack_40 [16];
  
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  cVar7 = fn_826A25C0();
  if (cVar7 == '\0') {
    uVar1 = *(undefined4 *)(*(int *)(param_2 + 0x78) + 0x288);
    iVar4 = fn_82696958(param_3,param_2);
    if ((iVar4 == 0) ||
       (iVar5 = (**(code **)(*(int *)(iVar4 + 0x10) + 8))(iVar4 + 0x10), iVar5 != 7)) {
      uVar3 = fn_8267B890(uVar1,0x10,0);
      if ((uVar3 & 0xffffffff) == 0) {
        auStack_40[0] = 0;
      }
      else {
        auStack_40[0] = fn_82695DA0(uVar3,param_3);
      }
      fn_826EBE48(param_1 + 0x34,auStack_40);
    }
    else if ((ulonglong)*(uint *)(iVar4 + 0x38) != 0) {
      uVar2 = *(uint *)(param_1 + 0x38);
      fn_826A2CB0(param_1,(ulonglong)*(uint *)(iVar4 + 0x38) + (ulonglong)uVar2);
      uVar8 = 0;
      if (*(int *)(iVar4 + 0x38) != 0) {
        iVar9 = 0;
        iVar5 = uVar2 << 2;
        do {
          uVar3 = fn_8267B890(uVar1,0x10,0);
          if ((uVar3 & 0xffffffff) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = fn_82695DA0(uVar3,*(undefined4 *)(*(int *)(iVar4 + 0x34) + iVar9));
          }
          uVar8 = uVar8 + 1;
          iVar9 = iVar9 + 4;
          *(undefined4 *)(*(int *)(param_1 + 0x34) + iVar5) = uVar6;
          iVar5 = iVar5 + 4;
        } while (uVar8 < *(uint *)(iVar4 + 0x38));
      }
    }
  }
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + -1;
  return;
}

