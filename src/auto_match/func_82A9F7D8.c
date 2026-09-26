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
extern int fn_82A9C190();
extern int fn_82A9EE50();
extern int fn_82F65AC0();


void fn_82A9F7D8(int param_1,char *param_2,ulonglong param_3)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  
  if (*(int *)(param_1 + 0x94) == 2) {
    pcVar6 = *(char **)(param_1 + 0x80);
    pcVar7 = param_2;
    do {
      cVar1 = *pcVar7;
      cVar2 = *pcVar6;
      if (cVar1 == '\0') break;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 == cVar2);
    if ((cVar1 == cVar2) &&
       ((ulonglong)*(uint *)(*(char **)(param_1 + 0x80) + 0x100) == (param_3 & 0xffffffff))) {
      return;
    }
  }
  if (*(int *)(param_1 + 0xa0) == 0) {
    iVar4 = fn_82F65AC0(*(undefined4 *)(param_1 + 0x84),0xffffffff820d2b50);
    uVar5 = param_3;
    pcVar6 = param_2;
    if (iVar4 == 0) {
      uVar5 = 0;
      pcVar6 = (char *)0x0;
    }
    fn_82A9C190(param_1,pcVar6,uVar5);
  }
  if (*(int *)(param_1 + 0x94) != 1) {
    uVar3 = *(uint *)(param_1 + 0xa0) & 0xffff;
    if (0xfffd < uVar3) {
      *(undefined4 *)(param_1 + 0x90) = 0x80004005;
    }
    uVar8 = *(ushort *)(param_1 + 0x9c) + uVar3;
    if (*(ushort *)(param_1 + 0x9c) == 0) {
      uVar8 = uVar3 + 1;
    }
    *(undefined2 *)(param_1 + 0xa2) = 0;
    *(uint *)(param_1 + 0xa0) = uVar8 & 0xffff | *(uint *)(param_1 + 0xa0);
  }
  *(undefined2 *)(param_1 + 0x9c) = 0;
  *(undefined2 *)(param_1 + 0x9e) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  fn_82A9EE50(param_1,param_2,param_3);
  *(undefined4 *)(param_1 + 0x94) = 2;
  return;
}

