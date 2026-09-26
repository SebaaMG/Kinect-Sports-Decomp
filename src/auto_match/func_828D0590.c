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
extern int fn_8288A398();
extern int fn_828A0C50();
extern int fn_828A1B60();
extern int fn_828A1C08();
extern int fn_828A1C10();
extern int fn_828AC808();
extern int fn_828CFBD8();
extern int fn_828CFC68();
extern int fn_828D04D8();


undefined8 fn_828D0590(int param_1,char param_2)

{
  bool bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  char cVar6;
  int iVar5;
  longlong lVar7;
  
  if (param_2 == '\0') {
    return 1;
  }
  uVar2 = fn_828A1C08(*(undefined4 *)(param_1 + 8));
  uVar3 = fn_828A1C10(*(undefined4 *)(param_1 + 8));
  lVar7 = (ulonglong)*(uint *)(param_1 + 8) + 0x60;
  uVar4 = fn_828A1B60((ulonglong)*(uint *)(param_1 + 8));
  if ((*(char *)(param_1 + 0xc) != '\0') && (cVar6 = fn_828A0C50(param_1,uVar4), cVar6 != '\0')) {
    fn_828CFC68(param_1);
  }
  if (*(char *)(param_1 + 0xc) == '\0') {
    fn_828CFBD8(param_1,uVar4);
  }
  if (*(char *)(param_1 + 0xc) == '\0') {
    return 0;
  }
  if (((ulonglong)*(byte *)(param_1 + 0x11) != (uVar2 & 0xff)) ||
     (bVar1 = false, (ulonglong)*(byte *)(param_1 + 0x12) != (uVar3 & 0xff))) {
    bVar1 = true;
  }
  if (!bVar1) {
    cVar6 = fn_828AC808(param_1 + 0x18,lVar7);
    bVar1 = false;
    if (cVar6 == '\0') goto LAB_828d0688;
  }
  bVar1 = true;
LAB_828d0688:
  if (bVar1) {
    iVar5 = fn_8288A398();
    fn_828D04D8(param_1,uVar2,uVar3,*(uint *)(iVar5 + 0x38) & 0xffff,lVar7,
                  *(uint *)(*(int *)(param_1 + 8) + 0x28) & 0xff);
  }
  return 0;
}

