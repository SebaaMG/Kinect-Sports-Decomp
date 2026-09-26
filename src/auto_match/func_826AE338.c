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
extern int fn_826824B0();
extern int fn_826961B0();
extern int fn_826B32D0();


undefined1 * fn_826AE338(undefined1 *param_1,int param_2,ulonglong param_3)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  char *pcVar6;
  ulonglong uVar7;
  
  pcVar6 = (char *)0x0;
  lVar4 = (longlong)(*(int *)(param_2 + 8) - *(int *)(param_2 + 0xc) >> 4);
  uVar7 = ((ulonglong)*(uint *)(param_2 + 0x1c) - 1 & 0x7ffffff) * 0x20 + lVar4;
  if ((param_3 & 0xffffffff) <= (uVar7 & 0xffffffff)) {
    uVar2 = (int)uVar7 - (int)param_3;
    pcVar6 = (char *)(*(int *)((uVar2 >> 3 & 0x1ffffffc) + *(int *)(param_2 + 0x18)) +
                     (uVar2 & 0x1f) * 0x10);
  }
  cVar1 = *pcVar6;
  if (cVar1 == '\x02') {
    iVar5 = 5;
  }
  else if (cVar1 == '\x05') {
    iVar5 = 3;
  }
  else {
    if ((cVar1 == '\x03') || (bVar3 = false, cVar1 == '\x04')) {
      bVar3 = true;
    }
    if (!bVar3) {
      *param_1 = 0;
      return param_1;
    }
    iVar5 = 4;
  }
  uVar7 = fn_826B32D0(param_2,*(undefined4 *)(*(int *)(param_2 + 0x78) + 0x2a0),
                            (iVar5 + 2) * 4 + *(int *)(param_2 + 0x78),1,
                            (((ulonglong)*(uint *)(param_2 + 0x1c) & 0x7ffffff) * 0x20 + lVar4 +
                            -0x20) - param_3);
  fn_826961B0(param_1,uVar7);
  if ((uVar7 & 0xffffffff) != 0) {
    fn_826824B0(uVar7);
  }
  return param_1;
}

