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
extern int fn_8265CA60();
extern int fn_8265CAA0();
extern int fn_82A1E0C0();
extern int fn_82F63F40();
extern int fn_82F672D8();
extern int fn_82F68CC0();


void fn_828129A0(int param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  char *pcVar7;
  
  iVar2 = *(int *)(param_1 + 0xcc);
  uVar6 = (ulonglong)*(uint *)(param_1 + 0xd0) + 1;
  lVar3 = uVar6 * 0x30;
  if (0x5555555 < (uVar6 & 0xffffffff)) {
    lVar3 = -1;
  }
  uVar4 = fn_8265CA60(lVar3);
  *(int *)(param_1 + 0xcc) = (int)uVar4;
  if (iVar2 != 0) {
    fn_82F68CC0(uVar4,iVar2,(ulonglong)*(uint *)(param_1 + 0xd0) * 0x30);
    fn_8265CAA0(iVar2);
  }
  pcVar7 = param_2;
  if (param_2 != (char *)0x0) {
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    if ((int)pcVar7 - (int)param_2 != 1) {
      fn_82F672D8((ulonglong)*(uint *)(param_1 + 0xd0) * 0x30 +
                   (ulonglong)*(uint *)(param_1 + 0xcc) + 0xc,param_2,0x1f);
      goto LAB_82812a74;
    }
  }
  fn_82F63F40((ulonglong)*(uint *)(param_1 + 0xd0) * 0x30 +
                    (ulonglong)*(uint *)(param_1 + 0xcc) + 0xc,0xffffffff8201e068);
LAB_82812a74:
  *(undefined4 *)(*(int *)(param_1 + 0xd0) * 0x30 + *(int *)(param_1 + 0xcc) + 8) = param_3;
  *(undefined1 *)(*(int *)(param_1 + 0xd0) * 0x30 + *(int *)(param_1 + 0xcc) + 0x2c) = 0;
  uVar5 = fn_82A1E0C0(0,0,0xffffffff82812488,param_1,4,
                       (ulonglong)*(uint *)(param_1 + 0xd0) * 0x30 +
                       (ulonglong)*(uint *)(param_1 + 0xcc));
  *(undefined4 *)(*(int *)(param_1 + 0xd0) * 0x30 + *(int *)(param_1 + 0xcc) + 4) = uVar5;
  *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
  return;
}

