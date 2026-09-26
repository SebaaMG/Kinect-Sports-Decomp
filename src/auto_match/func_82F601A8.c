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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82F60B90();
extern int fn_82F60C10();
extern int fn_82F61538();


longlong fn_82F601A8(int param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4,
                      uint param_5,ulonglong param_6)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  if (((int)param_4 == 0) || ((param_3 & 0xffffffff) == 0)) {
    return -0x7ddbfbfd;
  }
  RtlEnterCriticalSection(param_1 + 0xd4);
  if (*(char *)(param_1 + 4) == '\0') {
    lVar3 = (param_4 & 0x3fffffff) << 2;
    *(undefined4 *)(param_1 + 0x14) = 0x64004000;
    uVar1 = fn_8265C940(lVar3);
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
    iVar2 = fn_8265C940(lVar3,*(undefined4 *)(param_1 + 0x14));
    *(int *)(param_1 + 0x20) = iVar2;
    if ((*(int *)(param_1 + 0x1c) == 0) || (iVar2 == 0)) {
      lVar3 = -0x7ddbfbfe;
    }
    else {
      *(uint *)(param_1 + 0x18) = param_5;
      *(int *)(param_1 + 8) = (int)param_4;
      *(undefined4 *)(param_1 + 0xc) = 0;
      lVar3 = fn_82F60B90(param_1 + 0x24,param_2,param_3);
      if (-1 < lVar3) {
        *(int *)(param_1 + 0x10) = (int)param_2;
        if ((param_5 & 1) == 0) {
          param_6 = -(ulonglong)((param_5 & 2) != 0) & param_6;
        }
        lVar3 = fn_82F61538(param_1 + 0x90,param_4,param_6);
        if (-1 < lVar3) {
          *(undefined1 *)(param_1 + 4) = 1;
          goto LAB_82f602e8;
        }
        fn_82F60C10(param_1 + 0x24);
      }
      fn_8265C990(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x14));
      fn_8265C990(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x14));
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
  }
  else {
    lVar3 = -0x7ddbfbfc;
  }
LAB_82f602e8:
  RtlLeaveCriticalSection(param_1 + 0xd4);
  return lVar3;
}

