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
extern int fn_82FA52E8();
extern int fn_83050858();
extern int fn_830514A8();
extern int fn_83054338();
extern int fn_83055EC8();


ulonglong fn_83053B10(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  char cVar5;
  ulonglong uVar6;
  int *piVar7;
  
  piVar7 = param_1 + 0xe;
  RtlEnterCriticalSection(piVar7);
  if ((param_1[0x2e] == 0) && (param_1[0x29] == 0)) {
    RtlLeaveCriticalSection(piVar7);
    return 0;
  }
  RtlEnterCriticalSection((ulonglong)(uint)param_1[0x18] + 0x10);
  uVar4 = fn_82FA52E8(*(undefined4 *)(param_1[0x18] + 0x8c));
  if ((uVar4 & 0xffffffff) != 0) goto LAB_83053c74;
  if (param_1[0x2d] == 0) {
    uVar1 = *(uint *)(param_1[0x28] + 0xc);
  }
  else {
    uVar1 = *(uint *)(param_1[0x2d] + 0x18);
  }
  uVar6 = (ulonglong)(uint)param_1[0x26];
  for (iVar2 = param_1[0x2f]; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xc)) {
    uVar6 = uVar6 - *(uint *)(iVar2 + 0x18);
  }
  if (((ulonglong)uVar1 <= (uVar6 & 0xffffffff)) &&
     (cVar5 = fn_83050858(param_1,uVar6 - uVar1), cVar5 == '\0')) {
    cVar5 = (**(code **)(*param_1 + 0x34))(param_1);
    if (cVar5 == '\0') {
      iVar2 = param_1[0x28];
      param_1[0x26] = param_1[0x26] - uVar1;
      uVar4 = (ulonglong)*(uint *)(iVar2 + 8);
      fn_83054338(param_1 + 0x27,iVar2);
      iVar3 = param_1[0x18];
      if (*(int *)(iVar3 + 0x78) == 0) {
        *(int *)(iVar3 + 0x78) = iVar2;
        *(undefined4 *)(iVar2 + 0x10) = 0;
        fn_830514A8(param_1);
      }
      else {
        *(int *)(iVar2 + 0x10) = *(int *)(iVar3 + 0x78);
        *(int *)(iVar3 + 0x78) = iVar2;
        fn_830514A8(param_1);
      }
      goto LAB_83053c74;
    }
    uVar4 = fn_82FA52E8(*(undefined4 *)(param_1[0x18] + 0x8c));
    if ((uVar4 & 0xffffffff) != 0) goto LAB_83053c74;
  }
  fn_83055EC8(param_1[0x18]);
LAB_83053c74:
  RtlLeaveCriticalSection((ulonglong)(uint)param_1[0x18] + 0x10);
  RtlLeaveCriticalSection(piVar7);
  return uVar4;
}

